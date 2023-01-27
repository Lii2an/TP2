#include "Client.h"

Client::Client()
{
}



Client::Client(string IdClient, string NomClient, string PrenomClient)
{
	Id = IdClient;
	Nom = NomClient;
	Prenom = PrenomClient;
}

string Client::getNom()
{
	return Nom;
}

string Client::getPrenom()
{
	return Prenom;
}

std::ostream& operator<<(ostream& os, const Client& ClientCrea)
{

	os << "Identifiant Client : " << ClientCrea.Id << "\n" << "Nom :" << ClientCrea.Nom << "\n" <<"Prenom : "<< ClientCrea.Prenom << "\n";

	return os;
}