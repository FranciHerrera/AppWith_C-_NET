#pragma once
using namespace std;
using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;

ref class BaseDatos
{
private:
	String^ connectionstring;
	MySqlConnection^ connection;
public:
	BaseDatos();
	property MySqlConnection^ Connection
	{
		MySqlConnection^ get()
		{
			return connection;
		}
	}
	bool login(String^, String^);
	DataTable^ getData();
	void insert(String^, String^, String^, String^, String^);
	void modify(String^, String^, String^, String^, String^,String^);
	void clean(String^);
	void changePassword(String^,String^);
	void makeMovement(String^,String^);
	void makeNegMovement(String^, String^);
	int getActualMoney(String^);
	DataTable^ showMovements(String^);
	String^ getDate();
	void openConnection();
	void closeConnection();
};

