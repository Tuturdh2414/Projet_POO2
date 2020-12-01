#pragma once
using namespace System;
namespace NS_Composants
{
	ref class Service_Stock
	{
	private:
		int id_produit;
		String^ refference;
		String^ nom;
		double^ prix_ht;
		int quantite;
		int seuil_reapro;
		double^ taux;
	public:
		Service_Stock(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		int setid_produit(int);
		void setrefference(String^);
		void setnom(String^);
		void setprix_ht(double);
		void setquantite(int);
		void setseuil_reapro(int);
		void settaux(double);


		int getid_produit(int);
		String^ getrefference(void);
		String^ getnom(void);
		String^ getprix_ht(void);
		String^ getquantite(void);
		String^ getseuil_reapro(void);
		String^ gettaux(void);


	};
}

