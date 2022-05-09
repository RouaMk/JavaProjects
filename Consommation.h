/*
 * Consommation.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#ifndef CONSOMMATION_H_
#define CONSOMMATION_H_
#include"Ligne.h"
#include"Service.h"
#include<iostream>
using namespace std;
#include<string>

class Consommation {
private:
	Ligne *ln;
	Service srv ;
	string mois,an ;
    int nbUnit;
    int etat_paye ;
public:
	Consommation();
	Consommation(Ligne* ln ,Service srv ,string mois,string an,int nbUnit,int etat_paye);
	~Consommation();

	void afficheConso();

	string getAn() ;
	void setAn(string an);
	int getEtatPaye() ;
	void setEtatPaye(int etat_paye);
	Ligne*getLn() ;
	void setLn(Ligne *ln);
	string getMois();
	void setMois(string mois);
	int getNbUnit() ;
	void setNbUnit(int nbUnit);
	Service getSrv() ;
	void setSrv(Service srv);
	int operator+(Consommation a);

};

#endif /* CONSOMMATION_H_ */
