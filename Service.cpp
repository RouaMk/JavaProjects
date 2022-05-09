/*
 * Service.cpp
 *
 *  Created on: Jan 10, 2021
 *      Author: Roua Mkadmi
 */

#include "Service.h"
#include<iostream>
using namespace std;
#include<string>

Service::Service() {

}

Service::Service(int numero,string descrp,int prix){
	this->numero=numero;
    this->descrp=descrp;
    this->prix=prix;
}

Service::~Service() {}

void Service::afficheService(){
cout<<"le numero= "<<numero<<" de type= "<<descrp<<" le prix par unite consommee= "<<prix<<endl;
}

void Service::setNumero(int numero){
	this->numero=numero;
}

void Service::setDescrp(string descrp){
	this->descrp=descrp;
}

void Service::setPrix(int prix){
   this->prix=prix;
}

int Service::getNumero(){
	return numero;
}

string Service::getDescrp(){
	return descrp;
}

int Service::getPrix(){
	return prix ;
}







