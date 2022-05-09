/*
 * LigneFixe.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#ifndef LIGNEFIXE_H_
#define LIGNEFIXE_H_
#include"Ligne.h"
#include<string>

class LigneFixe:public Ligne {
private:
    string local_geo;
public:
	LigneFixe();
	LigneFixe(int num ,Abonne abn ,int etat_ligne,string local_geo);
	~LigneFixe();
	void setLocal(string local_geo);
    string getLocal();
    bool toEqual(LigneFixe lg);
     void afficheLigne();
     void activerLigne(int etat_ligne);
};

#endif /* LIGNEFIXE_H_ */
