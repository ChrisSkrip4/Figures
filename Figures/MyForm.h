#pragma once
#include "Figures.h"

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			figures = gcnew MyFigures::Figures;
			//
			//TODO: добавьте код конструктора
			//
		}
		MyFigures::Figures^ figures;

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_C;
	private: System::Windows::Forms::TextBox^ textBox_CS;
	private: System::Windows::Forms::Label^ label_CS;
	private: System::Windows::Forms::GroupBox^ groupBox_C;
	private: System::Windows::Forms::GroupBox^ groupBox_R;
	private: System::Windows::Forms::Label^ label_RS;
	private: System::Windows::Forms::TextBox^ textBox_RS;
	private: System::Windows::Forms::TextBox^ textBox_RL;
	private: System::Windows::Forms::Label^ label_R;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_RW;
	private: System::Windows::Forms::Label^ label_RL;
	private: System::Windows::Forms::Label^ label_RW;
	private: System::Windows::Forms::GroupBox^ groupBox_T;
	private: System::Windows::Forms::Label^ label_TH;
	private: System::Windows::Forms::TextBox^ textBox_TH;
	private: System::Windows::Forms::Label^ label_TB;
	private: System::Windows::Forms::Label^ label_TA;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_TB;
	private: System::Windows::Forms::Label^ label_TS;
	private: System::Windows::Forms::TextBox^ textBox_TS;
	private: System::Windows::Forms::TextBox^ textBox_TA;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button_CS;
	private: System::Windows::Forms::Label^ label_CR;
	private: System::Windows::Forms::TextBox^ textBox_CR;
	private: System::Windows::Forms::Button^ button_RS;
	private: System::Windows::Forms::Button^ button_TS;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_C = (gcnew System::Windows::Forms::Label());
			this->textBox_CS = (gcnew System::Windows::Forms::TextBox());
			this->label_CS = (gcnew System::Windows::Forms::Label());
			this->groupBox_C = (gcnew System::Windows::Forms::GroupBox());
			this->label_CR = (gcnew System::Windows::Forms::Label());
			this->textBox_CR = (gcnew System::Windows::Forms::TextBox());
			this->button_CS = (gcnew System::Windows::Forms::Button());
			this->groupBox_R = (gcnew System::Windows::Forms::GroupBox());
			this->button_RS = (gcnew System::Windows::Forms::Button());
			this->label_RW = (gcnew System::Windows::Forms::Label());
			this->label_RL = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_RW = (gcnew System::Windows::Forms::TextBox());
			this->label_RS = (gcnew System::Windows::Forms::Label());
			this->textBox_RS = (gcnew System::Windows::Forms::TextBox());
			this->textBox_RL = (gcnew System::Windows::Forms::TextBox());
			this->label_R = (gcnew System::Windows::Forms::Label());
			this->groupBox_T = (gcnew System::Windows::Forms::GroupBox());
			this->button_TS = (gcnew System::Windows::Forms::Button());
			this->label_TH = (gcnew System::Windows::Forms::Label());
			this->textBox_TH = (gcnew System::Windows::Forms::TextBox());
			this->label_TB = (gcnew System::Windows::Forms::Label());
			this->label_TA = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_TB = (gcnew System::Windows::Forms::TextBox());
			this->label_TS = (gcnew System::Windows::Forms::Label());
			this->textBox_TS = (gcnew System::Windows::Forms::TextBox());
			this->textBox_TA = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox_C->SuspendLayout();
			this->groupBox_R->SuspendLayout();
			this->groupBox_T->SuspendLayout();
			this->SuspendLayout();
			// 
			// label_C
			// 
			this->label_C->AutoSize = true;
			this->label_C->Location = System::Drawing::Point(6, 25);
			this->label_C->Name = L"label_C";
			this->label_C->Size = System::Drawing::Size(138, 17);
			this->label_C->TabIndex = 0;
			this->label_C->Text = L"Введите значение :";
			// 
			// textBox_CS
			// 
			this->textBox_CS->Location = System::Drawing::Point(108, 134);
			this->textBox_CS->Name = L"textBox_CS";
			this->textBox_CS->Size = System::Drawing::Size(83, 22);
			this->textBox_CS->TabIndex = 2;
			// 
			// label_CS
			// 
			this->label_CS->AutoSize = true;
			this->label_CS->Location = System::Drawing::Point(6, 137);
			this->label_CS->Name = L"label_CS";
			this->label_CS->Size = System::Drawing::Size(93, 17);
			this->label_CS->TabIndex = 3;
			this->label_CS->Text = L"Площадь S =";
			// 
			// groupBox_C
			// 
			this->groupBox_C->Controls->Add(this->label_CR);
			this->groupBox_C->Controls->Add(this->textBox_CR);
			this->groupBox_C->Controls->Add(this->button_CS);
			this->groupBox_C->Controls->Add(this->label_CS);
			this->groupBox_C->Controls->Add(this->textBox_CS);
			this->groupBox_C->Controls->Add(this->label_C);
			this->groupBox_C->Location = System::Drawing::Point(21, 42);
			this->groupBox_C->Name = L"groupBox_C";
			this->groupBox_C->Size = System::Drawing::Size(202, 178);
			this->groupBox_C->TabIndex = 4;
			this->groupBox_C->TabStop = false;
			this->groupBox_C->Text = L"КРУГ";
			// 
			// label_CR
			// 
			this->label_CR->AutoSize = true;
			this->label_CR->Location = System::Drawing::Point(6, 60);
			this->label_CR->Name = L"label_CR";
			this->label_CR->Size = System::Drawing::Size(80, 17);
			this->label_CR->TabIndex = 6;
			this->label_CR->Text = L"Радиус r = ";
			// 
			// textBox_CR
			// 
			this->textBox_CR->Location = System::Drawing::Point(108, 60);
			this->textBox_CR->Name = L"textBox_CR";
			this->textBox_CR->Size = System::Drawing::Size(72, 22);
			this->textBox_CR->TabIndex = 5;
			// 
			// button_CS
			// 
			this->button_CS->Location = System::Drawing::Point(38, 93);
			this->button_CS->Name = L"button_CS";
			this->button_CS->Size = System::Drawing::Size(106, 29);
			this->button_CS->TabIndex = 4;
			this->button_CS->Text = L"Посчитать S";
			this->button_CS->UseVisualStyleBackColor = true;
			this->button_CS->Click += gcnew System::EventHandler(this, &MyForm::button_CS_Click);
			// 
			// groupBox_R
			// 
			this->groupBox_R->Controls->Add(this->button_RS);
			this->groupBox_R->Controls->Add(this->label_RW);
			this->groupBox_R->Controls->Add(this->label_RL);
			this->groupBox_R->Controls->Add(this->label2);
			this->groupBox_R->Controls->Add(this->textBox_RW);
			this->groupBox_R->Controls->Add(this->label_RS);
			this->groupBox_R->Controls->Add(this->textBox_RS);
			this->groupBox_R->Controls->Add(this->textBox_RL);
			this->groupBox_R->Controls->Add(this->label_R);
			this->groupBox_R->Location = System::Drawing::Point(259, 42);
			this->groupBox_R->Name = L"groupBox_R";
			this->groupBox_R->Size = System::Drawing::Size(202, 224);
			this->groupBox_R->TabIndex = 5;
			this->groupBox_R->TabStop = false;
			this->groupBox_R->Text = L"ПРЯМОУГОЛЬНИК";
			// 
			// button_RS
			// 
			this->button_RS->Location = System::Drawing::Point(45, 139);
			this->button_RS->Name = L"button_RS";
			this->button_RS->Size = System::Drawing::Size(106, 29);
			this->button_RS->TabIndex = 8;
			this->button_RS->Text = L"Посчитать S";
			this->button_RS->UseVisualStyleBackColor = true;
			this->button_RS->Click += gcnew System::EventHandler(this, &MyForm::button_RS_Click);
			// 
			// label_RW
			// 
			this->label_RW->AutoSize = true;
			this->label_RW->Location = System::Drawing::Point(13, 99);
			this->label_RW->Name = L"label_RW";
			this->label_RW->Size = System::Drawing::Size(84, 17);
			this->label_RW->TabIndex = 7;
			this->label_RW->Text = L"Ширина w =";
			// 
			// label_RL
			// 
			this->label_RL->AutoSize = true;
			this->label_RL->Location = System::Drawing::Point(13, 60);
			this->label_RL->Name = L"label_RL";
			this->label_RL->Size = System::Drawing::Size(74, 17);
			this->label_RL->TabIndex = 6;
			this->label_RL->Text = L"Длина l = ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 5;
			// 
			// textBox_RW
			// 
			this->textBox_RW->Location = System::Drawing::Point(119, 96);
			this->textBox_RW->Name = L"textBox_RW";
			this->textBox_RW->Size = System::Drawing::Size(72, 22);
			this->textBox_RW->TabIndex = 4;
			// 
			// label_RS
			// 
			this->label_RS->AutoSize = true;
			this->label_RS->Location = System::Drawing::Point(13, 185);
			this->label_RS->Name = L"label_RS";
			this->label_RS->Size = System::Drawing::Size(93, 17);
			this->label_RS->TabIndex = 3;
			this->label_RS->Text = L"Площадь S =";
			// 
			// textBox_RS
			// 
			this->textBox_RS->Location = System::Drawing::Point(119, 182);
			this->textBox_RS->Name = L"textBox_RS";
			this->textBox_RS->Size = System::Drawing::Size(72, 22);
			this->textBox_RS->TabIndex = 2;
			// 
			// textBox_RL
			// 
			this->textBox_RL->Location = System::Drawing::Point(119, 57);
			this->textBox_RL->Name = L"textBox_RL";
			this->textBox_RL->Size = System::Drawing::Size(72, 22);
			this->textBox_RL->TabIndex = 1;
			// 
			// label_R
			// 
			this->label_R->AutoSize = true;
			this->label_R->Location = System::Drawing::Point(13, 25);
			this->label_R->Name = L"label_R";
			this->label_R->Size = System::Drawing::Size(138, 17);
			this->label_R->TabIndex = 0;
			this->label_R->Text = L"Введите значение :";
			// 
			// groupBox_T
			// 
			this->groupBox_T->Controls->Add(this->button_TS);
			this->groupBox_T->Controls->Add(this->label_TH);
			this->groupBox_T->Controls->Add(this->textBox_TH);
			this->groupBox_T->Controls->Add(this->label_TB);
			this->groupBox_T->Controls->Add(this->label_TA);
			this->groupBox_T->Controls->Add(this->label5);
			this->groupBox_T->Controls->Add(this->textBox_TB);
			this->groupBox_T->Controls->Add(this->label_TS);
			this->groupBox_T->Controls->Add(this->textBox_TS);
			this->groupBox_T->Controls->Add(this->textBox_TA);
			this->groupBox_T->Controls->Add(this->label7);
			this->groupBox_T->Location = System::Drawing::Point(506, 42);
			this->groupBox_T->Name = L"groupBox_T";
			this->groupBox_T->Size = System::Drawing::Size(202, 250);
			this->groupBox_T->TabIndex = 6;
			this->groupBox_T->TabStop = false;
			this->groupBox_T->Text = L"ТРАПЕЦИЯ";
			// 
			// button_TS
			// 
			this->button_TS->Location = System::Drawing::Point(45, 173);
			this->button_TS->Name = L"button_TS";
			this->button_TS->Size = System::Drawing::Size(106, 29);
			this->button_TS->TabIndex = 10;
			this->button_TS->Text = L"Посчитать S";
			this->button_TS->UseVisualStyleBackColor = true;
			this->button_TS->Click += gcnew System::EventHandler(this, &MyForm::button_TS_Click);
			// 
			// label_TH
			// 
			this->label_TH->AutoSize = true;
			this->label_TH->Location = System::Drawing::Point(13, 132);
			this->label_TH->Name = L"label_TH";
			this->label_TH->Size = System::Drawing::Size(81, 17);
			this->label_TH->TabIndex = 9;
			this->label_TH->Text = L"Высота h =";
			// 
			// textBox_TH
			// 
			this->textBox_TH->Location = System::Drawing::Point(119, 132);
			this->textBox_TH->Name = L"textBox_TH";
			this->textBox_TH->Size = System::Drawing::Size(72, 22);
			this->textBox_TH->TabIndex = 8;
			// 
			// label_TB
			// 
			this->label_TB->AutoSize = true;
			this->label_TB->Location = System::Drawing::Point(13, 99);
			this->label_TB->Name = L"label_TB";
			this->label_TB->Size = System::Drawing::Size(88, 17);
			this->label_TB->TabIndex = 7;
			this->label_TB->Text = L"Сторона b =";
			// 
	// label_TA
	// 
			this->label_TA->AutoSize = true;
			this->label_TA->Location = System::Drawing::Point(13, 60);
			this->label_TA->Name = L"label_TA";
			this->label_TA->Size = System::Drawing::Size(92, 17);
			this->label_TA->TabIndex = 6;
			this->label_TA->Text = L"Сторона а = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 17);
			this->label5->TabIndex = 5;
			// 
			// textBox_TB
			// 
			this->textBox_TB->Location = System::Drawing::Point(119, 96);
			this->textBox_TB->Name = L"textBox_TB";
			this->textBox_TB->Size = System::Drawing::Size(72, 22);
			this->textBox_TB->TabIndex = 4;
			// 
			// label_TS
			// 
			this->label_TS->AutoSize = true;
			this->label_TS->Location = System::Drawing::Point(8, 221);
			this->label_TS->Name = L"label_TS";
			this->label_TS->Size = System::Drawing::Size(93, 17);
			this->label_TS->TabIndex = 3;
			this->label_TS->Text = L"Площадь S =";
			// 
			// textBox_TS
			// 
			this->textBox_TS->Location = System::Drawing::Point(119, 218);
			this->textBox_TS->Name = L"textBox_TS";
			this->textBox_TS->Size = System::Drawing::Size(72, 22);
			this->textBox_TS->TabIndex = 2;
			// 
			// textBox_TA
			// 
			this->textBox_TA->Location = System::Drawing::Point(119, 57);
			this->textBox_TA->Name = L"textBox_TA";
			this->textBox_TA->Size = System::Drawing::Size(72, 22);
			this->textBox_TA->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 17);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Введите значение :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(790, 319);
			this->Controls->Add(this->groupBox_T);
			this->Controls->Add(this->groupBox_R);
			this->Controls->Add(this->groupBox_C);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox_C->ResumeLayout(false);
			this->groupBox_C->PerformLayout();
			this->groupBox_R->ResumeLayout(false);
			this->groupBox_R->PerformLayout();
			this->groupBox_T->ResumeLayout(false);
			this->groupBox_T->PerformLayout();
			this->ResumeLayout(false);

		}
 #pragma endregion


			bool CheckValue_Circle()
		{
			for (int i = 0; i < textBox_CR->Text->Length; i++) {
				if ((textBox_CR->Text[i] >= '0') && (textBox_CR->Text[i] <= '9'))
				{
					return true;
				}
				else { return false; }
			}
			if ((textBox_CR->Text->Length == 0)) { return false; }
			return true;
		}
		bool CheckValue_Ractangle()
		{
			for (int i = 0; i < textBox_RL->Text->Length; i++) {
				if ((textBox_RL->Text[i] >= '0') && (textBox_RL->Text[i] <= '9'))
				{
					return true;
				}
				else { return false; }
			}
			for (int i = 0; i < textBox_RW->Text->Length; i++) {
				if ((textBox_RW->Text[i] >= '0') && (textBox_RW->Text[i] <= '9'))
				{
					return true;
				}
				else { return false; }
			}
			if ((textBox_RL->Text->Length == 0)) { return false; }
			if ((textBox_RW->Text->Length == 0)) { return false; }
			return true;
		}
		bool CheckValue_Trapezoid()
		{
			for (int i = 0; i < textBox_TA->Text->Length; i++) {
				if ((textBox_TA->Text[i] >= '0') && (textBox_TA->Text[i] <= '9'))
				{
					return true;
				}
				else { return false; }
			}
			for (int i = 0; i < textBox_TB->Text->Length; i++) {
				if ((textBox_TB->Text[i] >= '0') && (textBox_TB->Text[i] <= '9'))
				{
					return true;
				}
				else { return false; }
			}
			for (int i = 0; i < textBox_TH->Text->Length; i++) {
				if ((textBox_TH->Text[i] >= '0') && (textBox_TH->Text[i] <= '9'))
				{
					return true;
				}
				else { return false; }
			}
			if ((textBox_TA->Text->Length == 0)) { return false; }
			if ((textBox_TB->Text->Length == 0)) { return false; }
			if ((textBox_TH->Text->Length == 0)) { return false; }
			return true;
		}

	private: System::Void button_CS_Click(System::Object ^ sender, System::EventArgs ^ e) {

		if (CheckValue_Circle()) {
			MyFigures::Circle^ c1 = gcnew MyFigures::Circle(Convert::ToDouble(textBox_CR->Text));
			figures->Add(c1);
			textBox_CS->Text = Convert::ToString(c1->getArea());
		}
	}
	private: System::Void button_RS_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (CheckValue_Ractangle()) {
			MyFigures::Rectangle^ r1 = gcnew MyFigures::Rectangle(Convert::ToDouble(textBox_RL->Text), Convert::ToDouble(textBox_RW->Text));
			figures->Add(r1);
			textBox_RS->Text = Convert::ToString(r1->getArea());
		}
	}
	private: System::Void button_TS_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (CheckValue_Trapezoid()) {
			MyFigures::Trapezoid^ t1 = gcnew MyFigures::Trapezoid(Convert::ToDouble(textBox_TA->Text),
				Convert::ToDouble(textBox_TB->Text), Convert::ToDouble(textBox_TH->Text));
			figures->Add(t1);
			textBox_TS->Text = Convert::ToString(t1->getArea());
		}
	}
	};
}

