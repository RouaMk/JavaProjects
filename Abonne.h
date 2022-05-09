/*
 * Abonne.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#ifndef ABONNE_H_
#define ABONNE_H_
#include<iostream>
using namespace std;
#include<string.h>

class Abonne {
private :
   int numSerie;
   string nom ;
   string adresse ;

public:

	Abonne();
	Abonne(int numSerie,string nom,string adresse);
	~Abonne();
	void setSerie(int numSerie);
	void setNom(string nom);
	void setAdresse(string adresse);
	int getSerie();
	string getNom();
	string getAdresse();
	void afficheAbonne();
	bool toEqual(Abonne abn);
};

#endif /* ABONNE_H_ */
