#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	//napravi novi broj svaki put kad se program pokrene
	srand(time(0));
	
	/*
		k=kocka
		nk=zakljucana kocka
		fk=finalna kocka
		d=taster za kocke
	*/
	
	//intidzeri za kocke
	int k1 = (rand() % 6)+1, k2 = (rand() % 6)+1, k3 = (rand() % 6)+1, k4 = (rand() % 6)+1, k5 = (rand() % 6)+1, k6 = (rand() % 6)+1;
	int nk1 = 0, nk2 = 0, nk3 = 0, nk4 = 0, nk5 = 0, nk6 = 0;
	int fk1, fk2, fk3, fk4, fk5, fk6;
	//tasteri za zakljucavanje
	char d1='1', d2='2', d3='3', d4='4', d5='5', d6='6';
	
	//koliko si kocki zakljucao
	int Z = 0;
	//koliko moze da se zakljuca
	const int maxZ = 5;
	
	//broj kolko puta mozes ponovo da zavrtis
	int r = 2;
	//taster da zavrtis opet
	char R ='r';
	//taster za prekidanje programa
	char K ='k';
	//input tastera
	char taster;
	
	cout<<"Vasi brojevi su"<<endl;
	cout<<k1<<", "<<k2<<", "<<k3<<", "<<k4<<", "<<k5<<", "<<k6<<endl;
	cout<<d1<<", "<<d2<<", "<<d3<<", "<<d4<<", "<<d5<<", "<<d6<<endl<<endl;
	cout<<"Klikni taster "<<K<<" da zavrsis program"<<endl<<endl;
	cout<<"Pritisni taster R da zavrtis opet. Imas jos "<<r<<" vrtenja."<<endl;
	
	
	while(r>0){
		cin>>taster;
		//proverava dugme koje si uneo
		switch(taster){
			case '1':
				if(nk1 == 0 && Z < maxZ){
					nk1 = k1;
					cout<<"zadrzao si prvu kocku, njen broj je: "<<nk1<<endl;
					Z++;
				}else if(nk1 != 0){
					cout<<"Vec si je zakljucao"<<endl;
				}
				else{
					cout<<"Vec si zakljucao previse kocki. Ne mozes vise od "<<maxZ<<endl;
				}
				break;
			case '2':
				if(nk1 == 0 && Z < maxZ){
					nk2 = k2;
					cout<<"zadrzao si drugu kocku, njen broj je: "<<nk2<<endl;
					Z++;
				}else if(nk2 != 0){
					cout<<"Vec si je zakljucao"<<endl;
				}
				else{
					cout<<"Vec si zakljucao previse kocki. Ne mozes vise od "<<maxZ<<endl;
				}
				break;
			case '3':
				if(nk3 == 0 && Z < maxZ){
					nk3 = k3;
					cout<<"zadrzao si trecu kocku, njen broj je: "<<nk3<<endl;
					Z++;
				}else if(nk3 != 0){
					cout<<"Vec si je zakljucao"<<endl;
				}
				else{
					cout<<"Vec si zakljucao previse kocki. Ne mozes vise od "<<maxZ<<endl;
				}
				break;
			case '4':
				if(nk4 == 0 && Z < maxZ){
					nk4 = k4;
					cout<<"zadrzao si cetvrtu kocku, njen broj je: "<<nk4<<endl;
					Z++;
				}else if(nk4 != 0){
					cout<<"Vec si je zakljucao"<<endl;
				}
				else{
					cout<<"Vec si zakljucao previse kocki. Ne mozes vise od "<<maxZ<<endl;
				}
				break;
			case '5':
				if(nk5 == 0 && Z < maxZ){
					nk5 = k5;
					cout<<"zadrzao si petu kocku, njen broj je: "<<nk5<<endl;
					Z++;
				}else if(nk5 != 0){
					cout<<"Vec si je zakljucao"<<endl;
				}
				else{
					cout<<"Vec si zakljucao previse kocki. Ne mozes vise od "<<maxZ<<endl;
				}
				break;
			case '6':
				if(nk6 == 0 && Z < maxZ){
					nk6 = k6;
					cout<<"zadrzao si sestu kocku, njen broj je: "<<nk6<<endl;
					Z++;
				}else if(nk6 != 0){
					cout<<"Vec si je zakljucao"<<endl;
				}
				else{
					cout<<"Vec si zakljucao previse kocki. Ne mozes vise od "<<maxZ<<endl;
				}
				break;
			case 'r':
                if (r > 0) {
                	r--;
                    //Samo ce promeniti one koje nisu zakljucane
                    if (nk1 == 0) k1 = (rand() % 6) + 1;
                    if (nk2 == 0) k2 = (rand() % 6) + 1;
                    if (nk3 == 0) k3 = (rand() % 6) + 1;
                    if (nk4 == 0) k4 = (rand() % 6) + 1;
                    if (nk5 == 0) k5 = (rand() % 6) + 1;
                    if (nk6 == 0) k6 = (rand() % 6) + 1;

                    cout<<"Novi brojevi"<<endl;
                    cout<<k1 << ", "<<k2<<", "<<k3<<", "<<k4<<", "<<k5<<", "<<k6<<endl;
                    cout<<d1<<", "<<d2<<", "<<d3<<", "<<d4<<", "<<d5<<", "<<d6<<endl<<endl;
                    
                    cout<<"Imas jos "<<r<<" bacanja"<<endl;
                } else {
                    cout<<"Nemas vise bacanja"<<endl;
                }
                break;
            case 'k':
            	cout<<"Zavrsio si program. Konacni rezultati"<<endl;
            	if(nk1 != 0) {fk1 = nk1;} else {fk1 = k1;}
            	if(nk2 != 0) {fk2 = nk2;} else {fk2 = k2;}
            	if(nk3 != 0) {fk3 = nk3;} else {fk3 = k3;}
            	if(nk4 != 0) {fk4 = nk4;} else {fk4 = k4;}
            	if(nk5 != 0) {fk5 = nk5;} else {fk5 = k5;}
            	if(nk6 != 0) {fk6 = nk6;} else {fk6 = k6;}
            	cout<<fk1<<", "<<fk2<<", "<<fk3<<", "<<fk4<<", "<<fk5<<", "<<fk6;
            	return 0;
            default:
                cout<<"Uneo si pogresan taster. Koristi neke od ponudjenih: "<<d1<<", "<<d2<<", "<<d3<<", "<<d4<<", "<<d5<<", "<<d6<<", 'r' ili 'k'"<<endl;
		}	
	}
	
	return 0;
}
