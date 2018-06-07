#pragma once

namespace INN {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 29);
			this->textBox1->MaxLength = 10;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 24);
			this->textBox1->TabIndex = 0;
			this->toolTip1->SetToolTip(this->textBox1, L"Введите необходимые цифры ИНН, остальные генератор дополнит автоматически.\nЕсли н" 
				L"еобходимо автоматически заменить символ, то используйте знак \'*\'");
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите часть ИНН";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(16, 59);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(120, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Юридическое лицо";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton_UL_or_IP);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(16, 82);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(95, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Частное лицо";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 135);
			this->textBox2->MaxLength = 12;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(189, 29);
			this->textBox2->TabIndex = 4;
			this->toolTip1->SetToolTip(this->textBox2, L"Сгенерированный ИНН");
			// 
			// button1
			// 
			this->button1->AutoEllipsis = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(63, 343);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 31);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Сгенерировать";
			this->toolTip1->SetToolTip(this->button1, L"Сгенерировать ИНН");
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(12, 190);
			this->textBox3->MaxLength = 9;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(189, 29);
			this->textBox3->TabIndex = 7;
			this->toolTip1->SetToolTip(this->textBox3, L"КПП генерируется только для ЮЛ");
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(12, 244);
			this->textBox4->MaxLength = 15;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(189, 29);
			this->textBox4->TabIndex = 8;
			this->toolTip1->SetToolTip(this->textBox4, L"ОГРН генерируется для ЮЛ.\nОГРНИП генерируется для ИП.");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"ИНН";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"КПП";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 228);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"ОГРН (ОГРНИП)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 282);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"СНИЛС";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(12, 298);
			this->textBox5->MaxLength = 14;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(189, 29);
			this->textBox5->TabIndex = 12;
			this->toolTip1->SetToolTip(this->textBox5, L"Сгенерированный СНИЛС");
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Location = System::Drawing::Point(12, 342);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(32, 32);
			this->button2->TabIndex = 14;
			this->toolTip1->SetToolTip(this->button2, L"Скопировать сгенерированные данные в буфер обмена");
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(216, 391);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"Генератор";
			this->Text = L"ИНН/КПП/ОГРН/СНИЛС";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
		{
			unsigned char *INNlen = new unsigned char;
			*INNlen = textBox1->TextLength;
			String^ simvol, ^simvol_new;
			unsigned char *i = new unsigned char;
			unsigned char *j = new unsigned char;
			*i = *j = 0;
			if( *INNlen != 0 ) {				
				for (;*i<=*INNlen;*i+=1)
				{
					if ( *i == 0 ) 
					{
						*i = 1;
					}
					*j = *INNlen-*i;
					simvol = textBox1->Text->Substring(*j,1);
					if ( simvol == "*")
					{
						simvol_new = Convert::ToString(rand() % 9);
						textBox1->Text = textBox1->Text->Replace(simvol,simvol_new);
						simvol = simvol_new;
						textBox1->Select(*j+1,0);
					}
					if ((simvol != "0") && 
						//(simvol != ".") &&
						(simvol != "1") &&
						(simvol != "2") &&
						(simvol != "3") &&
						(simvol != "4") &&
						(simvol != "5") &&
						(simvol != "6") &&
						(simvol != "7") &&
						(simvol != "8") &&
						(simvol != "9")) {
							textBox1->Text = textBox1->Text->Remove(*j,1);
							textBox1->Select(*j,0);
					}
				}
			}
			delete INNlen;
		}

private: double fRand(double fMin, double fMax)
		 {
			double f = (double)rand() / RAND_MAX;
			return fMin + f * (fMax - fMin);
		 }
//private: void MarshalString ( String ^ s, string& os )
//		 {
//			using namespace Runtime::InteropServices;
//			const char* chars = 
//				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
//			os = chars;
//			Marshal::FreeHGlobal(IntPtr((void*)chars));
//		 }
//private: void MarshalString ( String ^ s, wstring& os )
//		 {
//			using namespace Runtime::InteropServices;
//			const wchar_t* chars = 
//				(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
//			os = chars;
//			Marshal::FreeHGlobal(IntPtr((void*)chars));
//		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			unsigned char *INNlen = new unsigned char;
			*INNlen = 10;
			double SNILSkontr;
			double SNILSkontr1;
			double OGRNkontr;
			if ( radioButton2->Checked )
			{
				*INNlen = 12;
			}
			array<String^>^ mINN = gcnew array<String^>(*INNlen);
			array<String^>^ mSNILS = gcnew array<String^>(10);
			array<String^>^ mOGRN = gcnew array<String^>(2);
			String^ szINNres = "";
			String^ szKPPres = "";
			String^ szOGRNres = "";
			String^ szSNILSres = "";
			String^ szINN = textBox1->Text;

			//Заполняем массив введенными данными, пустые будут автоматически сгенерированы
			unsigned char *i_mINN = new unsigned char;
			*i_mINN=0;
			for(;*i_mINN<*INNlen;*i_mINN+=1)
			{
				for (;*i_mINN<(szINN->Length);*i_mINN+=1)
				{
					mINN[*i_mINN] = szINN->Substring(*i_mINN,1);
				}
				if( *i_mINN<*INNlen )
					mINN[*i_mINN] = Convert::ToString(rand() % 9);
			}
			delete i_mINN;

			//	Генерируем СНИЛС
			// Вынес генератор СНИЛС в общий поток, так как иногда он нужен и для ЮЛ
			unsigned char *i_mSNILS = new unsigned char;
			*i_mSNILS=0;
			for(;*i_mSNILS<=8;*i_mSNILS=*i_mSNILS+1)
			{
				mSNILS[*i_mSNILS] = Convert::ToString(rand() % 9);
			}
			delete i_mSNILS;

			SNILSkontr =	(9*Convert::ToInt32(mSNILS[0])) +
							(8*Convert::ToInt32(mSNILS[1])) +
							(7*Convert::ToInt32(mSNILS[2])) +
							(6*Convert::ToInt32(mSNILS[3])) +
							(5*Convert::ToInt32(mSNILS[4])) +
							(4*Convert::ToInt32(mSNILS[5])) +
							(3*Convert::ToInt32(mSNILS[6])) +
							(2*Convert::ToInt32(mSNILS[7])) +
							(1*Convert::ToInt32(mSNILS[8]));
			//Если контрольная сумма СНИЛС > 101, то проводим некоторые дорасчеты
			if (SNILSkontr > 101) {
				do
				{
					SNILSkontr1 = SNILSkontr - 101;
					SNILSkontr = SNILSkontr1;
				} while (SNILSkontr > 101);

				SNILSkontr = Convert::ToInt32(SNILSkontr1);
			}
			//Если контрольная сумма СНИЛС < 100, то приводим ее к int
			if (SNILSkontr < 100) SNILSkontr = Convert::ToInt32(SNILSkontr);
			//Если контрольная сумма СНИЛС == 100 или 101, то сумма будет равна 0
			if (SNILSkontr == 100 || SNILSkontr == 101) SNILSkontr = 0;
			//Если контрольное число меньше 10, то дописываем 0 в начале. Приводим к строке
			mSNILS[9] = SNILSkontr<10?("0"+Convert::ToString(SNILSkontr)):Convert::ToString(SNILSkontr);
			//Результирующая строка СНИЛС
			szSNILSres =	mSNILS[0]->ToString() +
							mSNILS[1]->ToString() +
							mSNILS[2]->ToString() + "-" +
							mSNILS[3]->ToString() +
							mSNILS[4]->ToString() +
							mSNILS[5]->ToString() + "-" +
							mSNILS[6]->ToString() +
							mSNILS[7]->ToString() +
							mSNILS[8]->ToString() + " " +
							mSNILS[9]->ToString();

			//	Генерация для ЮЛ
			if ( radioButton1->Checked )
			{
				//	Подсчет контрольной суммы ИНН
				mINN[9] = Convert::ToString(((
					2	* Convert::ToInt32(mINN[0]) +
					4	* Convert::ToInt32(mINN[1]) +
					10	* Convert::ToInt32(mINN[2]) +
					3	* Convert::ToInt32(mINN[3]) +
					5	* Convert::ToInt32(mINN[4]) +
					9	* Convert::ToInt32(mINN[5]) +
					4	* Convert::ToInt32(mINN[6]) +
					6	* Convert::ToInt32(mINN[7]) +
					8	* Convert::ToInt32(mINN[8]) )
					% 11)
					% 10);
				//Результирующая строка ИНН
				unsigned char *i_szINNres = new unsigned char;
				for(*i_szINNres=0;*i_szINNres<*INNlen;*i_szINNres+=1)
				{
					szINNres += mINN[*i_szINNres]->ToString();
				}
				delete i_szINNres;
				//Результирующая строка КПП ЮЛ в зависимости от ИНН ЮЛ
				szKPPres = szINNres->Remove(4) + "01001";
				//	Генерируем ОГРН
				OGRNkontr = floor(fRand(100000000000, 999999999999));
				String^ szOGRN1 = Convert::ToString(OGRNkontr);
				OGRNkontr = fmod(OGRNkontr, 11);

				if (OGRNkontr > 9) 
					OGRNkontr = Convert::ToInt32(Convert::ToDouble(OGRNkontr) - floor(Convert::ToDouble(OGRNkontr)/10)*10);

				String^ szOGRN2 = Convert::ToString(OGRNkontr);
				//Результирующая строка ОГРН
				szOGRNres = szOGRN1 + szOGRN2;
			}

			//	Генерация для ИП
			if ( radioButton2->Checked )
			{
				//	Подсчет контрольной суммы ИНН
				mINN[10] = Convert::ToString(((
					7	* Convert::ToInt32(mINN[0]) +
					2	* Convert::ToInt32(mINN[1]) +
					4	* Convert::ToInt32(mINN[2]) +
					10	* Convert::ToInt32(mINN[3]) +
					3	* Convert::ToInt32(mINN[4]) +
					5	* Convert::ToInt32(mINN[5]) +
					9	* Convert::ToInt32(mINN[6]) +
					4	* Convert::ToInt32(mINN[7]) +
					6	* Convert::ToInt32(mINN[8]) +
					8	* Convert::ToInt32(mINN[9]) )
					% 11)
					% 10);
				mINN[11] = Convert::ToString(((
					3	* Convert::ToInt32(mINN[0]) +
					7	* Convert::ToInt32(mINN[1]) +
					2	* Convert::ToInt32(mINN[2]) +
					4	* Convert::ToInt32(mINN[3]) +
					10	* Convert::ToInt32(mINN[4]) +
					3	* Convert::ToInt32(mINN[5]) +
					5	* Convert::ToInt32(mINN[6]) +
					9	* Convert::ToInt32(mINN[7]) +
					4	* Convert::ToInt32(mINN[8]) +
					6	* Convert::ToInt32(mINN[9]) +
					8	* Convert::ToInt32(mINN[10]) )
					% 11)
					% 10);
				//Результирующая строка ИНН
				unsigned char *i_szINNres = new unsigned char;
				for(*i_szINNres=0;*i_szINNres<*INNlen;*i_szINNres+=1)
				{
					szINNres += mINN[*i_szINNres]->ToString();
				}
				delete i_szINNres;
				//	Генерируем ОГРНИП
				OGRNkontr = floor(fRand(10000000000000, 99999999999999));
				String^ szOGRN1 = Convert::ToString(OGRNkontr);
				OGRNkontr = fmod(OGRNkontr, 11);

				if (OGRNkontr > 9) 
					OGRNkontr = Convert::ToInt32(Convert::ToDouble(OGRNkontr) - floor(Convert::ToDouble(OGRNkontr)/10)*10);

				String^ szOGRN2 = Convert::ToString(OGRNkontr);
				//Результирующая строка ОГРНИП
				szOGRNres = szOGRN1 + szOGRN2;
			}

			textBox2->Text = szINNres;
			textBox3->Text = szKPPres;
			textBox4->Text = szOGRNres;
			textBox5->Text = szSNILSres;

			delete INNlen;
		}

private: System::Void radioButton_UL_or_IP(System::Object^  sender, System::EventArgs^  e) {
			if( radioButton1->Checked )
			{
				textBox1->MaxLength = 10;
				//Если длина поля больше 10, то обрезаем все знаки, находящиеся после 10 символа
				if( textBox1->TextLength > 10 )
					textBox1->Text = textBox1->Text->Remove(10);
			}
			if( radioButton2->Checked )
				textBox1->MaxLength = 12;
		}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ iDt;
			 if ( textBox2->TextLength > 0 )
			 {
				 iDt =	"ИНН:      " + textBox2->Text + "\r\n";
				 if (textBox3->TextLength > 0) iDt += "КПП:      " + textBox3->Text + "\r\n";
				 if (textBox4->TextLength > 0) iDt += "ОГРН(ИП): " + textBox4->Text + "\r\n";
				 if (textBox5->TextLength > 0) iDt += "СНИЛС:    " + textBox5->Text;
				 Clipboard::SetDataObject( iDt );
				 MessageBox::Show("Данные скопированы в буфер обмена", "Сообщение генератора");
			 }
		 }

};
}