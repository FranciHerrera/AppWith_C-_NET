#pragma once

#include "BaseDatos.h"
#include "CambiaContra.h"
#include "Retiro.h"
#include "Deposito.h"
#include "Movimientos.h"
#include "Clientes.h"

namespace BancoSecond {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		Inicio(String^ user)
		{
			InitializeComponent();
			//this->data = gcnew BaseDatos();
			lbUsuario->Text = user;
			if (user != "Admin") {
				btnClientes->Hide();
			}
			this->data = gcnew BaseDatos();
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnChangePasw;
	protected:



	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ lbApellido;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ lbNombre;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ lbSaldo;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lbUsuario;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnClientes;

	private: System::Windows::Forms::Button^ btnMovim;

	private: System::Windows::Forms::Button^ btnDepositar;

	private: System::Windows::Forms::Button^ btnRetirar;

	private: BaseDatos^ data;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ lbDomicilio;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ lbEdad;
	private: System::Windows::Forms::Panel^ panelContenedor;
	private: System::Windows::Forms::Button^ btnSalir;
	private: String^ saldoString;
	private: System::Windows::Forms::Label^ label4;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->lbDomicilio = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->lbEdad = (gcnew System::Windows::Forms::Label());
			this->btnChangePasw = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->lbApellido = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lbNombre = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->lbSaldo = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lbUsuario = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnClientes = (gcnew System::Windows::Forms::Button());
			this->btnMovim = (gcnew System::Windows::Forms::Button());
			this->btnDepositar = (gcnew System::Windows::Forms::Button());
			this->btnRetirar = (gcnew System::Windows::Forms::Button());
			this->panelContenedor = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panelContenedor->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->btnSalir);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->lbDomicilio);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->lbEdad);
			this->panel1->Controls->Add(this->btnChangePasw);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->lbApellido);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->lbNombre);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->lbSaldo);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->lbUsuario);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(173, 322);
			this->panel1->TabIndex = 0;
			this->panel1->MouseEnter += gcnew System::EventHandler(this, &Inicio::panel1_MouseEnter);
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::Black;
			this->btnSalir->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSalir->ForeColor = System::Drawing::Color::White;
			this->btnSalir->Location = System::Drawing::Point(107, 0);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(66, 23);
			this->btnSalir->TabIndex = 8;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &Inicio::btnSalir_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Black;
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(0, 231);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(173, 10);
			this->panel8->TabIndex = 29;
			// 
			// lbDomicilio
			// 
			this->lbDomicilio->AutoSize = true;
			this->lbDomicilio->BackColor = System::Drawing::Color::Black;
			this->lbDomicilio->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbDomicilio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDomicilio->ForeColor = System::Drawing::Color::White;
			this->lbDomicilio->Location = System::Drawing::Point(0, 202);
			this->lbDomicilio->Name = L"lbDomicilio";
			this->lbDomicilio->Size = System::Drawing::Size(114, 29);
			this->lbDomicilio->TabIndex = 28;
			this->lbDomicilio->Text = L"Domicilio";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(0, 192);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(173, 10);
			this->panel7->TabIndex = 27;
			// 
			// lbEdad
			// 
			this->lbEdad->AutoSize = true;
			this->lbEdad->BackColor = System::Drawing::Color::Black;
			this->lbEdad->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbEdad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEdad->ForeColor = System::Drawing::Color::White;
			this->lbEdad->Location = System::Drawing::Point(0, 163);
			this->lbEdad->Name = L"lbEdad";
			this->lbEdad->Size = System::Drawing::Size(70, 29);
			this->lbEdad->TabIndex = 26;
			this->lbEdad->Text = L"Edad";
			// 
			// btnChangePasw
			// 
			this->btnChangePasw->BackColor = System::Drawing::Color::Black;
			this->btnChangePasw->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnChangePasw->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnChangePasw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChangePasw->ForeColor = System::Drawing::Color::White;
			this->btnChangePasw->Location = System::Drawing::Point(12, 258);
			this->btnChangePasw->Name = L"btnChangePasw";
			this->btnChangePasw->Size = System::Drawing::Size(144, 52);
			this->btnChangePasw->TabIndex = 25;
			this->btnChangePasw->Text = L"Cambiar\r\nContraseña";
			this->btnChangePasw->UseVisualStyleBackColor = false;
			this->btnChangePasw->Click += gcnew System::EventHandler(this, &Inicio::btnChangePasw_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Black;
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 153);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(173, 10);
			this->panel6->TabIndex = 18;
			// 
			// lbApellido
			// 
			this->lbApellido->AutoSize = true;
			this->lbApellido->BackColor = System::Drawing::Color::Black;
			this->lbApellido->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbApellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbApellido->ForeColor = System::Drawing::Color::White;
			this->lbApellido->Location = System::Drawing::Point(0, 124);
			this->lbApellido->Name = L"lbApellido";
			this->lbApellido->Size = System::Drawing::Size(102, 29);
			this->lbApellido->TabIndex = 17;
			this->lbApellido->Text = L"Apellido";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 114);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(173, 10);
			this->panel5->TabIndex = 16;
			// 
			// lbNombre
			// 
			this->lbNombre->AutoSize = true;
			this->lbNombre->BackColor = System::Drawing::Color::Black;
			this->lbNombre->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNombre->ForeColor = System::Drawing::Color::White;
			this->lbNombre->Location = System::Drawing::Point(0, 85);
			this->lbNombre->Name = L"lbNombre";
			this->lbNombre->Size = System::Drawing::Size(101, 29);
			this->lbNombre->TabIndex = 15;
			this->lbNombre->Text = L"Nombre";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 73);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(173, 12);
			this->panel4->TabIndex = 14;
			// 
			// lbSaldo
			// 
			this->lbSaldo->AutoSize = true;
			this->lbSaldo->BackColor = System::Drawing::Color::Black;
			this->lbSaldo->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbSaldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSaldo->ForeColor = System::Drawing::Color::White;
			this->lbSaldo->Location = System::Drawing::Point(0, 44);
			this->lbSaldo->Name = L"lbSaldo";
			this->lbSaldo->Size = System::Drawing::Size(76, 29);
			this->lbSaldo->TabIndex = 13;
			this->lbSaldo->Text = L"Saldo";
			this->lbSaldo->MouseEnter += gcnew System::EventHandler(this, &Inicio::panel1_MouseEnter);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Black;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 29);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(173, 15);
			this->panel3->TabIndex = 12;
			// 
			// lbUsuario
			// 
			this->lbUsuario->AutoSize = true;
			this->lbUsuario->BackColor = System::Drawing::Color::Black;
			this->lbUsuario->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUsuario->ForeColor = System::Drawing::Color::White;
			this->lbUsuario->Location = System::Drawing::Point(0, 0);
			this->lbUsuario->Name = L"lbUsuario";
			this->lbUsuario->Size = System::Drawing::Size(96, 29);
			this->lbUsuario->TabIndex = 11;
			this->lbUsuario->Text = L"Usuario";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->btnClientes);
			this->panel2->Controls->Add(this->btnMovim);
			this->panel2->Controls->Add(this->btnDepositar);
			this->panel2->Controls->Add(this->btnRetirar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(173, 267);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(479, 55);
			this->panel2->TabIndex = 1;
			this->panel2->MouseEnter += gcnew System::EventHandler(this, &Inicio::panel1_MouseEnter);
			// 
			// btnClientes
			// 
			this->btnClientes->BackColor = System::Drawing::Color::Black;
			this->btnClientes->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClientes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnClientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClientes->ForeColor = System::Drawing::Color::White;
			this->btnClientes->Location = System::Drawing::Point(367, 10);
			this->btnClientes->Name = L"btnClientes";
			this->btnClientes->Size = System::Drawing::Size(105, 34);
			this->btnClientes->TabIndex = 29;
			this->btnClientes->Text = L"Clientes";
			this->btnClientes->UseVisualStyleBackColor = false;
			this->btnClientes->Click += gcnew System::EventHandler(this, &Inicio::btnClientes_Click);
			// 
			// btnMovim
			// 
			this->btnMovim->BackColor = System::Drawing::Color::Black;
			this->btnMovim->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMovim->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnMovim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMovim->ForeColor = System::Drawing::Color::White;
			this->btnMovim->Location = System::Drawing::Point(236, 10);
			this->btnMovim->Name = L"btnMovim";
			this->btnMovim->Size = System::Drawing::Size(125, 34);
			this->btnMovim->TabIndex = 28;
			this->btnMovim->Text = L"Movimientos";
			this->btnMovim->UseVisualStyleBackColor = false;
			this->btnMovim->Click += gcnew System::EventHandler(this, &Inicio::btnMovim_Click);
			// 
			// btnDepositar
			// 
			this->btnDepositar->BackColor = System::Drawing::Color::Black;
			this->btnDepositar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDepositar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDepositar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDepositar->ForeColor = System::Drawing::Color::White;
			this->btnDepositar->Location = System::Drawing::Point(122, 10);
			this->btnDepositar->Name = L"btnDepositar";
			this->btnDepositar->Size = System::Drawing::Size(108, 34);
			this->btnDepositar->TabIndex = 27;
			this->btnDepositar->Text = L"Depositar";
			this->btnDepositar->UseVisualStyleBackColor = false;
			this->btnDepositar->Click += gcnew System::EventHandler(this, &Inicio::btnDepositar_Click);
			// 
			// btnRetirar
			// 
			this->btnRetirar->BackColor = System::Drawing::Color::Black;
			this->btnRetirar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRetirar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRetirar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRetirar->ForeColor = System::Drawing::Color::White;
			this->btnRetirar->Location = System::Drawing::Point(8, 10);
			this->btnRetirar->Name = L"btnRetirar";
			this->btnRetirar->Size = System::Drawing::Size(108, 34);
			this->btnRetirar->TabIndex = 26;
			this->btnRetirar->Text = L"Retirar";
			this->btnRetirar->UseVisualStyleBackColor = false;
			this->btnRetirar->Click += gcnew System::EventHandler(this, &Inicio::btnRetirar_Click);
			// 
			// panelContenedor
			// 
			this->panelContenedor->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panelContenedor->Controls->Add(this->label4);
			this->panelContenedor->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelContenedor->Location = System::Drawing::Point(173, 0);
			this->panelContenedor->Name = L"panelContenedor";
			this->panelContenedor->Size = System::Drawing::Size(479, 267);
			this->panelContenedor->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(419, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 34);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Banco\r\nAbstract";
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(652, 322);
			this->Controls->Add(this->panelContenedor);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Inicio::Inicio_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panelContenedor->ResumeLayout(false);
			this->panelContenedor->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		public:
			Form^ actual;
			void abrirPanel(Form^ hijo) {
				if (this->actual != nullptr) {
						this->actual->Close();
				}
				this->actual = hijo;
				hijo->Dock = DockStyle::Fill;
				hijo->TopLevel = false;
				panelContenedor->Controls->Add(hijo);
				this->panelContenedor->Tag = hijo;
				hijo->Show();
			}
		public: void consultar() {
			this->data->openConnection();
			String^ nQuery = "select Nombre,Apellido,Edad,Saldo,Domicilio from Cuenta where Usuario = '"+ lbUsuario->Text +"'";
			MySqlCommand^ cursor = gcnew MySqlCommand(nQuery,this->data->Connection);
			MySqlDataReader^ dataReader = cursor->ExecuteReader();

			if (dataReader->Read())
			{
				String^ nombre = dataReader["Nombre"]->ToString();
				String^ apellido = dataReader["Apellido"]->ToString();
				String^ edad = dataReader["Edad"]->ToString();
				String^ saldo = dataReader["Saldo"]->ToString();
				String^ domicilio = dataReader["Domicilio"]->ToString();

				lbNombre->Text = nombre;
				lbApellido->Text = apellido;
				lbEdad->Text = edad;
				lbSaldo->Text = "$"+saldo+" pesos";
				saldoString = saldo;
				lbDomicilio->Text = domicilio;
			}
			dataReader->Close();
			this->data->closeConnection();
		}

	private: System::Void Inicio_Load(System::Object^ sender, System::EventArgs^ e) {
		this->consultar();
	}
	private: System::Void btnChangePasw_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew BancoSecond::CambiaContra(lbUsuario->Text));
	}
	private: System::Void btnRetirar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew BancoSecond::Retiro(lbUsuario->Text,saldoString));
	}
	private: System::Void btnDepositar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew BancoSecond::Deposito(lbUsuario->Text));
	}
	private: System::Void btnMovim_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew BancoSecond::Movimientos(lbUsuario->Text));
	}
	private: System::Void btnClientes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->abrirPanel(gcnew BancoSecond::Clientes());
	}
	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void panel1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		ActualizarSaldo();
	}
	public: void ActualizarSaldo() {
			   this->data->openConnection();
			   String^ nQuery = "select Saldo from Cuenta where Usuario = '" + lbUsuario->Text + "'";
			   MySqlCommand^ cursor = gcnew MySqlCommand(nQuery, this->data->Connection);
			   MySqlDataReader^ dataReader = cursor->ExecuteReader();

			   if (dataReader->Read())
			   {
				   String^ saldo = dataReader["Saldo"]->ToString();
				   lbSaldo->Text = "$" + saldo + " pesos";
				   saldoString = saldo;
			   }
			   dataReader->Close();
			   this->data->closeConnection();
		   }
};
}
