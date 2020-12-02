#include "Stock.h"
Stock::Stock()
{
	ligne = 0; 
}
Stock::Stock(int ligne)
{
	this->ligne = ligne;
}
void Stock::ajouter(String^ nom, String^ quantite, String^ prix_HT, String^ seuil_de_reaprovisionement, String^ taux_TVA)
{
	BDD->ajouter(table, entete1 + ", " + entete2 + ", " + entete3 + "" + entete4 + ", " + entete5, "'" + nom + "', '" + quantite + "', '" + prix_HT + "', '" + seuil_de_reaprovisionement + "', '" + taux_TVA + "'");
}
////////////////////////////////////////////////////////////////////////////
String^ Stock::getreference()
{
	return BDD->select(ligne, 0);
}
String^ Stock::getnom()
{
	return BDD->select(ligne, 1);
}
String^ Stock::getquantite()
{
	return BDD->select(ligne, 2);
}
String^ Stock::getprix_HT()
{
	return BDD->select(ligne, 5);
}
String^ Stock::getseuil_de_reaprovisionement()
{
	return BDD->select(ligne, 11);
}
String^ Stock::gettaux_TVA()
{
	return BDD->select(ligne, 6);
}
////////////////////////////////////////////////////////////////////////////
String^ Stock::getnom(int reference)
{
	return BDD->selectWhere(table,entete0,reference,1);
}
String^ Stock::getquantite(int reference)
{
	return BDD->selectWhere(table, entete0, reference, 2);
}
String^ Stock::getprix_HT(int reference)
{
	return BDD->selectWhere(table, entete0, reference, 5);
}
String^ Stock::getseuil_de_reaprovisionement(int reference)
{
	return BDD->selectWhere(table, entete0, reference, 11);
}
String^ Stock::gettaux_TVA(int reference)
{
	return BDD->selectWhere(table,entete0,reference,6);
}
////////////////////////////////////////////////////////////////////////////

void Stock::setnom(String^ nom, int reference)
{
	BDD->modifier(table, entete0, entete1, nom, reference);
}
void Stock::setquantite(String^ quantite, int reference)
{
	BDD->modifier(table, entete0, entete2, quantite, reference);
}
void Stock::setprix_HT(String^ prix_HT, int reference)
{
	BDD->modifier(table, entete0, entete3, prix_HT, reference);
}
void Stock::setseuil_de_reaprovisionement(String^ seuil_de_reaprovisionement, int reference)
{
	BDD->modifier(table, entete0, entete4, seuil_de_reaprovisionement, reference);
}
void Stock::settaux_TVA(String^ taux_TVA, int reference)
{
	BDD->modifier(table, entete0, entete5, taux_TVA, reference);
}
////////////////////////////////////////////////////////////////////////////
void Stock::supprimer(int reference)
{
	BDD->supprimer(table, entete0, reference);
	BDD->supprimer("Article", "reference", reference);
}
