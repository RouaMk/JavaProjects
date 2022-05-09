//============================================================================
// Name        : Mini_Projet.cpp
// Author      : Roua Mkadmi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include"Abonne.h"
#include"Consommation.h"
#include"Ligne.h"
#include"LigneFixe.h"
#include"LigneMobile.h"
#include"Service.h"
#include<vector>
#include<string>

int main() {

	int i ;
Abonne A;
A.afficheAbonne();

//1er question :
cout<<"1 er question :"<<endl;
	Abonne abn(157,"mkadmi","sahline") ;
	abn.afficheAbonne();
	cout<<endl;
	cout<<endl;


cout<<"2 eme question :"<<endl;
//2eme question :

string tabNom[10]={"Chahra","toukebri","Bedoui","Moncef","Henedi","Raouf","elKamel","Hajnis","oppnis","maazoun"};
string tabAdr[10]={"Sahline","mestir","kairouen","nafta","hezoua","CUN","ain drahem","houmet souk","kualalmpur","jammel"};
string tabRes[4]={"TT","orange","oreedoo","elissa"};
string tabMois[12]={"jan","fev","mars","avril","may","juin","juil","aout","sep","oct","nov","dec"};
string tabAn[5]={"2018","2019","2020","2021","2022"};

vector<Abonne>v_Abonne(100);
v_Abonne[0]=Abonne(1409,"7lima ","tounes ");
v_Abonne[0].afficheAbonne();

for(i=1;i<v_Abonne.size();i++){
     v_Abonne[i].setSerie(v_Abonne[i-1].getSerie()+1);
     v_Abonne[i].setAdresse(tabAdr[rand()%10]);
     v_Abonne[i].setNom(tabNom[rand()%10]);

     v_Abonne[i].afficheAbonne();
	}

//3eme question :

cout<<endl;
cout<<endl;
cout<<" 3eme et 4eme question : "<<endl;
cout<<"**les Lignes fixes**"<<endl;
vector<Ligne*>v_Ligne(150);

v_Ligne[0]=new LigneFixe(71767845,v_Abonne[0],1,tabAdr[rand()%10]);
v_Ligne[0]->afficheLigne();
for(i=1;i<30;i++){
	v_Ligne[i]=new LigneFixe(v_Ligne[i-1]->getNum()+1,v_Abonne[i],1,tabAdr[rand()%10]);
	v_Ligne[i]->afficheLigne();

 }

cout<<"**les Lignes mobiles**"<<endl;

int j=0;
v_Ligne[30]=new LigneMobile(24017011,v_Abonne[30],1,tabRes[rand()%4]);
v_Ligne[30]->afficheLigne();

//3eme et 4eme question :

for(i=31;i<150;i++){
    if(i<100){
	      v_Ligne[i]=new LigneMobile(v_Ligne[i-1]->getNum()+1,v_Abonne[i],1,tabRes[rand()%4]);
	    v_Ligne[i]->afficheLigne();
    }
    else {v_Ligne[i]=new LigneMobile(v_Ligne[i-1]->getNum()+1,v_Abonne[j],1,tabRes[rand()%4]);
        v_Ligne[i]->afficheLigne();
    j++;}
}

//5eme question :
cout<<endl;
cout<<endl;
cout<<" 5eme question : "<<endl;

Service tabSrv[17];
tabSrv[0]=Service(120,"internet",4);

for(i=1;i<17;i++){
   if(i<7){
	   tabSrv[i]=Service(rand()%100+100,"internet",rand()%20 );
   }
   else{
	   tabSrv[i]=Service(rand()%100+100,"Communication_vocale",rand()%20 );

   }
}

//6eme question :
cout<<endl;
cout<<endl;
cout<<" 6eme question : "<<endl;

vector<Consommation> tabConso(1000);
for(i=0;i<1000;i++){
	tabConso[i]=Consommation(v_Ligne[rand()%150],tabSrv[rand()%17],tabMois[rand()%12],tabAn[rand()%5],rand()%10,rand()%2);
}

//7eme question :
cout<<endl;
cout<<endl;
cout<<" 7eme question : "<<endl;



//8eme question :
cout<<endl;
cout<<endl;
cout<<" 8eme question : "<<endl;
cout<<" ***facture Consommation*** "<<endl;

for(i=0;i<v_Ligne.size();i++){
	Consommation conso0;
	int som=0;
	for(int j=0;j<1000;j++){
       if(v_Ligne[i]->toEqual(tabConso[j].getLn())){
          som+=conso0.operator +(tabConso[j]);
       }
	}
	cout<<"pour la Ligne "<<v_Ligne[i]->getNum()<<" la facture est "<<som<<endl;

}

//9eme question :
cout<<endl;
cout<<endl;
cout<<" 9eme question : "<<endl;
cout<<" ***le montant annuel des lignes fixes*** "<<endl;

for(i=0;i<30;i++){
cout<<"pour la Ligne "<<v_Ligne[i]->getNum()<<" la facture est "<<endl;
	for(int k=0;k<5;k++){
	    cout<<"**Pour l'annee :"<<tabAn[k]<<" ** = ";
		Consommation conso0;
		int som=0;
      for(int j=0;j<1000;j++){
    	  if(v_Ligne[i]->toEqual(tabConso[j].getLn())&&(tabConso[j].getAn()==tabAn[k])){
    		  som+=conso0.operator +(tabConso[j]);
    	  }
      }
      cout<<som<<endl;
	}
}

//10eme question :
cout<<endl;
cout<<endl;
cout<<" 10eme question : "<<endl;

vector<Abonne>abn2Lignes ;
//on va chercher ici aux abonnees possedant 2 lignes:
for(i=0;i<v_Ligne.size();i++){
	Abonne abn =v_Ligne[i]->getAbn();
	  for(int j=i+1;j<v_Ligne.size();j++){
		  if(v_Ligne[j]->getAbn().toEqual(abn)){
			 abn2Lignes.push_back(v_Ligne[j]->getAbn());
		  }
	  }
}

for(i=0;i<abn2Lignes.size();i++){
	Consommation conso0;
	int som=0;
	for(int j=0;j<1000;j++){
       if((tabConso[j].getSrv().getDescrp()=="internet")&&(tabConso[j].getLn()->getAbn().toEqual(abn2Lignes[i]))){
    	   som+=conso0.operator +(tabConso[j]);
       }
	}
	if(som!=0){
	cout<<"pour l'abonne "<<abn2Lignes[i].getSerie()<<" la facture sur la communication internet apres reduction devient "<<(som-(som*15)/100)<<endl;
	}
}

//11eme question :
cout<<endl;
cout<<endl;
cout<<" 11eme question : "<<endl;

for(i=0;i<v_Abonne.size();i++){
	cout<<"pour l'abonne "<<v_Abonne[i].getSerie()<<" : ";
	Consommation conso0;
	int som=0;
	  for(int j=0 ;j<1000;j++){
          if((tabConso[j].getAn()=="2021")&&(tabConso[j].getMois()=="jan")&&(tabConso[j].getLn()->getAbn().toEqual(v_Abonne[i]))){
       	   som+=conso0.operator +(tabConso[j]);
          }
	  }
	  cout<<som<<endl;

}


//12eme question :
cout<<endl;
cout<<endl;
cout<<" 12eme question : "<<endl;


for(i=0;i<30;i++){
	cout<<"pour l'abonne "<<v_Abonne[i].getSerie()<<" : ";
	Consommation conso0;
	int som=0;
	  for(int j=0 ;j<1000;j++){
          if((tabConso[j].getAn()=="2021")&&(tabConso[j].getMois()=="jan")&&(tabConso[j].getLn()->getAbn().toEqual(v_Abonne[i]))&&(v_Abonne[i].getAdresse()=="CUN")){
       	   som+=conso0.operator +(tabConso[j]);
          }
	  }
	 cout<<som<<endl;

}

//13eme question :
cout<<endl;
cout<<endl;
cout<<" 13eme question : "<<endl;

vector<Ligne*>tab_Inactiv ;

for(i=0;i<v_Ligne.size();i++){
	bool test =false;
  for(int j=0;j<1000;j++){
     if((v_Ligne[i]->toEqual(tabConso[j].getLn()))&&(tabConso[j].getMois()=="dec")&&(tabConso[j].getAn()=="2020")&&(tabConso[j].getEtatPaye()==0)){
     test=true;
     }
 }
 if(test) {tab_Inactiv.push_back(v_Ligne[i]);};

}

//14eme question :
cout<<endl;
cout<<endl;
cout<<" 14eme question : "<<endl;

for(vector<Ligne*>::iterator it=tab_Inactiv.begin();it!=tab_Inactiv.end();++it){
	(*it)->afficheLigne();
}






































	return 0;
}
