#pragma once

namespace $safeprojectname$ {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::HScrollBar^ hScrollBar1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->hScrollBar1);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->groupBox1->Location = System::Drawing::Point(34, 40);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(702, 476);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Unit of Measurement Converter";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 408);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 38);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Value";
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(36, 373);
			this->hScrollBar1->Maximum = 1000;
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(629, 21);
			this->hScrollBar1->TabIndex = 6;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::hScrollBar1_Scroll);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->groupBox2->Location = System::Drawing::Point(36, 81);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(629, 270);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Converter";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(136, 202);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(362, 39);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->Text = L"Select an Option";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->Click += gcnew System::EventHandler(this, &MyForm::comboBox1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(37, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(179, 38);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(420, 97);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 38);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(91, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Value";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(455, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Value";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Value";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(772, 567);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Info;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MinimumSize = System::Drawing::Size(790, 614);
			this->Name = L"MyForm";
			this->RightToLeftLayout = true;
			this->Text = L"Unit Converter";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int iConverter;
		int convertedValue;
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	comboBox1->Items->Add("Convert mm to cm");
	comboBox1->Items->Add("Convert cm to m");
	comboBox1->Items->Add("Convert m to km");
	comboBox1->Items->Add("Convert cm to mm");
	comboBox1->Items->Add("Convert m to cm");
	comboBox1->Items->Add("Convert km to m");

}
private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	hScrollBar1->Enabled = true;
	hScrollBar1->Value = 0;
	hScrollBar1->Refresh();

}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (comboBox1->Text == "Convert mm to cm") {

			textBox1->Text = "";
			textBox2->Text = "";
			label3->Text = "Conversion from Millimeters to Centimeters";
			label1->Text = "Millimeters";
			label2->Text = "Centimeters";
			label4->Text = "To change mm to cm divide by 10";

		}
		else if (comboBox1->Text == "Convert cm to m") {

			textBox1->Text = "";
			textBox2->Text = "";
			label3->Text = "Conversion from Centimeters to Meters";
			label1->Text = "Centimeters";
			label2->Text = "Meters";
			label4->Text = "To change cm to m divide the value by 100";

		}

		else if (comboBox1->Text == "Convert m to km") {

			textBox1->Text = "";
			textBox2->Text = "";
			label3->Text = "Conversion from Meters to Kilometers";
			label1->Text = "Meters";
			label2->Text = "Kilometers";
			label4->Text = "To change m to km divide the value by 1000";

		}

		else if (comboBox1->Text == "Convert cm to mm") {

			textBox1->Text = "";
			textBox2->Text = "";
			label3->Text = "Conversion from Centimeters to Millimeters";
			label1->Text = "Centimeters";
			label2->Text = "Millimeters";
			label4->Text = "To change cm to mm multiply the value by 10";
		}

		else if (comboBox1->Text == "Convert m to cm") {

			textBox1->Text = "";
			textBox2->Text = "";
			label3->Text = "Conversion from Meters to Centimeters";
			label1->Text = "Meters";
			label2->Text = "Centimeters";
			label4->Text = "To change m to cm multiply the value by 100";
		}

		else if (comboBox1->Text == "Convert km to m") {

			textBox1->Text = "";
			textBox2->Text = "";
			label3->Text = "Conversion from Kilometers to Meters";
			label1->Text = "Kilometers";
			label2->Text = "Meters";
			label4->Text = "To change km to m multiply the value by 1000";
		}
	}


private: System::Void hScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {

	if (comboBox1->Text == "Convert mm to cm") {

		convertedValue = (hScrollBar1->Value);
		textBox1->Text = convertedValue.ToString();
		iConverter = (hScrollBar1->Value * 10);
		textBox2->Text = iConverter.ToString();

	}

	else if (comboBox1->Text == "Convert cm to m") {

		convertedValue = (hScrollBar1->Value);
		textBox1->Text = convertedValue.ToString();
		iConverter = (hScrollBar1->Value * 100);
		textBox2->Text = iConverter.ToString();

	}

	else if (comboBox1->Text == "Convert m to km") {

		convertedValue = (hScrollBar1->Value);
		textBox1->Text = convertedValue.ToString();
		iConverter = (hScrollBar1->Value * 1000);
		textBox2->Text = iConverter.ToString();

	}

	else if (comboBox1->Text == "Convert cm to mm") {

		convertedValue = (hScrollBar1->Value);
		textBox2->Text = convertedValue.ToString();
		iConverter = (hScrollBar1->Value * 10);
		textBox1->Text = iConverter.ToString();

	}

	else if (comboBox1->Text == "Convert m to cm") {

		convertedValue = (hScrollBar1->Value);
		textBox2->Text = convertedValue.ToString();
		iConverter = (hScrollBar1->Value * 100);
		textBox1->Text = iConverter.ToString();

	}

	else if (comboBox1->Text == "Convert km to m") {

		convertedValue = (hScrollBar1->Value);
		textBox2->Text = convertedValue.ToString();
		iConverter = (hScrollBar1->Value * 1000);
		textBox1->Text = iConverter.ToString();

	}

}
};
}
