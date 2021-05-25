#include <iostream>
#include <cstdlib>
#include <fstream>
#include <Windows.h>
#include "Menu.h"
using namespace std;

Menu :: Menu() : l(), s(l){
	visualizzamenu();
}

void Menu :: visualizzamenu(){
	int x;
	do{
	        system("cls");
        	cout<<"CHI VUOL ESSERE MILIONARIO"<<endl<<endl;
        	cout<<"1) Gioca"<<endl;
        	cout<<"2) Aggiungi domanda"<<endl;
        	cout<<"3) Record"<<endl;
        	cout<<"4) Crediti"<<endl;
        	cout<<"5) Esci"<<endl<<endl;
        	cout<<"Inserire opzione che vuoi scegliere"<<endl;
		cin>>x;
		switch(x){
			case 1:
				s.vdomanda();
				break;
			case 2:
				l.aggiungi_domanda();
				break;
			case 3:
				visualizzarecord();
				break;
			case 4:
				visualizzacrediti();
				break;
			case 5:
				cout<<"Grazie per aver giocato!"<<endl;
				return;
			default:
				cout<<"Opzione non valida, riprovare"<<endl;
				break;
		}
	}while(true);
}

void Menu :: visualizzarecord(){
	ifstream in;
	in.open("record.txt");
	string s1;
	system("cls");
	while(getline(in,s1)){
		cout<<s1<<endl;
	}
	cout<<endl<<"Premere invio per tornare al menu..."<<endl;
	cin.clear(); cin.ignore(1);
	getline(cin,s1);
}

void Menu :: visualizzacrediti(){
	system("cls");
	string s1;
	cout<<"CREDITI"<<endl<<endl;
	cout<<"-Se caghi e' sicuro che pisci, ma se pisci non e' sicuro che caghi- Geolier"<<endl<<endl;
	cout<<"Premere invio per tornare al menu..."<<endl;
	cin.clear(); cin.ignore(1);
	getline(cin,s1);
}
