/*
 * Ligne.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#ifndef LIGNE_H_
#define LIGNE_H_
#include<iostream>
using namespace std;
#include<string.h>
#include"Abonne.h"

class Ligne {
private:
	int num;
	Abonne abn ;
	int etat_ligne;
public:
	Ligne();
	Ligne(int num ,Abonne abn ,int etat_ligne);
	void setNum(int num);
	void setAbn(Abonne abn);
	void setEtat(int etat_ligne);
	int getNum();
	Abonne getAbn();
	int getEtat();
virtual	bool toEqual(Ligne *lg);
virtual ~Ligne();
virtual void afficheLigne();
virtual void activerLigne(int etat)=0;

};

#endif /* LIGNE_H_ */
