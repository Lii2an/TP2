#pragma once
#include "Client.h"
#include <vector>
class ListeClient
{
private:
	std::vector<Client> ListeClients;

public:
	ListeClient();
	void AjouterClient(Client client);
	void AfficherListeClient();
	void AfficherUnClient(string prenom, string nom, Client& client);
};


