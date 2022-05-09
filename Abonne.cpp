/*
 * Abonne.cpp
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#include "Abonne.h"
#include<iostream>
#include<string>
using namespace std;


Abonne::Abonne() {}

Abonne::Abonne(int numSerie,string nom,string adresse){
	this->adresse=adresse;
	this->nom=nom;
	this->numSerie=numSerie;

}

Abonne::~Abonne() {}

void Abonne::setSerie(int numSerie){
  this->numSerie=numSerie;
}

void Abonne::setNom(string nom){
	this->nom=nom;
}

void Abonne::setAdresse(string adresse){
	this->adresse=adresse;
}

int Abonne::getSerie(){
	return numSerie;
}

string Abonne::getNom(){
	return nom;
}

string Abonne::getAdresse(){
	return adresse;
}

void Abonne::afficheAbonne(){
	cout<<"num Serie = "<<numSerie<<", nom = "<<nom<<", adresse = "<<adresse<<endl;
}

bool Abonne::toEqual(Abonne abn){

	return (adresse==abn.adresse)&&(numSerie==abn.numSerie)&&(nom==abn.nom);
}





