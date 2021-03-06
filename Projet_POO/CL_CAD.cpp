#include "CL_CAD.h"
#include <iostream>

CL_CAD::CL_CAD()
{
	String^ requeteSQL = "RIEN";
	String^ connexion = "Data Source = (LocalDB)\\MSSQLLocalDB;" + 
		"Initial Catalog =BITE;" +
		"Integrated Security =True;" +
		"Connect Timeout =30;" +
		"Encrypt =False;" +
		"TrustServerCertificate =False;" +
		"ApplicationIntent =ReadWrite;" +
		"MultiSubnetFailover =False;" +
		"User ID=LAPTOP-4O077N3T\\arthu";
	connect = gcnew SqlConnection(connexion);
}

String^ CL_CAD::select(int ligne, int colonne)
{
	String^ retour;
	String^ requeteSQL = "SELECT * FROM Article ";
	SqlCommand^ command = gcnew SqlCommand(requeteSQL, connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, "reference");
	retour = Convert::ToString(DS->Tables["reference"]->Rows[ligne]->ItemArray[colonne]);
	return retour;
}

String^ CL_CAD::selectWhere(String^ table, String^ entete, int reference, int colonne)
{
	String^ retour;
	String^ requeteSQL = "select * FROM " + table + " WHERE " + entete + " = " + reference;
	SqlCommand^ command = gcnew SqlCommand(requeteSQL, connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, entete);
	retour = Convert::ToString(DS->Tables[entete]->Rows[0]->ItemArray[colonne]);
	return retour;
}

void CL_CAD::ajouter(String^ table, String^ entete, String^ Value)
{
	String^ requeteSQL = "INSERT INTO " + table + " (" + entete + ") VALUES (" + Value + ")";
	action(requeteSQL);
}

void CL_CAD::action(String^ requeteSQL)
{
	SqlCommand^ command = gcnew SqlCommand(requeteSQL, connect);
	connect->Open();
	command->ExecuteNonQuery();
	connect->Close();
}

void CL_CAD::supprimer(String^ table, String^ entete0, int ID)
{
	String^ requeteSQL = "DELETE FROM " + table + " WHERE " + entete0 + " = " + ID;
	action(requeteSQL);
}

void CL_CAD::modifier(String^ table, String^ entete0, String^ entetemod, String^ mot, int reference) {
	String^ requeteSQL = "UPDATE " + table + " SET " + entetemod + " = '" + mot + "' WHERE " + entete0 + " = " + reference;
	action(requeteSQL);
}

int CL_CAD::NB(String^ table) {
	int retour;
	SqlCommand^ command = gcnew SqlCommand("SELECT COUNT (*) FROM " + table, connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, "Count");
	retour = Convert::ToInt32(DS->Tables["Count"]->Rows[0]->ItemArray[0]);
	return retour;
}

int CL_CAD::position(int reference)
{
	int retour;
	SqlCommand^ command = gcnew SqlCommand(("SELECT COUNT (*) FROM Article WHERE reference <= " + reference), connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, "position");
	retour = Convert::ToInt32(DS->Tables["position"]->Rows[0]->ItemArray[0]);
	return retour;
}

int CL_CAD::verification(int reference, String^ table)
{
	int retour;
	SqlCommand^ command = gcnew SqlCommand(("SELECT COUNT (*) FROM " + table + " WHERE reference = " + reference), connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, "position");
	retour = Convert::ToInt32(DS->Tables["position"]->Rows[0]->ItemArray[0]);
	return retour;
}

int CL_CAD::MaxID()
{
	int retour;
	SqlCommand^ command = gcnew SqlCommand(("SELECT MAX (reference) FROM Article "), connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, "IDMAX");
	retour = Convert::ToInt32(DS->Tables["IDMAX"]->Rows[0]->ItemArray[0]);
	return retour;
}

DataSet^ CL_CAD::getTableWhere(String^ table, String^ entete1, String^ entete0, int reference) {

	SqlCommand^ command = gcnew SqlCommand(("SELECT " + entete1 + " FROM " + table + " WHERE " + entete0 + " = " + reference), connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, table + "_" + entete0);
	return DS;
}