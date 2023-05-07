#pragma once
#include <iostream>
#include <time.h>
#include <stdlib.h>

namespace SimpleRandomizer {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_generate;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ labelNum;
	private: System::Windows::Forms::Label^ labelAttention;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelLast;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->btn_generate = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelNum = (gcnew System::Windows::Forms::Label());
			this->labelAttention = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelLast = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_generate
			// 
			this->btn_generate->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_generate->Location = System::Drawing::Point(33, 136);
			this->btn_generate->Name = L"btn_generate";
			this->btn_generate->Size = System::Drawing::Size(133, 40);
			this->btn_generate->TabIndex = 0;
			this->btn_generate->Text = L"Сгенерировать";
			this->btn_generate->UseVisualStyleBackColor = true;
			this->btn_generate->Click += gcnew System::EventHandler(this, &MainForm::btn_generate_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(36, 84);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(120, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBox2_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"от";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(95, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"до";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(30, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Сгенерировать число";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(207, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Сгенерированное число";
			// 
			// labelNum
			// 
			this->labelNum->AutoSize = true;
			this->labelNum->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 20));
			this->labelNum->Location = System::Drawing::Point(262, 82);
			this->labelNum->Name = L"labelNum";
			this->labelNum->Size = System::Drawing::Size(25, 35);
			this->labelNum->TabIndex = 7;
			this->labelNum->Text = L"-";
			// 
			// labelAttention
			// 
			this->labelAttention->AutoSize = true;
			this->labelAttention->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelAttention->Location = System::Drawing::Point(12, 180);
			this->labelAttention->Name = L"labelAttention";
			this->labelAttention->Size = System::Drawing::Size(0, 16);
			this->labelAttention->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(240, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Прошлое число";
			// 
			// labelLast
			// 
			this->labelLast->AutoSize = true;
			this->labelLast->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelLast->Location = System::Drawing::Point(271, 180);
			this->labelLast->Name = L"labelLast";
			this->labelLast->Size = System::Drawing::Size(16, 22);
			this->labelLast->TabIndex = 10;
			this->labelLast->Text = L"-";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(384, 211);
			this->Controls->Add(this->labelLast);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->labelAttention);
			this->Controls->Add(this->labelNum);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btn_generate);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Рандомайзер";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: bool firstTime = true;
	private: Random^ rand = gcnew Random();
	private: System::Void btn_generate_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int a = 0, b = 0;
			int last = 0;
			a = Convert::ToInt32(this->textBox1->Text);
			b = Convert::ToInt32(this->textBox2->Text);
			if (a < 0 || b < 0)
			{
				throw L"первый и/или второй параметр(ы)\nотрицательные(ый)!";
			}
			if (a > 2147483647 || b > 2147483647 || a < -2147483647 || b < -2147483647)
			{	
				throw L"первый и/или второй параметр(ы) - слишком большое число!";
			}
			this->labelAttention->Text = "";
			if (this->firstTime == false)
				this->labelLast->Text = this->labelNum->Text;
			this->labelNum->Text = Convert::ToString(this->rand->Next(a, b));
			this->firstTime = false;
		}
		catch (...)
		{
			this->labelAttention->Text = L"первый и/или второй параметр(ы)\nотрицательные(ый), либо они слишком большие!";
		}
	}

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		
		// Allow negative numbers
		
		// Accept only digits ".", "-" and the Backspace character
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		

		// Accept only digits ".", "-" and the Backspace character
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
			e->Handled = true;
		}
	}
};
}
