#pragma once

namespace oop8 {

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
	private: System::Windows::Forms::TextBox^ input;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ output;
	private: System::Windows::Forms::Button^ exit;



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
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// input
			// 
			this->input->Location = System::Drawing::Point(32, 106);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(100, 20);
			this->input->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(114, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Обпрацювати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// output
			// 
			this->output->Location = System::Drawing::Point(177, 106);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(100, 20);
			this->output->TabIndex = 2;
			// 
			// exit
			// 
			this->exit->Location = System::Drawing::Point(13, 13);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(39, 25);
			this->exit->TabIndex = 3;
			this->exit->Text = L"exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 287);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->output);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->input);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Отримання тексту з вхідного текстового поля
		String^ inputText = input->Text;

		// Виведення тексту в вихідне текстове поле
		output->Text = "Оброблено: " + inputText;
	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
