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
	/// Resumen de Deposito
	/// </summary>
	public ref class Deposito : public System::Windows::Forms::Form
	{
	public:
		Deposito(String^ usr)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew BaseDatos();
			this->usuario = usr;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Deposito()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtNewSaldo;
	private: System::Windows::Forms::Button^ btnDepositar;
	private: BaseDatos^ data;
	private: String^ usuario;

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
			this->txtNewSaldo = (gcnew System::Windows::Forms::TextBox());
			this->btnDepositar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese la cantidad a depositar";
			// 
			// txtNewSaldo
			// 
			this->txtNewSaldo->BackColor = System::Drawing::Color::Black;
			this->txtNewSaldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNewSaldo->ForeColor = System::Drawing::Color::White;
			this->txtNewSaldo->Location = System::Drawing::Point(121, 99);
			this->txtNewSaldo->Name = L"txtNewSaldo";
			this->txtNewSaldo->Size = System::Drawing::Size(182, 31);
			this->txtNewSaldo->TabIndex = 1;
			// 
			// btnDepositar
			// 
			this->btnDepositar->BackColor = System::Drawing::Color::Black;
			this->btnDepositar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDepositar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDepositar->ForeColor = System::Drawing::Color::White;
			this->btnDepositar->Location = System::Drawing::Point(146, 185);
			this->btnDepositar->Name = L"btnDepositar";
			this->btnDepositar->Size = System::Drawing::Size(157, 38);
			this->btnDepositar->TabIndex = 2;
			this->btnDepositar->Text = L"Depositar";
			this->btnDepositar->UseVisualStyleBackColor = false;
			this->btnDepositar->Click += gcnew System::EventHandler(this, &Deposito::btnDepositar_Click);
			// 
			// Deposito
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(479, 267);
			this->Controls->Add(this->btnDepositar);
			this->Controls->Add(this->txtNewSaldo);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Deposito";
			this->Text = L"Deposito";
			this->Load += gcnew System::EventHandler(this, &Deposito::Deposito_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnDepositar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(txtNewSaldo->Text)) {
			Decimal nuevoSaldo;

			if (Decimal::TryParse(txtNewSaldo->Text, nuevoSaldo)) {
				// La conversión fue exitosa, 'nuevoSaldo' contiene el valor numérico

				this->data->openConnection();
				this->data->makeMovement(usuario, txtNewSaldo->Text);
				this->data->closeConnection();
				MessageBox::Show(L"Deposito logrado con exito.");
				this->txtNewSaldo->ResetText();
			}
			else {
				// La conversión no fue exitosa, 'txtNewSaldo->Text' no es un número
				MessageBox::Show(L"Debe llenar el campo con números válidos");
			}
		}
		else {
			MessageBox::Show(L"El campo no debe estar vacío");
		}
	}
	private: System::Void Deposito_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
