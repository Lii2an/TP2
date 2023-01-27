#pragma once
#include "Date.h"
#include "Chambre.h"
#include "Client.h"
#include "Hotel.h"
#include <string>
#include <iostream>
using namespace std;
class Reservation : public Chambre, public Hotel, public Client, public Date
{
private:
	int NumReservation;
	int prix;
	Client client;
	Chambre chambre;
	Hotel hotel;
	Date DateDebut;
	Date DateFin;
public:
	Reservation();
	Reservation(int NumReservation, Client client, Hotel hotel, Chambre chambre, Date DateDebut, Date DateFin);
	friend std::ostream& operator<<(std::ostream& os, const Reservation& ReserveCrea);
	void CalculPrix();
	void ModifierDate();
	
};

