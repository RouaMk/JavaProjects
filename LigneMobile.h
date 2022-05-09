/*
 * LigneMobile.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#ifndef LIGNEMOBILE_H_
#define LIGNEMOBILE_H_
#include"Ligne.h"

class LigneMobile:public Ligne {
private:
  string reseau ;
public:
	LigneMobile();
	LigneMobile(int num ,Abonne abn ,int etat_ligne,string reseau);
	~LigneMobile();
	void setReseau(string reseau);
	string getReseau();
	bool toEqual(LigneMobile lg);
	void afficheLigne();
	void activerLigne(int etat_ligne);
};

#endif /* LIGNEMOBILE_H_ */
