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
	/// Resumen de Movimientos
	/// </summary>
	public ref class Movimientos : public System::Windows::Forms::Form
	{
	public:
		Movimientos(String^ usr)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->data = gcnew BaseDatos();
			this->lbUsuario->Text = usr;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Movimientos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGrid;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->lbUsuario = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Movimientos";
			// 
			// dataGrid
			// 
			this->dataGrid->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGrid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(254)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(254)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGrid->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGrid->Location = System::Drawing::Point(88, 53);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->ReadOnly = true;
			this->dataGrid->RowHeadersVisible = false;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::White;
			this->dataGrid->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGrid->Size = System::Drawing::Size(293, 163);
			this->dataGrid->TabIndex = 2;
			// 
			// lbUsuario
			// 
			this->lbUsuario->AutoSize = true;
			this->lbUsuario->Location = System::Drawing::Point(187, 22);
			this->lbUsuario->Name = L"lbUsuario";
			this->lbUsuario->Size = System::Drawing::Size(35, 13);
			this->lbUsuario->TabIndex = 3;
			this->lbUsuario->Text = L"label2";
			this->lbUsuario->Visible = false;
			// 
			// Movimientos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(479, 267);
			this->Controls->Add(this->lbUsuario);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Movimientos";
			this->Text = L"Movimientos";
			this->Load += gcnew System::EventHandler(this, &Movimientos::Movimientos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Movimientos_Load(System::Object^ sender, System::EventArgs^ e) {
		this->data->openConnection();
		this->dataGrid->DataSource = this->data->showMovements(this->lbUsuario->Text);
		this->data->closeConnection();
	}
};
}
