/*
 * LigneMobile.cpp
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#include "LigneMobile.h"
#include"Ligne.h"
#include<string>
#include<iostream>
using namespace std ;

LigneMobile::LigneMobile() {

}
LigneMobile::LigneMobile(int num ,Abonne abn ,int etat_ligne,string reseau):Ligne(num,abn,1){
   this->reseau=reseau;
}


void LigneMobile::setReseau(string reseau){
	   this->reseau=reseau;
}

string LigneMobile::getReseau(){
	return reseau;
}


bool LigneMobile::toEqual(LigneMobile lg){
	return toEqual(lg)&&(reseau==lg.reseau);

}



void LigneMobile::afficheLigne(){
	cout<<" numero de ligne= "<<getNum()<<" de l'abonne= ";
	getAbn().afficheAbonne();
	cout<<" d'etat de ligne "<<getEtat();
	cout<<" le reseau= "<<reseau<<endl;
}

void LigneMobile::activerLigne(int etat_ligne){
setEtat(etat_ligne);
};


LigneMobile::~LigneMobile() {
	// TODO Auto-generated destructor stub
}

