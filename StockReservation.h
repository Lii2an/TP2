#pragma once
#include "Reservation.h"
class StockReservation : public Reservation
{
private:
	std::vector<Reservation> ListeResa;
public:
	StockReservation();
	void afficherReservation();
	void AjouterReservation(Reservation reservation);
};

