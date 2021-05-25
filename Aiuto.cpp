#include "Aiuto.h"

Aiuto :: Aiuto(){
	for (int i=0; i<3; i++)
		aiutiutilizzati[i] = 0;
}

bool Aiuto :: usaaiuto(ListaDomande l, Domanda d, int i){
	int x;
	if (i<1 || i>3){
		cout<<"Numero di aiuto non valido"<<endl;
		return 0;
	}
	if (aiutiutilizzati[i-1] == 1){
		cout<<"Aiuto già utilizzato!"<<endl;
		return 0;
	}
	switch(i){
		case 1:
			x = rand()%4; 
			if (x<3){
				cout<<"Da casa dicono: la risposta corretta e' la "<<d.getCorretta()<<endl;
			}
			else{
				do{
					x = rand()%4+1;
				}while(x==d.getCorretta());
				cout<<"Da casa dicono: la risposta corretta e' la "<<x<<endl;
			}
			aiutiutilizzati[0] = 1;
			break;
		case 2:
			l.aumentadomandacorrente();
			system("cls");
			d = l.getDomanda();
			cout<<d.getDomanda()<<endl<<endl;
			for (int i=0; i<4; i++)
				cout<<d.getRisposta(i)<<endl;
			aiutiutilizzati[1] = 1;
			break;
		case 3:
			int y;
			do{
				x = rand()%4+1;
			}while(x==d.getCorretta());
			y = rand()%2;
			if (y==0) cout<<"La corretta è una tra "<<d.getCorretta()<<" e "<<x<<endl;
			else cout<<"La corretta è una tra "<<x<<" e "<<d.getCorretta()<<endl;
			aiutiutilizzati[2] = 1;
			break;
	}
	return 1;
}

int Aiuto :: getausati(){
	int c=0;
	for (int i=0; i<3; i++)
		if (aiutiutilizzati[i] == 1) c++;
	return c;
}

void Aiuto :: reset(){
        for (int i=0; i<3; i++)
                aiutiutilizzati[i] = 0;

}
