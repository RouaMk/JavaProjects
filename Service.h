/*
 * Service.h
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#ifndef SERVICE_H_
#define SERVICE_H_
#include<iostream>
using namespace std;
#include<string>

class Service {
private:
    int numero;
    string descrp;
    int prix;
public:
	Service();
	Service(int numero,string descrp,int prix);
	~Service();
	void afficheService();
	void setNumero(int numero);
	void setDescrp(string descrp);
	void setPrix(int prix);
	int getNumero();
    string getDescrp();
    int getPrix();
};

#endif /* SERVICE_H_ */
