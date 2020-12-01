#pragma once

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ btn_stocks;
	private: System::Windows::Forms::PictureBox^ btn_statistiques;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^ btn_clients;
	private: System::Windows::Forms::PictureBox^ btn_commandes;


	private: System::Windows::Forms::PictureBox^ btn_personnel;
	private: System::Windows::Forms::PictureBox^ btn_stocks;
	private: System::Windows::Forms::PictureBox^ btn_statistiques;
	private: System::Windows::Forms::PictureBox^ btn_clients;
	private: System::Windows::Forms::PictureBox^ btn_commandes;
	private: System::Windows::Forms::PictureBox^ btn_personnel;
	private: System::Windows::Forms::PictureBox^ btn_stocks;
	private: System::Windows::Forms::PictureBox^ btn_statistiques;
	private: System::Windows::Forms::PictureBox^ btn_commandes;
	private: System::Windows::Forms::PictureBox^ btn_personnel;
	private: System::Windows::Forms::PictureBox^ btn_stocks;
	private: System::Windows::Forms::PictureBox^ btn_statistiques;
	private: System::Windows::Forms::PictureBox^ btn_personnel;
	private: System::Windows::Forms::PictureBox^ btn_statistiques;
	private: System::Windows::Forms::PictureBox^ btn_personnel;
	private: System::Windows::Forms::PictureBox^ btn_personnel;
	private: System::Windows::Forms::PictureBox^ btn_personnel;
	private: System::Windows::Forms::PictureBox^ btn_personnel;
	private: System::Windows::Forms::PictureBox^ btn_personnel;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ btn_personnel;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_stocks = (gcnew System::Windows::Forms::PictureBox());
			this->btn_statistiques = (gcnew System::Windows::Forms::PictureBox());
			this->btn_clients = (gcnew System::Windows::Forms::PictureBox());
			this->btn_commandes = (gcnew System::Windows::Forms::PictureBox());
			this->btn_personnel = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_stocks))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_statistiques))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_clients))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_commandes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_personnel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_stocks
			// 
			this->btn_stocks->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_stocks.Image")));
			this->btn_stocks->Location = System::Drawing::Point(475, 276);
			this->btn_stocks->Name = L"btn_stocks";
			this->btn_stocks->Size = System::Drawing::Size(115, 60);
			this->btn_stocks->TabIndex = 0;
			this->btn_stocks->TabStop = false;
			this->btn_stocks->Click += gcnew System::EventHandler(this, &MyForm::btn_stocks);
			// 
			// btn_statistiques
			// 
			this->btn_statistiques->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_statistiques.Image")));
			this->btn_statistiques->Location = System::Drawing::Point(621, 275);
			this->btn_statistiques->Name = L"btn_statistiques";
			this->btn_statistiques->Size = System::Drawing::Size(114, 61);
			this->btn_statistiques->TabIndex = 1;
			this->btn_statistiques->TabStop = false;
			this->btn_statistiques->Click += gcnew System::EventHandler(this, &MyForm::btn_statistiques);
			// 
			// btn_clients
			// 
			this->btn_clients->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_clients.Image")));
			this->btn_clients->Location = System::Drawing::Point(183, 278);
			this->btn_clients->Name = L"btn_clients";
			this->btn_clients->Size = System::Drawing::Size(114, 58);
			this->btn_clients->TabIndex = 2;
			this->btn_clients->TabStop = false;
			this->btn_clients->Click += gcnew System::EventHandler(this, &MyForm::btn_clients);
			// 
			// btn_commandes
			// 
			this->btn_commandes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_commandes.Image")));
			this->btn_commandes->Location = System::Drawing::Point(330, 275);
			this->btn_commandes->Name = L"btn_commandes";
			this->btn_commandes->Size = System::Drawing::Size(115, 61);
			this->btn_commandes->TabIndex = 3;
			this->btn_commandes->TabStop = false;
			this->btn_commandes->Click += gcnew System::EventHandler(this, &MyForm::btn_commandes);
			// 
			// btn_personnel
			// 
			this->btn_personnel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_personnel.Image")));
			this->btn_personnel->Location = System::Drawing::Point(41, 278);
			this->btn_personnel->Name = L"btn_personnel";
			this->btn_personnel->Size = System::Drawing::Size(114, 58);
			this->btn_personnel->TabIndex = 4;
			this->btn_personnel->TabStop = false;
			this->btn_personnel->Click += gcnew System::EventHandler(this, &MyForm::btn_personnel);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(105, 42);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(582, 228);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(785, 506);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->btn_personnel);
			this->Controls->Add(this->btn_commandes);
			this->Controls->Add(this->btn_clients);
			this->Controls->Add(this->btn_statistiques);
			this->Controls->Add(this->btn_stocks);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_stocks))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_statistiques))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_clients))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_commandes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btn_personnel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void btn_personnel(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_personnel(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_personnel(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_personnel(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_personnel(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_personnel(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_statistiques(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_personnel(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_statistiques(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_stocks(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_personnel(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_statistiques(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_stocks(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_commandes(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_personnel(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_statistiques(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_stocks(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_commandes(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_clients(System::Object^ sender, System::EventArgs^ e) {
}
};
}
