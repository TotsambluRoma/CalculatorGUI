#pragma once

namespace CalculatorGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Button_X;
	private: System::Windows::Forms::Label^ Result;
	private: System::Windows::Forms::Button^ AC;
	private: System::Windows::Forms::Button^ plusds;

	private: System::Windows::Forms::Button^ procent;
	private: System::Windows::Forms::Button^ div;
	private: System::Windows::Forms::Button^ mult;
	private: System::Windows::Forms::Button^ nine;






	private: System::Windows::Forms::Button^ eight;

	private: System::Windows::Forms::Button^ seven;

	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ four;


	private: System::Windows::Forms::Button^ five;

	private: System::Windows::Forms::Button^ six;

	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ one;


	private: System::Windows::Forms::Button^ two;

	private: System::Windows::Forms::Button^ three;

	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ point;


	private: System::Windows::Forms::Button^ zero;

	private: int first_num;
	private: char user_action;

	protected:

	protected:

	protected:

	protected:

	protected:


	protected:




	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Button_X = (gcnew System::Windows::Forms::Button());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->AC = (gcnew System::Windows::Forms::Button());
			this->plusds = (gcnew System::Windows::Forms::Button());
			this->procent = (gcnew System::Windows::Forms::Button());
			this->div = (gcnew System::Windows::Forms::Button());
			this->mult = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Button_X
			// 
			this->Button_X->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->Button_X->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Button_X->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Button_X->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_X->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Button_X->Location = System::Drawing::Point(307, 12);
			this->Button_X->Name = L"Button_X";
			this->Button_X->Size = System::Drawing::Size(37, 34);
			this->Button_X->TabIndex = 0;
			this->Button_X->Text = L"X";
			this->Button_X->UseVisualStyleBackColor = false;
			this->Button_X->Click += gcnew System::EventHandler(this, &MyForm::X_Click);
			// 
			// Result
			// 
			this->Result->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Result->ForeColor = System::Drawing::SystemColors::Window;
			this->Result->Location = System::Drawing::Point(12, 58);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(332, 70);
			this->Result->TabIndex = 1;
			this->Result->Text = L"0";
			this->Result->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Result->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// AC
			// 
			this->AC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AC->ForeColor = System::Drawing::SystemColors::Window;
			this->AC->Location = System::Drawing::Point(19, 180);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(65, 55);
			this->AC->TabIndex = 2;
			this->AC->Text = L"AC";
			this->AC->UseVisualStyleBackColor = false;
			this->AC->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// plusds
			// 
			this->plusds->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->plusds->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plusds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plusds->ForeColor = System::Drawing::SystemColors::Window;
			this->plusds->Location = System::Drawing::Point(90, 180);
			this->plusds->Name = L"plusds";
			this->plusds->Size = System::Drawing::Size(65, 55);
			this->plusds->TabIndex = 3;
			this->plusds->Text = L"+/-";
			this->plusds->UseVisualStyleBackColor = false;
			this->plusds->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// procent
			// 
			this->procent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->procent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->procent->ForeColor = System::Drawing::SystemColors::Window;
			this->procent->Location = System::Drawing::Point(161, 180);
			this->procent->Name = L"procent";
			this->procent->Size = System::Drawing::Size(65, 55);
			this->procent->TabIndex = 4;
			this->procent->Text = L"%";
			this->procent->UseVisualStyleBackColor = false;
			this->procent->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// div
			// 
			this->div->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->div->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->div->ForeColor = System::Drawing::SystemColors::Window;
			this->div->Location = System::Drawing::Point(264, 180);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(65, 55);
			this->div->TabIndex = 5;
			this->div->Text = L"/";
			this->div->UseVisualStyleBackColor = false;
			this->div->Click += gcnew System::EventHandler(this, &MyForm::div_Click);
			// 
			// mult
			// 
			this->mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mult->ForeColor = System::Drawing::SystemColors::Window;
			this->mult->Location = System::Drawing::Point(264, 253);
			this->mult->Name = L"mult";
			this->mult->Size = System::Drawing::Size(65, 55);
			this->mult->TabIndex = 9;
			this->mult->Text = L"x";
			this->mult->UseVisualStyleBackColor = false;
			this->mult->Click += gcnew System::EventHandler(this, &MyForm::mult_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nine->ForeColor = System::Drawing::SystemColors::Window;
			this->nine->Location = System::Drawing::Point(161, 253);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(65, 55);
			this->nine->TabIndex = 8;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = false;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::ButtonNumber_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->eight->ForeColor = System::Drawing::SystemColors::Window;
			this->eight->Location = System::Drawing::Point(90, 253);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(65, 55);
			this->eight->TabIndex = 7;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = false;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::ButtonNumber_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->seven->ForeColor = System::Drawing::SystemColors::Window;
			this->seven->Location = System::Drawing::Point(19, 253);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(65, 55);
			this->seven->TabIndex = 6;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = false;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::ButtonNumber_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->ForeColor = System::Drawing::SystemColors::Window;
			this->plus->Location = System::Drawing::Point(264, 332);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(65, 55);
			this->plus->TabIndex = 13;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->four->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->four->ForeColor = System::Drawing::SystemColors::Window;
			this->four->Location = System::Drawing::Point(161, 332);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(65, 55);
			this->four->TabIndex = 12;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = false;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::ButtonNumber_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->five->ForeColor = System::Drawing::SystemColors::Window;
			this->five->Location = System::Drawing::Point(90, 332);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(65, 55);
			this->five->TabIndex = 11;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = false;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::ButtonNumber_Click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->six->ForeColor = System::Drawing::SystemColors::Window;
			this->six->Location = System::Drawing::Point(19, 332);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(65, 55);
			this->six->TabIndex = 10;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = false;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::ButtonNumber_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->ForeColor = System::Drawing::SystemColors::Window;
			this->minus->Location = System::Drawing::Point(264, 407);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(65, 55);
			this->minus->TabIndex = 17;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::minus_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->one->ForeColor = System::Drawing::SystemColors::Window;
			this->one->Location = System::Drawing::Point(161, 407);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(65, 55);
			this->one->TabIndex = 16;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = false;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::ButtonNumber_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->two->ForeColor = System::Drawing::SystemColors::Window;
			this->two->Location = System::Drawing::Point(90, 407);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(65, 55);
			this->two->TabIndex = 15;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = false;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::ButtonNumber_Click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->three->ForeColor = System::Drawing::SystemColors::Window;
			this->three->Location = System::Drawing::Point(19, 407);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(65, 55);
			this->three->TabIndex = 14;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = false;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::ButtonNumber_Click);
			// 
			// equal
			// 
			this->equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(166)));
			this->equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equal->ForeColor = System::Drawing::SystemColors::Window;
			this->equal->Location = System::Drawing::Point(264, 481);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(65, 55);
			this->equal->TabIndex = 21;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = false;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// point
			// 
			this->point->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->point->ForeColor = System::Drawing::SystemColors::Window;
			this->point->Location = System::Drawing::Point(161, 481);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(65, 55);
			this->point->TabIndex = 20;
			this->point->Text = L".";
			this->point->UseVisualStyleBackColor = false;
			// 
			// zero
			// 
			this->zero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zero->ForeColor = System::Drawing::SystemColors::Window;
			this->zero->Location = System::Drawing::Point(19, 481);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(136, 55);
			this->zero->TabIndex = 18;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = false;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::ButtonNumber_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->ClientSize = System::Drawing::Size(356, 561);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->point);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->one);
			this->Controls->Add(this->two);
			this->Controls->Add(this->three);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->four);
			this->Controls->Add(this->five);
			this->Controls->Add(this->six);
			this->Controls->Add(this->mult);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->div);
			this->Controls->Add(this->procent);
			this->Controls->Add(this->plusds);
			this->Controls->Add(this->AC);
			this->Controls->Add(this->Button_X);
			this->Controls->Add(this->Result);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void X_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void ButtonNumber_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = safe_cast<Button^>(sender);
	if (this->Result->Text == "0") {
		this->Result->Text = button->Text;
	}
	else {
		this->Result->Text = this->Result->Text + button->Text;
	}
}
private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}
private: System::Void div_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}
private: System::Void mult_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void math_action(char action) {
	this->first_num = System::Convert::ToInt32(this->Result->Text);
	this->user_action = action;
	this->Result->Text = "0";
}

private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {
	int second = System::Convert::ToInt32(this->Result->Text);
	int res;
	switch (this->user_action)
	{
	case '+':res = this->first_num + second; break;
	case '-':res = this->first_num - second; break;
	case '*':res = this->first_num * second; break;
	case '/':res = this->first_num / second; break;
	}
	this->Result->Text = System::Convert::ToString(res);
}
};
}
