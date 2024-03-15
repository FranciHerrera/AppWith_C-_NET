#pragma once

#include "BaseDatos.h"

namespace BancoSecond {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CambiaContra
	/// </summary>
	public ref class CambiaContra : public System::Windows::Forms::Form
	{
	public:
		CambiaContra(String^ usr)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew BaseDatos();
			lbUsuario->Text = usr;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CambiaContra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbPasw;
	private: System::Windows::Forms::TextBox^ txtNewPasw;
	private: BaseDatos^ data;
	private: System::Windows::Forms::Label^ lbUsuario;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbPasw = (gcnew System::Windows::Forms::Label());
			this->txtNewPasw = (gcnew System::Windows::Forms::TextBox());
			this->lbUsuario = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cambiar  contraseña";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(173, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Cambiar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CambiaContra::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(123, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Contraseña actual";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(123, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Nueva contraseña";
			// 
			// lbPasw
			// 
			this->lbPasw->AutoSize = true;
			this->lbPasw->BackColor = System::Drawing::Color::Black;
			this->lbPasw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPasw->ForeColor = System::Drawing::Color::White;
			this->lbPasw->Location = System::Drawing::Point(125, 91);
			this->lbPasw->Name = L"lbPasw";
			this->lbPasw->Size = System::Drawing::Size(14, 20);
			this->lbPasw->TabIndex = 4;
			this->lbPasw->Text = L"-";
			// 
			// txtNewPasw
			// 
			this->txtNewPasw->BackColor = System::Drawing::Color::Black;
			this->txtNewPasw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNewPasw->ForeColor = System::Drawing::Color::White;
			this->txtNewPasw->Location = System::Drawing::Point(126, 154);
			this->txtNewPasw->Name = L"txtNewPasw";
			this->txtNewPasw->Size = System::Drawing::Size(195, 26);
			this->txtNewPasw->TabIndex = 5;
			// 
			// lbUsuario
			// 
			this->lbUsuario->AutoSize = true;
			this->lbUsuario->BackColor = System::Drawing::Color::Black;
			this->lbUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUsuario->ForeColor = System::Drawing::Color::White;
			this->lbUsuario->Location = System::Drawing::Point(12, 40);
			this->lbUsuario->Name = L"lbUsuario";
			this->lbUsuario->Size = System::Drawing::Size(51, 20);
			this->lbUsuario->TabIndex = 6;
			this->lbUsuario->Text = L"label4";
			this->lbUsuario->Visible = false;
			// 
			// CambiaContra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(479, 267);
			this->Controls->Add(this->lbUsuario);
			this->Controls->Add(this->txtNewPasw);
			this->Controls->Add(this->lbPasw);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CambiaContra";
			this->Text = L"CambiaContra";
			this->Load += gcnew System::EventHandler(this, &CambiaContra::CambiaContra_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CambiaContra_Load(System::Object^ sender, System::EventArgs^ e) {
		this->data->openConnection();
		String^ nQuery = "select Contrasena from Cuenta where Usuario = '" + lbUsuario->Text + "'";
		MySqlCommand^ cursor = gcnew MySqlCommand(nQuery, this->data->Connection);
		MySqlDataReader^ dataReader = cursor->ExecuteReader();

		if (dataReader->Read())
		{
			String^ contra = dataReader["Contrasena"]->ToString();

			lbPasw->Text = contra;
		}
		dataReader->Close();
		this->data->closeConnection();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtNewPasw->Text != "") {
		this->data->openConnection();
		this->data->changePassword(txtNewPasw->Text, lbUsuario->Text);
		this->data->closeConnection();
		MessageBox::Show(L"Contrasena cambiada");
		this->lbPasw->Text = this->txtNewPasw->Text;
		this->txtNewPasw->Text = "";
	}
	else {
		MessageBox::Show(L"Debe llenar el campo");
	}
}
};
}
