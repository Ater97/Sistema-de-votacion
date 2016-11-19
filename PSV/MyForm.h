#pragma once
#include "stdafx.h"
#include "Arbol.h"
#include "ArbolP.h"
#include "Estudiante.h"
#include "Captcha.h"
#include <stdio.h>
#include "Planilla.h"
#include <sstream>	
#include <string>
#include <list>
//#include <fstream>
#include <vector>
#using <System.dll>
namespace PSV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			timer1->Start();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::Panel^  panel1;
	public:
		Arbol *arbol = new Arbol(); //arbol estudiantes
		Captcha * captcha = new Captcha();
	private: System::Windows::Forms::Panel^  panel2;
	public:
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ListBox^  listBox2;



	private: System::Windows::Forms::Timer^  timer1;

			 ArbolP *arbolP = new ArbolP(); //arbol planillas
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label10;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(2, 4);
			this->button1->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cargar padron electoral";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(106, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"file";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(2, 47);
			this->button2->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 38);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Ingresar planilla";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(106, 60);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 14);
			this->label2->TabIndex = 3;
			this->label2->Text = L"file";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(310, 90);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->numericUpDown1);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Enabled = false;
			this->panel2->Location = System::Drawing::Point(2, 99);
			this->panel2->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(310, 149);
			this->panel2->TabIndex = 6;
			this->panel2->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(232, 99);
			this->button4->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(74, 46);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Finalizar votaciones";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(109, 6);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1569325056, 23283064, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 6;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(109, 33);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(120, 22);
			this->comboBox1->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(109, 65);
			this->button3->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 24);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Proceder";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(2, 40);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 14);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Ingrese la planila:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 15);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 14);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Ingrese su carne:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(326, 27);
			this->listBox1->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(185, 172);
			this->listBox1->TabIndex = 8;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->listBox2);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->listBox1);
			this->panel3->Enabled = false;
			this->panel3->Location = System::Drawing::Point(6, 254);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(518, 215);
			this->panel3->TabIndex = 9;
			this->panel3->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(2, 10);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 14);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Recuento de Votos:";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 14;
			this->listBox2->Location = System::Drawing::Point(6, 27);
			this->listBox2->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(164, 172);
			this->listBox2->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(308, 10);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(186, 14);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Alumnos  que no emitieron su sufragio:";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(365, 2);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 14);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Fecha:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(402, 2);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 14);
			this->label10->TabIndex = 15;
			this->label10->Text = L"label10";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"captcha1.PNG");
			this->imageList1->Images->SetKeyName(1, L"captcha3.PNG");
			this->imageList1->Images->SetKeyName(2, L"captcha2.PNG");
			this->imageList1->Images->SetKeyName(3, L"captcha4.PNG");
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(2, 4);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(197, 76);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Enabled = false;
			this->panel4->Location = System::Drawing::Point(314, 99);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(210, 145);
			this->panel4->TabIndex = 16;
			this->panel4->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(116, 114);
			this->button5->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(74, 24);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Ingresar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 98);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 14);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Ingrese el texto:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 89);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(525, 472);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Name = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		bool opEs = false;
		bool opPl = false;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Estudiante tempEstud;
		OpenFileDialog ^ofd = gcnew OpenFileDialog();
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if (ofd->FileName != "") {
				opEs = true;
				cli::array<System::String^> ^lineas = File::ReadAllLines(ofd->FileName);
				label1->Text = ofd->FileName;

				for (int i = 0; i < lineas->Length; i++) {
					cli::array<System::String^> ^lineEstudiante = lineas[i]->Split(',');
					tempEstud.carne = Convert::ToInt32(lineEstudiante[0]);
					tempEstud.nombre = (char*)(void*)Marshal::StringToHGlobalAnsi(lineEstudiante[1]);
					tempEstud.Apellido = (char*)(void*)Marshal::StringToHGlobalAnsi(lineEstudiante[2]);
					tempEstud.fechaNacimineto = (char*)(void*)Marshal::StringToHGlobalAnsi(lineEstudiante[3]);
					tempEstud.Facultad = (char*)(void*)Marshal::StringToHGlobalAnsi(lineEstudiante[4]);
					//tempEstud.voto = (char*)(void*)Marshal::StringToHGlobalAnsi(lineEstudiante[5]);
					//tempEstud.horaVoto = (char*)(void*)Marshal::StringToHGlobalAnsi(lineEstudiante[6]);
					//tempEstud.password = (char*)(void*)Marshal::StringToHGlobalAnsi(lineEstudiante[7]);
					arbol->insertar(tempEstud, arbol->root);
				}
			}
		}

		if (opEs && opPl)
		{
			MessageBox::Show("Carga completa");
			panel1->Enabled = false;
			panel1->Visible = false;
			panel2->Enabled = true;
			panel2->Visible = true;
		}
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Planilla tempPlan;
		OpenFileDialog ^ofd = gcnew OpenFileDialog();
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if (ofd->FileName != "") {
				opPl = true;
				cli::array<System::String^> ^lineas = File::ReadAllLines(ofd->FileName);
				label2->Text = ofd->FileName;

				for (int i = 0; i < lineas->Length; i++) {
					cli::array<System::String^> ^linePlanilla = lineas[i]->Split(',');
					tempPlan.id = Convert::ToInt32(linePlanilla[0]);
					tempPlan.Asociacion = ((char*)(void*)Marshal::StringToHGlobalAnsi((linePlanilla[1])));
					tempPlan.facultad = (char*)(void*)Marshal::StringToHGlobalAnsi(linePlanilla[2]);
					arbolP->insertar(tempPlan, arbolP->root);
					comboBox1->Items->Add(linePlanilla[1]);
				}
			}
		}

		if (opEs && opPl)
		{
			MessageBox::Show("Carga completa");
			panel1->Enabled = false;
			panel1->Visible = false;
			panel2->Enabled = true;
			panel2->Visible = true;
		}
	}
			 bool blCaptchaApprove = false;
			 
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		string time;
		int carne = Convert::ToInt32(numericUpDown1->Value);
		string planilla = (char*)(void*)Marshal::StringToHGlobalAnsi(comboBox1->Text);
		if (comboBox1->Text != "")
		{
			if (arbol->Existe(carne, arbol->root).value.carne)
			{
				if (!arbol->Existe(carne, arbol->root).value.voto)
				{
					//captcha
					panel4->Enabled = true;
					panel4->Visible = true;
					pictureBox1->BackgroundImage = imageList1->Images[image];
					panel2->Enabled = false;
					//cap
				}
				else
				{
					MessageBox::Show("Usted ya ha emitido su voto");
				}
			}
			else { MessageBox::Show("El carne no se encuentra registrado."); }
		}
		else
		{
			MessageBox::Show("Seleccione una planilla");
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		panel2->Visible = false;
		panel2->Enabled = false;
		panel3->Visible = true;
		panel3->Enabled = true;

		String ^alumnos = gcnew String(arbol->Alumnos(arbol->root).c_str());
		String ^planillaVotos = gcnew String(arbolP->Conteo(arbolP->root).c_str());

		cli::array<System::String^> ^lineaPlan = planillaVotos->Split(';');
		cli::array<System::String^> ^lineaAlumno = alumnos->Split(';');

		for (int j = 0; j < lineaAlumno->Length; j++) {
			listBox1->Items->Add(lineaAlumno[j]);
		}
		for (int j = 0; j < lineaPlan->Length; j++) {
			listBox2->Items->Add(lineaPlan[j]);
		}
		String^Ganador = gcnew String(arbolP->Ganador(arbolP->root).c_str());
		if (Ganador == " ")
		{
			Ganador = "No se emitio ningun voto.";
		}
		//->Text = Ganador;
	}

	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		DateTime datetime = DateTime::Now;
		this->label10->Text = datetime.ToString();
	} 
			 int image = 0;
			 
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		//captcha
		pictureBox1->BackgroundImage = imageList1->Images[image+1];
		string txtCaptcha = (char*)(void*)Marshal::StringToHGlobalAnsi(textBox1->Text);
		if(image == 2)
		{  
			image = 0;
			blCaptchaApprove = false;
			MessageBox::Show("Lo sentimos, ha realizado demasiados intentos");
			panel4->Visible = false;
			panel4->Enabled = false;
			panel2->Enabled = true;
		}
		else if (captcha->Verificar(txtCaptcha, image))
		{
			blCaptchaApprove = true;
		}
		else
		{
			image++;
			textBox1->Text = "";
			MessageBox::Show("No coincide\nIntente otra vez.");
		}
		//Votar
		string time;
		int carne = Convert::ToInt32(numericUpDown1->Value);
		string planilla = (char*)(void*)Marshal::StringToHGlobalAnsi(comboBox1->Text);

		if(blCaptchaApprove)
		{
			int id = arbolP->Votar(planilla, arbolP->root).value.id;
			DateTime datetime = DateTime::Now;
			time = (char*)(void*)Marshal::StringToHGlobalAnsi(datetime.ToString());
			arbol->Votar(id, carne, arbol->root, time, txtCaptcha);
			MessageBox::Show("Voto emitido");
			blCaptchaApprove = false;
			numericUpDown1->Value = 0;
			comboBox1->Text = " ";
			image = 0;
			panel2->Enabled = true;
			panel4->Visible = false;
			panel4->Enabled = false;
		}
		textBox1->Text = "";
	}
	};
}