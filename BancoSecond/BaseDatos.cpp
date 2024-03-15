#include "pch.h"
#include "BaseDatos.h"

using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

BaseDatos::BaseDatos()
{
    this->connectionstring = "datasource=localhost; username=root; password=""; database=Banco;";
    this->connection = gcnew MySqlConnection(this->connectionstring);
}

bool BaseDatos::login(String^ user, String^ pasw)
{
    String^ sql = "select * from cuenta where Usuario = '" + user + "' and Contrasena = '" + pasw + "'";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, connection);
    MySqlDataReader^ dataReader;
	try {
		this->connection->Open();
		dataReader = cursor->ExecuteReader();
		if (dataReader->Read()) {
			MessageBox::Show(L"Bienvenido " + user);
			return true;
		}
		else {
			MessageBox::Show(L"Usuario o contraseña incorrectos");
			return false;
		}
	}
	catch (MySqlException^ sqlEx) {
		MessageBox::Show(L"Error de SQL: " + sqlEx->Message);
		return false;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return false;
	}
	finally {
		if (dataReader != nullptr) {
			dataReader->Close();
		}
		if (this->connection->State == ConnectionState::Open) {
			this->connection->Close();
		}
	}
}

DataTable^ BaseDatos::getData()
{
	try
	{
		String^ sqlQuery = "select * from Cuenta";
		MySqlCommand^ cursor = gcnew MySqlCommand(sqlQuery, this->connection);
		MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
		DataTable^ table = gcnew DataTable();
		data->Fill(table);
		return table;
	}
	catch (MySqlException^ e)
	{
		MessageBox::Show(L"Error de Sql: " + e->Message);
	}
}

void BaseDatos::insert(String^ n, String^ sn, String^ a, String^ addr, String^p)
{
	String^ usr = (n->Length >= 3) ? n->Substring(0, 3) : n;
	if (sn->Length > 0)
	{
		usr += sn[0];
	}
	usr += a;
	String^ sqlQuery = "insert into Cuenta(Usuario, Contrasena, Nombre, Apellido, Edad, Domicilio, Saldo) VALUES ('" + usr + "', '" + p + "', '" + n + "', '" + sn + "', " + a + ", '" + addr + "',"+0.00+");";
	MySqlCommand^ cursor = gcnew MySqlCommand(sqlQuery, this->connection);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (MySqlException^ e)
	{
		MessageBox::Show(L"Error de Sql: " + e->Message);
	}
	catch (Exception^ e) {
		MessageBox::Show(L"Error: " + e->Message);
	}
}

void BaseDatos::modify(String^ n, String^ sn, String^ a, String^ addr, String^ p, String^ reference)
{
	String^ sqlQuery = "update Cuenta set Nombre = '" + n + "', Apellido = '"+sn+"', Edad = " + a + ", Domicilio = '" + addr + "', Contrasena = '"+p+"' where Usuario = '" + reference + "';";
	MySqlCommand^ cursor = gcnew MySqlCommand(sqlQuery, this->connection);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (MySqlException^ e)
	{
		MessageBox::Show(L"Error de Sql: " + e->Message);
	}
}

void BaseDatos::clean(String^ usr)
{
	String^ sqlQuery = "delete from Cuenta where Usuario = '" + usr + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sqlQuery, this->connection);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (MySqlException^ e)
	{
		MessageBox::Show(L"Error de Sql: " + e->Message);
	}
}

void BaseDatos::changePassword(String^ passw,String^ reference)
{
	String^ sqlQuery = "update Cuenta set Contrasena = '" + passw + "' where Usuario = '" + reference + "';";
	MySqlCommand^ cursor = gcnew MySqlCommand(sqlQuery, this->connection);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (MySqlException^ e)
	{
		MessageBox::Show(L"Error de Sql: " + e->Message);
	}
}

void BaseDatos::makeMovement(String^ user,String^ cant)
{
	String^ fecha = getDate();
	int money = getActualMoney(user);
	int cantInt;
	if (Int32::TryParse(cant, cantInt)) {
		// La conversión fue exitosa, 'cantInt' contiene el valor numérico

		int suma = money + cantInt;
		String^ sqlQuery = "insert into Movimientos (Usuario, Cantidad, Fecha) VALUES ('" + user + "', " + cant + ", '" + fecha + "');"
			"update Cuenta set Saldo = " + suma + " where Usuario = '" + user + "';";
		MySqlCommand^ cursor = gcnew MySqlCommand(sqlQuery, this->connection);
		try
		{
			cursor->ExecuteNonQuery();
		}
		catch (MySqlException^ e)
		{
			MessageBox::Show(L"Error de Sql: " + e->Message);
		}
		catch (Exception^ e) {
			MessageBox::Show(L"Error: " + e->Message);
		}
	}
}

void BaseDatos::makeNegMovement(String^ user, String^ cant)
{
	String^ fecha = getDate();

	// Modifica la consulta SQL para insertar un movimiento negativo
	String^ sqlQuery = "insert into Movimientos (Usuario, Cantidad, Fecha) VALUES ('" + user + "', -" + cant + ", '" + fecha + "');";

	// Actualiza el saldo en la cuenta restando la cantidad
	sqlQuery += "update Cuenta set Saldo = Saldo - " + cant + " where Usuario = '" + user + "'";

	// Ejecuta la consulta
	MySqlCommand^ cursor = gcnew MySqlCommand(sqlQuery, this->connection);
	try {
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

int BaseDatos::getActualMoney(String^ user)
{
	String^ sqlQuery = "select Saldo from Cuenta where Usuario = '" + user + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sqlQuery, this->connection);

	try {
		Object^ resultado = cursor->ExecuteScalar();

		if (resultado != nullptr) {
			Decimal saldo;
			if (Decimal::TryParse(resultado->ToString(), saldo)) {
				// Convierte el saldo a un entero (puede haber pérdida de decimales)
				return Decimal::ToInt32(saldo);
			}
			else {
				MessageBox::Show("Error al convertir el saldo a Decimal");
				return 0; // Valor predeterminado en caso de error
			}
		}
		else {
			return 0; // Valor predeterminado si no hay resultado
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
		return 0; // Valor predeterminado en caso de excepción
	}
}

DataTable^ BaseDatos::showMovements(String^ user)
{
	String^ sqlQuery;
	if (user != "Admin") {
		sqlQuery = "select * from Movimientos where Usuario = '" + user + "'";
	}
	else {
		sqlQuery = "select * from Movimientos";
	}
	try
	{
		MySqlCommand^ cursor = gcnew MySqlCommand(sqlQuery, this->connection);
		MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
		DataTable^ table = gcnew DataTable();
		data->Fill(table);
		return table;
	}
	catch (MySqlException^ e)
	{
		MessageBox::Show(L"Error de Sql: " + e->Message);
	}
}

String^ BaseDatos::getDate()
{
	DateTime now = DateTime::Now;
	return now.ToString("yyyy-MM-dd HH:mm:ss");
}

void BaseDatos::openConnection()
{
	try
	{
		this->connection->Open();
	}
	catch (MySqlException^ e)
	{
		MessageBox::Show(L"La base de datos esta apagada o no fue posible acceder"+e->Message);
	}
}

void BaseDatos::closeConnection()
{
	this->connection->Close();
}


