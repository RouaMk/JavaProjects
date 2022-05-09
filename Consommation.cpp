/*
 * Consommation.cpp
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#include "Consommation.h"
#include"Ligne.h"
#include"Service.h"
#include<iostream>
using namespace std;
#include<string>

Consommation::Consommation() {
	srv.setPrix(0);
	nbUnit=0;
	etat_paye=0;
}

Consommation::Consommation(Ligne* ln ,Service srv ,string mois,string an,int nbUnit,int etat_paye){
	this->ln=ln;
	this->srv=srv;
	this->mois=mois;
    this->an=an;
    this->etat_paye=0;
    this->nbUnit=nbUnit;

}

Consommation::~Consommation() {}


string Consommation::getAn()  {
	return an;
}

void Consommation::setAn(string an) {
	this->an = an;
}

int Consommation::getEtatPaye()  {
	return etat_paye;
}

void Consommation::setEtatPaye(int etat_paye) {
	this->etat_paye = etat_paye;
}

Ligne* Consommation::getLn()  {
	return ln;
}

void Consommation::setLn(Ligne *ln) {
	this->ln = ln;
}

string Consommation::getMois() {
	return mois;
}

void Consommation::setMois(string mois) {
	this->mois = mois;
}

int Consommation::getNbUnit() {
	return nbUnit;
}

void Consommation::setNbUnit(int nbUnit) {
	this->nbUnit = nbUnit;
}

Service Consommation::getSrv() {
	return srv;
}

void Consommation::setSrv(Service srv) {
	this->srv = srv;
}

void Consommation::afficheConso(){
	cout<<"la ligne ";
	ln->afficheLigne();
    cout<<" le service ";
    srv.afficheService();
    cout<<" du mois "<<mois<<" de l'annee "<<an<<" le nombre des unites consommees "<<nbUnit<<" l'etat paye = "<<etat_paye<<endl;
}

int Consommation::operator+(Consommation a){

	int conso1=(a.srv).getPrix()*(a.nbUnit);
    int conso2=nbUnit*(srv.getPrix());
	return conso1+conso2;
}






