#include "Changement.h"
Changement::Changement()
{
	ligne = 0;
}
Changement::Changement(int ligne)
{
	this->ligne = ligne;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Changement::ajouter(int ID, DateTime^ date, String^ reference)
{
	BDD->ajouter(table, entete0+", "+entete1 + ", " + entete2,"'"+ID +"' "+date +"' "+reference +"'");
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
String^ Changement::getID()
{
	return BDD->select(ligne, 0);
}
String^ Changement::getdate()
{
	return BDD->select(ligne, 1);
}
String^ Changement::getreference()
{
	return BDD->select(ligne, 2);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
String^ Changement::getdate(int ID)
{
	return BDD->selectWhere(table, entete0, ID, 1);
}
String^ Changement::getreference(int ID)
{
	return BDD->selectWhere(table, entete0, ID, 2);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Changement::setdate(String^ date, int ID)
{
	BDD->modifier(table, entete0, entete1, date, ID);
}
void Changement::setreference(String^ reference, int ID)
{
	BDD->modifier(table, entete0, entete2, reference, ID);
}
void Changement::supprimer(int ID)
{
	BDD->supprimer(table, entete0, ID);
	BDD->supprimer("Changement", "ID", ID);
}