#pragma once

#include "BaseDatos.h"
#include "AgregarCliente.h"
#include "ModificarCliente.h"

namespace BancoSecond {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Clientes
	/// </summary>
	public ref class Clientes : public System::Windows::Forms::Form
	{
	public:
		Clientes(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew BaseDatos();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Clientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGrid;
	protected:

	private: BaseDatos^ data;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnBorrar;
	private: System::Windows::Forms::Label^ lbCliente;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnBorrar = (gcnew System::Windows::Forms::Button());
			this->lbCliente = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(43, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Operaciones a realizar con:";
			// 
			// dataGrid
			// 
			this->dataGrid->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(254)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(254)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGrid->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGrid->Location = System::Drawing::Point(12, 37);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->ReadOnly = true;
			this->dataGrid->RowHeadersVisible = false;
			this->dataGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGrid->Size = System::Drawing::Size(455, 163);
			this->dataGrid->TabIndex = 1;
			this->dataGrid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Clientes::dataGrid_CellClick);
			this->dataGrid->DoubleClick += gcnew System::EventHandler(this, &Clientes::dataGrid_DoubleClick);
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::Black;
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->ForeColor = System::Drawing::Color::White;
			this->btnAgregar->Location = System::Drawing::Point(12, 218);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(134, 37);
			this->btnAgregar->TabIndex = 2;
			this->btnAgregar->Text = L"Agregar cliente";
			this->btnAgregar->UseVisualStyleBackColor = false;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &Clientes::btnAgregar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->BackColor = System::Drawing::Color::Black;
			this->btnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnModificar->ForeColor = System::Drawing::Color::White;
			this->btnModificar->Location = System::Drawing::Point(177, 218);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(136, 37);
			this->btnModificar->TabIndex = 3;
			this->btnModificar->Text = L"Modificar cliente";
			this->btnModificar->UseVisualStyleBackColor = false;
			this->btnModificar->Click += gcnew System::EventHandler(this, &Clientes::dataGrid_DoubleClick);
			// 
			// btnBorrar
			// 
			this->btnBorrar->BackColor = System::Drawing::Color::Black;
			this->btnBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBorrar->ForeColor = System::Drawing::Color::White;
			this->btnBorrar->Location = System::Drawing::Point(345, 218);
			this->btnBorrar->Name = L"btnBorrar";
			this->btnBorrar->Size = System::Drawing::Size(122, 37);
			this->btnBorrar->TabIndex = 4;
			this->btnBorrar->Text = L"Borrar cliente";
			this->btnBorrar->UseVisualStyleBackColor = false;
			this->btnBorrar->Click += gcnew System::EventHandler(this, &Clientes::btnBorrar_Click);
			// 
			// lbCliente
			// 
			this->lbCliente->AutoSize = true;
			this->lbCliente->BackColor = System::Drawing::Color::Black;
			this->lbCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbCliente->ForeColor = System::Drawing::Color::White;
			this->lbCliente->Location = System::Drawing::Point(250, 9);
			this->lbCliente->Name = L"lbCliente";
			this->lbCliente->Size = System::Drawing::Size(62, 20);
			this->lbCliente->TabIndex = 5;
			this->lbCliente->Text = L"cliente";
			// 
			// Clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(479, 267);
			this->Controls->Add(this->lbCliente);
			this->Controls->Add(this->btnBorrar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Clientes";
			this->Text = L"Clientes";
			this->Load += gcnew System::EventHandler(this, &Clientes::Clientes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void consultar() {
		this->data->openConnection();
		this->dataGrid->DataSource = this->data->getData();
		this->data->closeConnection();
	}
	private: System::Void Clientes_Load(System::Object^ sender, System::EventArgs^ e) {
		this->consultar();
	}
	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
		BancoSecond::AgregarCliente^ formCliente = gcnew BancoSecond::AgregarCliente();
		formCliente->ShowDialog();
		this->consultar();
	}
private: System::Void dataGrid_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	String^ usuario = Convert::ToString(dataGrid->SelectedRows[0]->Cells[0]->Value);
	String^ contra = Convert::ToString(dataGrid->SelectedRows[0]->Cells[1]->Value);
	String^ nombr = Convert::ToString(dataGrid->SelectedRows[0]->Cells[2]->Value);
	String^ apell = Convert::ToString(dataGrid->SelectedRows[0]->Cells[3]->Value);
	String^ edad = Convert::ToString(dataGrid->SelectedRows[0]->Cells[4]->Value);
	String^ dom = Convert::ToString(dataGrid->SelectedRows[0]->Cells[5]->Value);
	BancoSecond::ModificarCliente^ formMod = gcnew BancoSecond::ModificarCliente(usuario, contra, nombr, apell, edad, dom);
	formMod->ShowDialog();
	this->consultar();
}
private: System::Void dataGrid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ usuario = Convert::ToString(dataGrid->SelectedRows[0]->Cells[0]->Value);
	this->lbCliente->Text = usuario;
}
private: System::Void btnBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ usuario = Convert::ToString(dataGrid->SelectedRows[0]->Cells[0]->Value);
	if (usuario != "Admin") {
		this->data->openConnection();
		this->data->clean(usuario);
		this->data->closeConnection();
		MessageBox::Show(L"Usted ha eliminado a: " + usuario);
		this->lbCliente->Text = "Seleccionando a: ";
		this->consultar();
	}
	else {
		MessageBox::Show(L"No puedes borrar a este usuario");
	}
}
};
}
