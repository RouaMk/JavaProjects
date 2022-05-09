/*
 * Ligne.cpp
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#include "Ligne.h"
#include<iostream>
using namespace std;
#include<string.h>
#include"Abonne.h"

Ligne::Ligne() {
	etat_ligne=0;
}

Ligne::Ligne(int num ,Abonne abn ,int etat_ligne){
	this->num=num;
    this->abn=abn;
    this->etat_ligne=etat_ligne;
}

Ligne::~Ligne() {}

void Ligne::setNum(int num){
	this->num=num;
}

void Ligne::setEtat(int etat_ligne){
	this->etat_ligne=etat_ligne;
}


void Ligne::setAbn(Abonne abn){
	this->abn=abn;
}

int Ligne::getNum(){
	return num;
}

int Ligne::getEtat(){
	return etat_ligne;
}

Abonne Ligne::getAbn(){
	return abn;
}

bool Ligne::toEqual(Ligne *lg){
	return (abn.toEqual(lg->abn))&&(num==lg->num)&&(etat_ligne==lg->etat_ligne);

}



void Ligne::afficheLigne(){
	cout<<" numero de ligne= "<<num<<" de l'abonne= ";
    abn.afficheAbonne();
    cout<<" d'etat de ligne "<<etat_ligne<<endl;
}

void Ligne::activerLigne(int etat_ligne){};

