#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include "BaseDatos.h"
#include "Inicio.h"

namespace CppCLRWinFormsProject {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Summary for Form1
  /// </summary>
  public ref class Form1 : public System::Windows::Forms::Form
  {
  public:
    Form1(void)
    {
      InitializeComponent();
      //
      //TODO: Add the constructor code here
      //

      // uncomment to execute the rk1-utils:
      //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used
      this->data = gcnew BaseDatos();
    }

  protected:
    /// <summary>
    /// Clean up any resources being used.
    /// </summary>
    ~Form1()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::TextBox^ txtUsuario;
  protected:
  private: System::Windows::Forms::TextBox^ txtContrasena;
  private: System::Windows::Forms::Button^ btnIniciar;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::Button^ btnSalir;
  private: BaseDatos^ data;





  protected:

  private:
    /// <summary>
    /// Required designer variable.
    /// </summary>
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Required method for Designer support - do not modify
    /// the contents of this method with the code editor.
    /// </summary>
    void InitializeComponent(void)
    {
        this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
        this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
        this->btnIniciar = (gcnew System::Windows::Forms::Button());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->btnSalir = (gcnew System::Windows::Forms::Button());
        this->SuspendLayout();
        // 
        // txtUsuario
        // 
        this->txtUsuario->BackColor = System::Drawing::Color::Black;
        this->txtUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->txtUsuario->ForeColor = System::Drawing::Color::White;
        this->txtUsuario->Location = System::Drawing::Point(49, 107);
        this->txtUsuario->Name = L"txtUsuario";
        this->txtUsuario->Size = System::Drawing::Size(211, 29);
        this->txtUsuario->TabIndex = 0;
        // 
        // txtContrasena
        // 
        this->txtContrasena->BackColor = System::Drawing::Color::Black;
        this->txtContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->txtContrasena->ForeColor = System::Drawing::Color::White;
        this->txtContrasena->Location = System::Drawing::Point(49, 178);
        this->txtContrasena->Name = L"txtContrasena";
        this->txtContrasena->Size = System::Drawing::Size(211, 29);
        this->txtContrasena->TabIndex = 1;
        this->txtContrasena->UseSystemPasswordChar = true;
        // 
        // btnIniciar
        // 
        this->btnIniciar->BackColor = System::Drawing::Color::Black;
        this->btnIniciar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->btnIniciar->ForeColor = System::Drawing::Color::White;
        this->btnIniciar->Location = System::Drawing::Point(84, 236);
        this->btnIniciar->Name = L"btnIniciar";
        this->btnIniciar->Size = System::Drawing::Size(138, 31);
        this->btnIniciar->TabIndex = 2;
        this->btnIniciar->Text = L"Iniciar sesion";
        this->btnIniciar->UseVisualStyleBackColor = false;
        this->btnIniciar->Click += gcnew System::EventHandler(this, &Form1::btnIniciar_Click);
        // 
        // label1
        // 
        this->label1->AutoSize = true;
        this->label1->BackColor = System::Drawing::Color::Black;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label1->ForeColor = System::Drawing::Color::White;
        this->label1->Location = System::Drawing::Point(45, 30);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(201, 31);
        this->label1->TabIndex = 3;
        this->label1->Text = L"Inicio de sesion";
        // 
        // label2
        // 
        this->label2->AutoSize = true;
        this->label2->BackColor = System::Drawing::Color::Black;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label2->ForeColor = System::Drawing::Color::White;
        this->label2->Location = System::Drawing::Point(45, 80);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(74, 24);
        this->label2->TabIndex = 4;
        this->label2->Text = L"Usuario";
        // 
        // label3
        // 
        this->label3->AutoSize = true;
        this->label3->BackColor = System::Drawing::Color::Black;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label3->ForeColor = System::Drawing::Color::White;
        this->label3->Location = System::Drawing::Point(45, 152);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(106, 24);
        this->label3->TabIndex = 5;
        this->label3->Text = L"Contraseña";
        // 
        // label4
        // 
        this->label4->AutoSize = true;
        this->label4->BackColor = System::Drawing::Color::Black;
        this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->label4->ForeColor = System::Drawing::Color::White;
        this->label4->Location = System::Drawing::Point(325, 107);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(130, 76);
        this->label4->TabIndex = 6;
        this->label4->Text = L"Banco\r\nAbstract";
        // 
        // btnSalir
        // 
        this->btnSalir->BackColor = System::Drawing::Color::Black;
        this->btnSalir->Cursor = System::Windows::Forms::Cursors::Hand;
        this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
        this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        this->btnSalir->ForeColor = System::Drawing::Color::White;
        this->btnSalir->Location = System::Drawing::Point(447, 12);
        this->btnSalir->Name = L"btnSalir";
        this->btnSalir->Size = System::Drawing::Size(49, 38);
        this->btnSalir->TabIndex = 7;
        this->btnSalir->Text = L"X";
        this->btnSalir->UseVisualStyleBackColor = false;
        this->btnSalir->Click += gcnew System::EventHandler(this, &Form1::btnSalir_Click);
        // 
        // Form1
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::Color::Black;
        this->ClientSize = System::Drawing::Size(508, 309);
        this->Controls->Add(this->btnSalir);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->btnIniciar);
        this->Controls->Add(this->txtContrasena);
        this->Controls->Add(this->txtUsuario);
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
        this->Name = L"Form1";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"Inicio de sesion";
        this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
        this->ResumeLayout(false);
        this->PerformLayout();

    }
#pragma endregion

   // You can call the functions at a button click. If you prefer, 
    // you can call them by clicking a menu item.


    private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
      if (MessageBox::Show(L"Estas seguro de salir ?", "Salir", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
          != System::Windows::Forms::DialogResult::Yes) {
          e->Cancel = true;
      }
    }
    private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ usuario = txtUsuario->Text;
    if (txtUsuario->Text == "" && txtContrasena->Text == "") {
        MessageBox::Show(L"Debe llenar todos los campos");
    }
    else {
        if (this->data->login(txtUsuario->Text, txtContrasena->Text) == true) {
            BancoSecond::Inicio^ formInicio = gcnew BancoSecond::Inicio(usuario);
            this->Hide();
            formInicio->ShowDialog();
            this->Show();
        }
    }
}
}; // end of class Form1
} // end of namespace CppCLRWinFormsProject

