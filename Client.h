#pragma once

#include <string>
#include <iostream>

using namespace std;

class Client
{
private : 
	string Id;
	string Nom;
	string Prenom;
public :
	Client();
	Client(string Id, string Nom, string Prenom);
	friend ostream& operator<<(ostream& os, const Client& clientCrea);
	string getNom();
	string getPrenom();
};

