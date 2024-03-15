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
	/// Resumen de Retiro
	/// </summary>
	public ref class Retiro : public System::Windows::Forms::Form
	{
	public:
		Retiro(String^ usr, String^ salt)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew BaseDatos();
			this->usuario = usr;
			this->saldo = salt;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Retiro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnRetirar;

	private: System::Windows::Forms::TextBox^ txtNewSaldo;
	private: BaseDatos^ data;
	private: String^ usuario;
	private: String^ saldo;
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
			this->btnRetirar = (gcnew System::Windows::Forms::Button());
			this->txtNewSaldo = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Size = System::Drawing::Size(274, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese la cantidad a retirar";
			// 
			// btnRetirar
			// 
			this->btnRetirar->BackColor = System::Drawing::Color::Black;
			this->btnRetirar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRetirar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRetirar->ForeColor = System::Drawing::Color::White;
			this->btnRetirar->Location = System::Drawing::Point(179, 194);
			this->btnRetirar->Name = L"btnRetirar";
			this->btnRetirar->Size = System::Drawing::Size(122, 35);
			this->btnRetirar->TabIndex = 4;
			this->btnRetirar->Text = L"Retirar";
			this->btnRetirar->UseVisualStyleBackColor = false;
			this->btnRetirar->Click += gcnew System::EventHandler(this, &Retiro::btnRetirar_Click);
			// 
			// txtNewSaldo
			// 
			this->txtNewSaldo->BackColor = System::Drawing::Color::Black;
			this->txtNewSaldo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNewSaldo->ForeColor = System::Drawing::Color::White;
			this->txtNewSaldo->Location = System::Drawing::Point(132, 101);
			this->txtNewSaldo->Name = L"txtNewSaldo";
			this->txtNewSaldo->Size = System::Drawing::Size(169, 31);
			this->txtNewSaldo->TabIndex = 3;
			// 
			// Retiro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(479, 267);
			this->Controls->Add(this->btnRetirar);
			this->Controls->Add(this->txtNewSaldo);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Retiro";
			this->Text = L"Retiro";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRetirar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!String::IsNullOrEmpty(txtNewSaldo->Text)) {
			Decimal cantidadRetiro;
			Decimal saldoActual = Decimal::Parse(this->saldo);
			if (Decimal::TryParse(txtNewSaldo->Text, cantidadRetiro)) {

				if (cantidadRetiro <= saldoActual) {
					// La cantidad a retirar es menor o igual al saldo disponible

					this->data->openConnection();
					this->data->makeNegMovement(usuario, txtNewSaldo->Text);
					this->data->closeConnection();
					MessageBox::Show(L"Retiro logrado con exito.");
					this->txtNewSaldo->ResetText();
				}
				else {
					// La cantidad a retirar es mayor que el saldo disponible
					MessageBox::Show(L"La cantidad a retirar es mayor que el saldo disponible");
				}
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
	};
}
