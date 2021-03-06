#pragma once
#using <System.data.dll>
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

ref class CL_CAD
{
private:
	SqlConnection^ connect;
	SqlDataAdapter^ adapter;
	DataSet^ DS;
	//void setSQL(String^);
public:
	CL_CAD();
	String^ select(int ligne, int colonne);
	String^ selectWhere(String^ table, String^ entete, int ID, int colonne);
	void ajouter(String^ table, String^ entete, String^ Value);
	void action(String^ requeteSQL);
	void supprimer(String^ table, String^ entete0, int ID);
	void modifier(String^ table, String^ entete0, String^ entetemod, String^ mot, int ID);
	int NB(String^ table);
	int position(int ID);	//c'est la position dans la table (presque l'ID)
	int verification(int ID, String^ table);
	int MaxID();
	DataSet^ getTableWhere(String^ table, String^ entete1, String^ entete0, int reference);

};