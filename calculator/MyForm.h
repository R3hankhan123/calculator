#pragma once

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ b_del;
	private: System::Windows::Forms::Button^ b_c;
	private: System::Windows::Forms::Button^ b_ce;




	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ b7;
	private: System::Windows::Forms::Button^ b8;
	private: System::Windows::Forms::Button^ b9;
	private: System::Windows::Forms::Button^ b_plus;
	private: System::Windows::Forms::Button^ b4;
	private: System::Windows::Forms::Button^ b5;
	private: System::Windows::Forms::Button^ b6;
	private: System::Windows::Forms::Button^ b_minus;
	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ b2;










	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ b_mul;
	private: System::Windows::Forms::Button^ b0;
	private: System::Windows::Forms::Button^ b_decimal;



	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ b_div;

	protected:









	protected:

	protected:

































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->b_del = (gcnew System::Windows::Forms::Button());
			this->b_c = (gcnew System::Windows::Forms::Button());
			this->b_ce = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b_plus = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b_minus = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->b_mul = (gcnew System::Windows::Forms::Button());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->b_decimal = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->b_div = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(24, 16);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(338, 41);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// b_del
			// 
			this->b_del->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b_del->Font = (gcnew System::Drawing::Font(L"Wingdings", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->b_del->Location = System::Drawing::Point(24, 63);
			this->b_del->Name = L"b_del";
			this->b_del->Size = System::Drawing::Size(80, 80);
			this->b_del->TabIndex = 1;
			this->b_del->Text = L"";
			this->b_del->UseVisualStyleBackColor = false;
			this->b_del->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// b_c
			// 
			this->b_c->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b_c->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_c->Location = System::Drawing::Point(110, 63);
			this->b_c->Name = L"b_c";
			this->b_c->Size = System::Drawing::Size(80, 80);
			this->b_c->TabIndex = 2;
			this->b_c->Text = L"Exit";
			this->b_c->UseVisualStyleBackColor = false;
			this->b_c->Click += gcnew System::EventHandler(this, &MyForm::b_c_Click);
			// 
			// b_ce
			// 
			this->b_ce->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b_ce->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_ce->Location = System::Drawing::Point(196, 63);
			this->b_ce->Name = L"b_ce";
			this->b_ce->Size = System::Drawing::Size(80, 80);
			this->b_ce->TabIndex = 3;
			this->b_ce->Text = L"CE";
			this->b_ce->UseVisualStyleBackColor = false;
			this->b_ce->Click += gcnew System::EventHandler(this, &MyForm::b_ce_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(282, 63);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 4;
			this->button4->Text = L"±";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// b7
			// 
			this->b7->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b7->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b7->Location = System::Drawing::Point(24, 149);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(80, 80);
			this->b7->TabIndex = 1;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = false;
			this->b7->Click += gcnew System::EventHandler(this, &MyForm::EnterNo);
			// 
			// b8
			// 
			this->b8->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b8->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b8->Location = System::Drawing::Point(110, 149);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(80, 80);
			this->b8->TabIndex = 2;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = false;
			this->b8->Click += gcnew System::EventHandler(this, &MyForm::EnterNo);
			// 
			// b9
			// 
			this->b9->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b9->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b9->Location = System::Drawing::Point(196, 149);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(80, 80);
			this->b9->TabIndex = 3;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = false;
			this->b9->Click += gcnew System::EventHandler(this, &MyForm::EnterNo);
			// 
			// b_plus
			// 
			this->b_plus->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b_plus->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_plus->Location = System::Drawing::Point(282, 149);
			this->b_plus->Name = L"b_plus";
			this->b_plus->Size = System::Drawing::Size(80, 80);
			this->b_plus->TabIndex = 4;
			this->b_plus->Text = L"+";
			this->b_plus->UseVisualStyleBackColor = false;
			this->b_plus->Click += gcnew System::EventHandler(this, &MyForm::ops);
			// 
			// b4
			// 
			this->b4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b4->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b4->Location = System::Drawing::Point(24, 235);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(80, 80);
			this->b4->TabIndex = 1;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = false;
			this->b4->Click += gcnew System::EventHandler(this, &MyForm::EnterNo);
			// 
			// b5
			// 
			this->b5->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b5->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b5->Location = System::Drawing::Point(110, 235);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(80, 80);
			this->b5->TabIndex = 2;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = false;
			this->b5->Click += gcnew System::EventHandler(this, &MyForm::EnterNo);
			// 
			// b6
			// 
			this->b6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b6->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b6->Location = System::Drawing::Point(196, 235);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(80, 80);
			this->b6->TabIndex = 3;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = false;
			this->b6->Click += gcnew System::EventHandler(this, &MyForm::EnterNo);
			// 
			// b_minus
			// 
			this->b_minus->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b_minus->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_minus->Location = System::Drawing::Point(282, 235);
			this->b_minus->Name = L"b_minus";
			this->b_minus->Size = System::Drawing::Size(80, 80);
			this->b_minus->TabIndex = 4;
			this->b_minus->Text = L"-";
			this->b_minus->UseVisualStyleBackColor = false;
			this->b_minus->Click += gcnew System::EventHandler(this, &MyForm::ops);
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b1->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->Location = System::Drawing::Point(24, 321);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(80, 80);
			this->b1->TabIndex = 1;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = false;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::EnterNo);
			// 
			// b2
			// 
			this->b2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b2->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->Location = System::Drawing::Point(110, 321);
			this->b2->Name = L"b2";
			this->b2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->b2->Size = System::Drawing::Size(80, 80);
			this->b2->TabIndex = 2;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = false;
			this->b2->Click += gcnew System::EventHandler(this, &MyForm::EnterNo);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(196, 321);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 80);
			this->button15->TabIndex = 3;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterNo);
			// 
			// b_mul
			// 
			this->b_mul->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b_mul->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_mul->Location = System::Drawing::Point(282, 321);
			this->b_mul->Name = L"b_mul";
			this->b_mul->Size = System::Drawing::Size(80, 80);
			this->b_mul->TabIndex = 4;
			this->b_mul->Text = L"*";
			this->b_mul->UseVisualStyleBackColor = false;
			this->b_mul->Click += gcnew System::EventHandler(this, &MyForm::ops);
			// 
			// b0
			// 
			this->b0->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b0->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b0->Location = System::Drawing::Point(24, 407);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(80, 80);
			this->b0->TabIndex = 1;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = false;
			this->b0->Click += gcnew System::EventHandler(this, &MyForm::EnterNo);
			// 
			// b_decimal
			// 
			this->b_decimal->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b_decimal->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_decimal->Location = System::Drawing::Point(110, 407);
			this->b_decimal->Name = L"b_decimal";
			this->b_decimal->Size = System::Drawing::Size(80, 80);
			this->b_decimal->TabIndex = 2;
			this->b_decimal->Text = L".";
			this->b_decimal->UseVisualStyleBackColor = false;
			this->b_decimal->Click += gcnew System::EventHandler(this, &MyForm::b_decimal_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button19->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(196, 407);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 80);
			this->button19->TabIndex = 3;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// b_div
			// 
			this->b_div->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->b_div->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_div->Location = System::Drawing::Point(282, 407);
			this->b_div->Name = L"b_div";
			this->b_div->Size = System::Drawing::Size(80, 80);
			this->b_div->TabIndex = 4;
			this->b_div->Text = L"/";
			this->b_div->UseVisualStyleBackColor = false;
			this->b_div->Click += gcnew System::EventHandler(this, &MyForm::ops);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MintCream;
			this->ClientSize = System::Drawing::Size(389, 502);
			this->Controls->Add(this->b_div);
			this->Controls->Add(this->b_mul);
			this->Controls->Add(this->b_minus);
			this->Controls->Add(this->b_plus);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b_ce);
			this->Controls->Add(this->b_decimal);
			this->Controls->Add(this->b0);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b_c);
			this->Controls->Add(this->b_del);
			this->Controls->Add(this->textBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximumSize = System::Drawing::Size(407, 549);
			this->MinimumSize = System::Drawing::Size(407, 549);
			this->Name = L"MyForm";
			this->Text = L"CALCULATOR";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double a, b, ans;
		String^ op;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length>0)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
}
private: System::Void EnterNo(System::Object^ sender, System::EventArgs^ e) {
	Button^ Num = safe_cast<Button^>(sender);
	if (textBox1->Text == "0") {
		textBox1->Text = Num->Text;
	}
	else
	{
		textBox1->Text = textBox1->Text+ Num->Text ;
	}
}

private: System::Void ops(System::Object^ sender, System::EventArgs^ e) {
	Button^ numops = safe_cast<Button^>(sender);
	a = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	op = numops->Text;
}
private: System::Void b_decimal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox1->Text->Contains("."))
	{
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	b = Double::Parse(textBox1->Text);
	if (op=="+")
	{
		ans = a + b;
		textBox1->Text = System::Convert::ToString(ans);
	}
	else if (op=="-")
	{
		ans = a - b;
		textBox1->Text = System::Convert::ToString(ans);
	}
	else if (op=="*")
	{
		ans = a * b;
		textBox1->Text = System::Convert::ToString(ans);
	}
	else
	{
		ans = a / b;
		textBox1->Text = System::Convert::ToString(ans);
	}
}
	private: System::Void b_c_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
	}
private: System::Void b_ce_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Contains("-"))
	{
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else
	{
		textBox1->Text = "-" + textBox1->Text;
	}
}
};
}
