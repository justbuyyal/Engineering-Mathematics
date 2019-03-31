#pragma once
#include"DotNetUtilities.h"
#include"InfixToPostfix.h"

namespace WindowsFormsApplication_cpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// WindowsForm 的摘要
	/// </summary>
	public ref class WindowsForm : public System::Windows::Forms::Form
	{
	public:
		WindowsForm(void)
		{
			InitializeComponent();
			dataManager = new DataManager();
			lastInputLength = -1;
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~WindowsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^  menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  FileToolStripMenuItem;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::ToolStripMenuItem^  LoadVectorToolStripMenuItem;



	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;
	private: System::Windows::Forms::Label^  OutputLabel;
	private: System::Windows::Forms::TextBox^  Output;

	private: System::Windows::Forms::Label^  InputLabel;
	private: System::Windows::Forms::TextBox^  Input;
	private: System::Windows::Forms::Label^  VectorLabel;
	private: System::Windows::Forms::ListBox^  VectorList;



	protected:


	protected:

	private:
		/// <summary>
			DataManager* dataManager;
			String^ userInput;
			int lastInputLength;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->FileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LoadVectorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->InputLabel = (gcnew System::Windows::Forms::Label());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->VectorLabel = (gcnew System::Windows::Forms::Label());
			this->VectorList = (gcnew System::Windows::Forms::ListBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->OutputLabel = (gcnew System::Windows::Forms::Label());
			this->Output = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(36, 36);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->FileToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(14, 4, 0, 4);
			this->menuStrip2->Size = System::Drawing::Size(1057, 47);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// FileToolStripMenuItem
			// 
			this->FileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->LoadVectorToolStripMenuItem });
			this->FileToolStripMenuItem->Name = L"FileToolStripMenuItem";
			this->FileToolStripMenuItem->Size = System::Drawing::Size(70, 39);
			this->FileToolStripMenuItem->Text = L"File";
			// 
			// LoadVectorToolStripMenuItem
			// 
			this->LoadVectorToolStripMenuItem->Name = L"LoadVectorToolStripMenuItem";
			this->LoadVectorToolStripMenuItem->Size = System::Drawing::Size(395, 42);
			this->LoadVectorToolStripMenuItem->Text = L"Load Vector or Matrix";
			this->LoadVectorToolStripMenuItem->Click += gcnew System::EventHandler(this, &WindowsForm::LoadVectorToolStripMenuItem_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 47);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(7);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1057, 809);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->InputLabel);
			this->flowLayoutPanel1->Controls->Add(this->Input);
			this->flowLayoutPanel1->Controls->Add(this->VectorLabel);
			this->flowLayoutPanel1->Controls->Add(this->VectorList);
			this->flowLayoutPanel1->Location = System::Drawing::Point(535, 7);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(7);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(458, 763);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// InputLabel
			// 
			this->InputLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->InputLabel->AutoSize = true;
			this->InputLabel->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->InputLabel->Location = System::Drawing::Point(7, 0);
			this->InputLabel->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->InputLabel->Name = L"InputLabel";
			this->InputLabel->Size = System::Drawing::Size(84, 35);
			this->InputLabel->TabIndex = 0;
			this->InputLabel->Text = L"Input";
			// 
			// Input
			// 
			this->Input->Location = System::Drawing::Point(7, 42);
			this->Input->Margin = System::Windows::Forms::Padding(7);
			this->Input->Multiline = true;
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(438, 350);
			this->Input->TabIndex = 1;
			this->Input->TextChanged += gcnew System::EventHandler(this, &WindowsForm::Input_TextChanged);
			// 
			// VectorLabel
			// 
			this->VectorLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->VectorLabel->AutoSize = true;
			this->VectorLabel->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->VectorLabel->Location = System::Drawing::Point(7, 399);
			this->VectorLabel->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->VectorLabel->Name = L"VectorLabel";
			this->VectorLabel->Size = System::Drawing::Size(227, 35);
			this->VectorLabel->TabIndex = 2;
			this->VectorLabel->Text = L"Vector or Matrix";
			// 
			// VectorList
			// 
			this->VectorList->FormattingEnabled = true;
			this->VectorList->ItemHeight = 27;
			this->VectorList->Location = System::Drawing::Point(7, 441);
			this->VectorList->Margin = System::Windows::Forms::Padding(7);
			this->VectorList->Name = L"VectorList";
			this->VectorList->Size = System::Drawing::Size(438, 301);
			this->VectorList->TabIndex = 3;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->OutputLabel);
			this->flowLayoutPanel2->Controls->Add(this->Output);
			this->flowLayoutPanel2->Location = System::Drawing::Point(7, 7);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(7);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(434, 747);
			this->flowLayoutPanel2->TabIndex = 1;
			// 
			// OutputLabel
			// 
			this->OutputLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->OutputLabel->AutoSize = true;
			this->OutputLabel->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->OutputLabel->Location = System::Drawing::Point(7, 0);
			this->OutputLabel->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->OutputLabel->Name = L"OutputLabel";
			this->OutputLabel->Size = System::Drawing::Size(108, 35);
			this->OutputLabel->TabIndex = 0;
			this->OutputLabel->Text = L"Output";
			// 
			// Output
			// 
			this->Output->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Output->Location = System::Drawing::Point(7, 42);
			this->Output->Margin = System::Windows::Forms::Padding(7);
			this->Output->Multiline = true;
			this->Output->Name = L"Output";
			this->Output->ReadOnly = true;
			this->Output->Size = System::Drawing::Size(422, 699);
			this->Output->TabIndex = 1;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &WindowsForm::openFileDialog1_FileOk);
			// 
			// WindowsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 856);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip2);
			this->Margin = System::Windows::Forms::Padding(7);
			this->Name = L"WindowsForm";
			this->Text = L"VectorExample";
			this->Load += gcnew System::EventHandler(this, &WindowsForm::WindowsForm_Load);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void WindowsForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void LoadVectorToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	//開啟Dialog
	openFileDialog1->ShowDialog();
}
private: System::Void Input_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	//當Input textbox中的輸入改變時，便會進入此函式
	//取得向量資料
	std::vector<Vector> vectors = dataManager->GetVectors();
	//取得矩陣資料
	std::vector<Matrix> matrixs = dataManager->GetMatrixs();
	//判斷輸入自元為'\n'，並防止取到字串-1位置
	if (Input->Text->Length-1 >= 0 &&Input->Text[Input->Text->Length - 1] == '\n')
	{
		//將使用者輸入字串(在userInput中)，依空白作切割
		array<String^> ^userCommand = userInput->Split(' ');
		//字串比較，若指令為"print"的情況
		if (userCommand[0] == "print")
		{
			//定意輸出暫存
			String^ outputTemp = "";
			std::string temp;
			MarshalString(userCommand[1], temp);
			int Printflag = 0; //找不到的向量或矩陣(0 為沒有此向量或矩陣)
			if (temp[0] == '$' && temp[1] == 'v')
			{
				//透過for迴圈，從向量資料中找出對應變數
				for (unsigned int i = 0; i < vectors.size(); i++)
				{
					//若變數名稱與指令變數名稱符合
					if (userCommand[1] == gcnew String(vectors[i].Name.c_str()))
					{
						Printflag = 1;
						//將輸出格式存入暫存
						outputTemp += "[";
						//將輸出資料存入暫存
						for (unsigned int j = 0; j < vectors[i].Data.size(); j++)
						{
							outputTemp += vectors[i].Data[j].ToString();
							if (j != vectors[i].Data.size() - 1)
								outputTemp += ",";
						}
						//將輸出格式存入暫存，並且換行
						outputTemp += "]" + Environment::NewLine;
						//輸出暫存資訊
						Output->Text += gcnew String(vectors[i].Name.c_str()) + " = " + outputTemp;
						break;
					}
				}
				// 錯誤偵測
				if (!Printflag)
				{
					Output->Text += "There is no such vector！" + Environment::NewLine;
				}
			}
			else if(temp[0] == '$' && temp[1] == 'm')
			{
				// Print Matrix
				for (unsigned int i = 0; i < matrixs.size(); i++)
				{
					if (userCommand[1] == gcnew String(matrixs[i].Name.c_str()))
					{
						Printflag = 1;
						outputTemp += "[" + Environment::NewLine;
						for (unsigned int j = 0; j < matrixs[i].Data.size(); j++)
						{
							for (unsigned int k = 0; k < matrixs[i].Data[j].size(); k++)
							{
								outputTemp += matrixs[i].Data[j][k].ToString();
								if (k != matrixs[i].Data[j].size() - 1)
									outputTemp += ",";
							}
							outputTemp += Environment::NewLine;
						}
						outputTemp += "]" + Environment::NewLine;
						Output->Text += gcnew String(matrixs[i].Name.c_str()) + " = " + outputTemp;
						break;
					}
				}
				// 錯誤偵測
				if (!Printflag)
				{
					Output->Text += "There is no such Matrix！" + Environment::NewLine;
				}
			}
			// 錯誤偵測
			else
			{
				Output->Text += "-Command not found-" + Environment::NewLine;
			}
		}
		//進行計算
		else if (userCommand[0] == "cal")
		{
			// 格式：A dot B => $v1 * $v2 (dot跟scalar都可以用*)
			std::vector<std::string>userinput;
			for (unsigned int i = 1; i < userCommand->Length; i++)
			{
				std::string temp;
				MarshalString(userCommand[i], temp);
				userinput.push_back(temp);
			}
			InfToPos(userinput);
			/*for (unsigned int i = 0; i < userinput.size(); i++)
			{
				Output->Text += gcnew String(userinput[i].c_str());
			}
			Output->Text += Environment::NewLine;*/
		}
		else if (userCommand[0] == "rank")
		{
			for (unsigned int i = 0; i < matrixs.size(); i++)
			{
				if (userCommand[1] == gcnew String(matrixs[i].Name.c_str()))
				{
					Output->Text += "Rank of " + userCommand[1] + " = " + matrixs[i].Rank() + Environment::NewLine;
					break;
				}
			}
		}
		else if (userCommand[0] == "det")
		{
			for (unsigned int i = 0; i < matrixs.size(); i++)
			{
				if (userCommand[1] == gcnew String(matrixs[i].Name.c_str()))
				{
					Output->Text += "Determinant of " + userCommand[1] + " = " + matrixs[i].Determinant() + Environment::NewLine;
					break;
				}
			}
		}
		//反之則判斷找不到指令
		else
		{
			Output->Text += "-Command not found-" + Environment::NewLine;
		}
		userInput = "";
		
	}
	else
	{
		//將使用者輸入字串(在Text box中)，依'\n'作切割
		array<String^> ^userCommand = Input->Text->Split('\n');
		//並將最後一行，作為目前使用者輸入指令
		userInput = userCommand[userCommand->Length-1];
	}

}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
{
	//在Dialog按下OK便會進入此函式
	//字串轉制string^ to string
	std::string tempFileName;
	MarshalString(openFileDialog1->FileName, tempFileName);
	//將檔案路徑名稱傳入dataManager
	dataManager->SetFileName(tempFileName);
	//從讀取讀取向量資料
	if (dataManager->ReadFileName())
	{
		if (!dataManager->VM)
		{
			//將VectorList中項目先做清除
			VectorList->Items->Clear();
			//取得所有向量資料
			std::vector<Vector> vectors = dataManager->GetVectors();

			for (unsigned int i = 0; i < vectors.size(); i++)
			{
				//將檔案名稱存入暫存
				std::string tempString = vectors[i].Name;
				//將輸出格式存入暫存
				tempString += " [";
				//將輸出資料存入暫存
				for (unsigned int j = 0; j < vectors[i].Data.size(); j++)
				{
					std::string scalarString = std::to_string(vectors[i].Data[j]);
					tempString += scalarString.substr(0, scalarString.size() - 5);
					if (j != vectors[i].Data.size() - 1)
						tempString += ",";
				}
				//將輸出格式存入暫存
				tempString += "]";
				//將項目加入VectorList中
				VectorList->Items->Add(gcnew String(tempString.c_str()));
			}
			Output->Text += "-Vector datas have been loaded-" + Environment::NewLine;
		}
		else
		{
			//將VectorList中項目先做清除
			VectorList->Items->Clear();
			//取得所有矩陣資料
			std::vector<Matrix> matrixs = dataManager->GetMatrixs();

			for (unsigned int i = 0; i < matrixs.size(); i++)
			{
				//將檔案名稱存入暫存
				std::string tempString = matrixs[i].Name;
				//將輸出格式存入暫存
				tempString += "[";
				VectorList->Items->Add(gcnew String(tempString.c_str()) + Environment::NewLine);
				tempString.clear();
				//將輸出資料存入暫存
				//Rows
				for (unsigned int j = 0; j < matrixs[i].Data.size(); j++)
				{
					//Columns
					for (unsigned int k = 0; k < matrixs[i].Data[j].size(); k++)
					{
						std::string scalarString = std::to_string(matrixs[i].Data[j][k]);
						tempString += scalarString.substr(0, scalarString.size() - 5);
						if (k != matrixs[i].Data[j].size() - 1)
							tempString += ", ";
					}
					VectorList->Items->Add(gcnew String(tempString.c_str()) + Environment::NewLine);
					tempString.clear();
				}
				//將輸出格式存入暫存
				tempString += "]";
				//將項目加入VectorList中
				VectorList->Items->Add(gcnew String(tempString.c_str()));
			}
			Output->Text += "-Matrix datas have been loaded-" + Environment::NewLine;
		}
	}
	else
	{
		Output->Text += "File Not Found！！！" + Environment::NewLine;
	}
}
};
}