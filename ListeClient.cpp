#include "ListeClient.h"

ListeClient::ListeClient()
{
}

void ListeClient::AjouterClient(Client client)
{
	ListeClients.push_back(client);
}

void ListeClient::AfficherListeClient()
{
	{
		for (int i = 0; i < ListeClients.size(); i++)
		{
			cout << "******************\n" << ListeClients[i] << endl;
		}
		cout << "\n" << endl;

	}
}
void ListeClient::AfficherUnClient(string prenom, string nom, Client& client)
{
	cout << "saisissez le nom" << endl;
	cin >> nom;
	cout << "saisissez le prenom" << endl;
	cin >> prenom;
	string nomRecherche = client.getNom();
	string prenomRecherche = client.getNom();
	for (int i = 0; i < ListeClients.size(); i++) {
		if ((nomRecherche == nom) && (prenomRecherche == prenom)) {
			cout << client << endl;
		}
	}
}

