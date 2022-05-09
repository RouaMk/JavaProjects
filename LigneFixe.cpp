/*
 * LigneFixe.cpp
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#include "LigneFixe.h"
#include"Ligne.h"
#include<string>
#include<iostream>
using namespace std ;

LigneFixe::LigneFixe() {

}

LigneFixe::LigneFixe(int num ,Abonne abn ,int etat_ligne,string local_geo):Ligne(num,abn,1){
	this->local_geo=local_geo;
}

void LigneFixe::setLocal(string local_geo){
     this->local_geo=local_geo;
}

string LigneFixe::getLocal(){
	return local_geo;
}


bool LigneFixe::toEqual(LigneFixe lg){
	return toEqual(lg)&&(local_geo==lg.local_geo);

}





void LigneFixe::afficheLigne(){
	cout<<" numero de ligne= "<<getNum()<<" de l'abonne= ";
	getAbn().afficheAbonne();
	cout<<" d'etat de ligne "<<getEtat();
	cout<<" la localisation geo= "<<local_geo<<endl;
}

void LigneFixe::activerLigne(int etat_ligne){
setEtat(etat_ligne);
};

LigneFixe::~LigneFixe() {}

