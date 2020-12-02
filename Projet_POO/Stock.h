#pragma once
#using <System.data.dll>
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
#include "CL_CAD.h"
ref class Stock
{
	private:
		CL_CAD^ BDD = gcnew CL_CAD;
		int ligne;
		String^ table = "Article";
		String^ entete0 = "reference";
		String^ entete1 = "nom";
		String^ entete2 = "quantite";
		String^ entete3 = "prix_HT";
		String^ entete4 = "seuil_de_reaprovisionement";
		String^ entete5 = "taux_TVA";

public: 
	Stock();
	Stock(int ligne);

	void ajouter(String^ nom, String^ quantite, String^ prix_HT, String^ seuil_de_reaprovisionement, String^ taux_TVA);

	String^ getreference();
	String^ getnom();
	String^ getquantite();
	String^ getprix_HT();
	String^ getseuil_de_reaprovisionement();
	String^ gettaux_TVA();
	
	String^ getnom(int reference);
	String^ getquantite(int reference);
	String^ getprix_HT(int reference);
	String^ getseuil_de_reaprovisionement(int reference);
	String^ gettaux_TVA(int reference);
	String^ getNom(int reference);
	String^ getPrenom(int reference);

	void setnom(String^ nom, int reference);
	void setquantite(String^ quantite, int reference);
	void setprix_HT(String^ prix_HT, int reference);
	void setseuil_de_reaprovisionement(String^ seuil_de_reaprovisionement, int reference);
	void settaux_TVA(String^ taux_TVA, int reference);

	void supprimer(int reference);
};

