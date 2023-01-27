// TP2C++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Date.h"
#include "Client.h"
#include "Chambre.h"
#include "Hotel.h"
#include "Reservation.h"
#include "StockReservation.h"
#include "ListeClient.h"

Client Lilian("1","Lilian","SOYEUX");
Client Thomas("2", "Thomas", "RIVOIRE");
Client Richard("3", "Richard", "SOYEUX");
Client Denis("4", "Denis", "RIVOIRE");
Client Jules("5", "Jules", "SOYEUX");
Client Roland("6", "Roland", "RIVOIRE");
Chambre Chambre1(1, "Simple", 100, false);
Chambre Chambre2(2, "Simple", 100, false);
Chambre Chambre3(3, "Simple", 100, false);
Chambre Chambre4(4, "Double", 180, false);
Chambre Chambre5(5, "Double", 180, false);
Chambre Chambre6(6, "Double", 180, false);
Chambre Chambre7(7, "Double", 180, false);
Chambre Chambre8(8, "Double", 180, false);
Chambre Chambre9(9, "Suite", 250, false);
Chambre Chambre10(10, "Suite", 250, false);
ListeClient maListeClient;
void FaireReservation();
void CreerClient();
int NumResa = 1;
Hotel monHotel("1", "Terminus", "Chaumont");
StockReservation LesReservations;
void display(vector<bool>& v);
int main()
{
    
    monHotel.AjouterChambre(Chambre1);
    monHotel.AjouterChambre(Chambre2);
    monHotel.AjouterChambre(Chambre3);
    monHotel.AjouterChambre(Chambre4);
    monHotel.AjouterChambre(Chambre5);
    monHotel.AjouterChambre(Chambre6);
    monHotel.AjouterChambre(Chambre7);
    monHotel.AjouterChambre(Chambre8);
    monHotel.AjouterChambre(Chambre9);
    monHotel.AjouterChambre(Chambre10);
    monHotel.AfficherHotel();
    maListeClient.AjouterClient(Lilian);
    maListeClient.AjouterClient(Thomas);
    maListeClient.AjouterClient(Richard);
    maListeClient.AjouterClient(Denis);
    maListeClient.AjouterClient(Jules);
    maListeClient.AjouterClient(Roland);
    maListeClient.AfficherListeClient();
    Reservation laReservation(01, Lilian, monHotel, Chambre7, Date(10, 06, 2000), Date(10, 16, 2000));
    
    bool exit = false;
    while(exit == false){
    int choix =0;
    cout << "Bienvenue à l'hotel \n veuillez choisir votre action" << endl;
    cout << "1-Creer un nouveau client \t 2-Creer une nouvelle chambre \t 3-Creer une reservation \t 4-Afficher la liste des clients \t 5-Afficher la liste des chambres \t 6-Afficher la liste des Reservations \t 7-Quitter " << endl;
    cin>> choix;
    
    switch (choix) {
    case 1:
        CreerClient();
        break;

    case 2:
        monHotel.AjouterChambre();
        break;
    case 3:
        FaireReservation();
        break;
    case 4 :
        maListeClient.AfficherListeClient();
        break;
    case 5:
        monHotel.AfficherChambre();
        break;
    case 6 :
        LesReservations.afficherReservation();
        break;
    case 7 : 
        exit = true;
        break;
    }
}

    /*Reservation laReservation(02, Thomas, monHotel, Chambre7, Date(10, 20, 2000), Date(10, 28, 2000));
    cout << maReservation << endl;
    maReservation.CalculPrix();
    cout << "affichage des réservations" << endl;
    StockReservation LesReservations;
    LesReservations.AjouterReservation(maReservation);
    LesReservations.AjouterReservation(laReservation);
    LesReservations.afficherReservation();
    cout << "jjjjjjjjjjjjjjjjjjjjjjjjj" << endl;
    maReservation.ModifierDate();
    LesReservations.afficherReservation();*/
}
void FaireReservation() {
    NumResa++;
    string IdClient;
    string nom;
    string prenom;
    cout << "Saisir l'identifiant du client :" << endl;
    cin >> IdClient;
    cout << "Saisir le Nom du client :" << endl;
    cin >> nom;
    cout << "Saisir le Prenom du client :" << endl;
    cin >> prenom;
    Client client(IdClient, nom, prenom);
    int moisArrive, jourArrive, anneeArrive = 0;
    int moisDepart, jourDepart, anneeDepart = 0;
    cout << "Saisir votre Jour d'arrivee" << endl;
    cin >> jourArrive;
    cout << "Saisir votre Mois d'arrivee" << endl;
    cin >> moisArrive;
    cout << "Saisir votre Annee d'arrivee" << endl;
    cin >> anneeArrive;
    Date DateDebut(moisArrive,jourArrive,anneeArrive);
    cout << "Saisir votre Jour de depart" << endl;
    cin >> jourDepart;
    cout << "Saisir votre Mois de depart" << endl;
    cin >> moisDepart;
    cout << "Saisir votre Annee de depart" << endl;
    cin >> anneeDepart;
    Date DateDepart(moisDepart, jourDepart, anneeDepart);
    cout << "choisissez une chambre parmis cette liste" << endl;
    monHotel.AfficherChambre();
    Reservation maReservation(NumResa, client, monHotel, Chambre8, DateDebut, DateDepart);
    LesReservations.AjouterReservation(maReservation);
    maReservation.CalculPrix();
}

void CreerClient() {
    string IdClient;
    string nom;
    string prenom;
    cout << "Saisir l'identifiant du client :" << endl;
    cin >> IdClient;
    cout << "Saisir le Nom du client :" << endl;
    cin >> nom;
    cout << "Saisir le Prenom du client :" << endl;
    cin >> prenom; 
    Client client(IdClient, nom, prenom);
    maListeClient.AjouterClient(client);
    maListeClient.AfficherListeClient();
}



void display(vector<bool>& v)
{
    for (int i = 1; i <v.size(); i++)
    {
        if (v[i] == 1) {
            cout << i << "  =  Occupe" << endl;
        }
        if(v[i] ==0) {
            cout << i <<"  =  Libre" << " " << endl;
        }
    }
    cout << "\n" << endl;
}
