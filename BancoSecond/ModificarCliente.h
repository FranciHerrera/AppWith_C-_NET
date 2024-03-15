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
	/// Resumen de ModificarCliente
	/// </summary>
	public ref class ModificarCliente : public System::Windows::Forms::Form
	{
	public:
		ModificarCliente(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		ModificarCliente(String^ u, String^ p, String^ n, String^ sn, String^ a, String^ addr)
		{
			InitializeComponent();
			this->data = gcnew BaseDatos();
			lbTitle->Text = u;
			txtNombre->Text = n;
			txtApellido->Text = sn;
			txtEdad->Text = a;
			textDomicilio->Text = addr;
			textContra->Text = p;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ModificarCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textContra;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textDomicilio;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ txtEdad;
	private: System::Windows::Forms::Button^ btnCrear;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lbTitle;

	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: BaseDatos^ data;
	private: System::Windows::Forms::Label^ label1;

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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textContra = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textDomicilio = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->btnCrear = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(286, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 18);
			this->label6->TabIndex = 66;
			this->label6->Text = L"Contraseña";
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(289, 221);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 2);
			this->panel5->TabIndex = 65;
			// 
			// textContra
			// 
			this->textContra->BackColor = System::Drawing::Color::Black;
			this->textContra->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textContra->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textContra->ForeColor = System::Drawing::Color::White;
			this->textContra->Location = System::Drawing::Point(289, 186);
			this->textContra->Name = L"textContra";
			this->textContra->Size = System::Drawing::Size(161, 29);
			this->textContra->TabIndex = 64;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(286, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 18);
			this->label5->TabIndex = 63;
			this->label5->Text = L"Domicilio";
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(289, 154);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 2);
			this->panel4->TabIndex = 62;
			// 
			// textDomicilio
			// 
			this->textDomicilio->BackColor = System::Drawing::Color::Black;
			this->textDomicilio->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textDomicilio->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textDomicilio->ForeColor = System::Drawing::Color::White;
			this->textDomicilio->Location = System::Drawing::Point(289, 119);
			this->textDomicilio->Name = L"textDomicilio";
			this->textDomicilio->Size = System::Drawing::Size(161, 29);
			this->textDomicilio->TabIndex = 61;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(286, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 18);
			this->label2->TabIndex = 60;
			this->label2->Text = L"Edad";
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(289, 87);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 2);
			this->panel3->TabIndex = 59;
			// 
			// txtEdad
			// 
			this->txtEdad->BackColor = System::Drawing::Color::Black;
			this->txtEdad->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEdad->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEdad->ForeColor = System::Drawing::Color::White;
			this->txtEdad->Location = System::Drawing::Point(289, 52);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(161, 29);
			this->txtEdad->TabIndex = 58;
			// 
			// btnCrear
			// 
			this->btnCrear->BackColor = System::Drawing::Color::Transparent;
			this->btnCrear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCrear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCrear->ForeColor = System::Drawing::Color::White;
			this->btnCrear->Location = System::Drawing::Point(57, 257);
			this->btnCrear->Name = L"btnCrear";
			this->btnCrear->Size = System::Drawing::Size(161, 34);
			this->btnCrear->TabIndex = 57;
			this->btnCrear->Text = L"Modificar cuenta";
			this->btnCrear->UseVisualStyleBackColor = false;
			this->btnCrear->Click += gcnew System::EventHandler(this, &ModificarCliente::btnCrear_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(289, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 34);
			this->button1->TabIndex = 56;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ModificarCliente::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(54, 164);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 18);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(54, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 18);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Nombre";
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(57, 220);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 2);
			this->panel2->TabIndex = 53;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(57, 154);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 2);
			this->panel1->TabIndex = 52;
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(31, 42);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(56, 33);
			this->lbTitle->TabIndex = 51;
			this->lbTitle->Text = L"usr";
			// 
			// txtApellido
			// 
			this->txtApellido->BackColor = System::Drawing::Color::Black;
			this->txtApellido->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtApellido->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtApellido->ForeColor = System::Drawing::Color::White;
			this->txtApellido->Location = System::Drawing::Point(57, 185);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(161, 29);
			this->txtApellido->TabIndex = 50;
			// 
			// txtNombre
			// 
			this->txtNombre->BackColor = System::Drawing::Color::Black;
			this->txtNombre->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtNombre->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombre->ForeColor = System::Drawing::Color::White;
			this->txtNombre->Location = System::Drawing::Point(57, 119);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(161, 29);
			this->txtNombre->TabIndex = 49;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 33);
			this->label1->TabIndex = 67;
			this->label1->Text = L"Modificar a";
			// 
			// ModificarCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(521, 321);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->textContra);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->textDomicilio);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->txtEdad);
			this->Controls->Add(this->btnCrear);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtNombre);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ModificarCliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ModificarCliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnCrear_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->txtNombre->Text == "" || this->txtApellido->Text == "" || 
		this->txtEdad->Text == "" || this->textDomicilio->Text == "" ||
		this->textContra->Text == "") {
		MessageBox::Show(L"Debe llenar todos los campos");
		this->txtNombre->Focus();
	}
	else {
		data->openConnection();
		data->modify(this->txtNombre->Text,this->txtApellido->Text,this->txtEdad->Text, this->textDomicilio->Text,this->textContra->Text,this->lbTitle->Text);
		data->closeConnection();
		MessageBox::Show(L"Actualizado corretamente");
		this->Close();
	}
}
};
}
