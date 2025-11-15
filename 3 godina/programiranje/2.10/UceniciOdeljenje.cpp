#include <iostream>
#include <string>

using namespace std;

class Ucenik{
	private:
		string ime;
		string prezime;
		float prosek;
	public:
		Ucenik(){
			ime="Strahinja";
			prezime="Djordjevic";
			prosek=5.0;
		}
		
		Ucenik(string ime, string prezime, float prosek){
			this->ime=ime;
			this->prezime=prezime;
			this->prosek=prosek;
		}
		
		void SetIme(string ime){
			this->ime=ime;
		}
		void SetPrezime(string prezime){
			this->prezime=prezime;
		}
		void SetProsek(float prosek){
			this->prosek=prosek;
		}
		
		void ZadajIme(){
			cout<<"Zadaj ime ucenika ";
			cin>>ime;
		}
		void ZadajPrezime(){
			cout<<"Zadaj prezime ucenika ";
			cin>>prezime;
		}
		void ZadajProsek(){
			cout<<"Zadaj prosek ucenika ";
			cin>>prosek;
		}
		
		string GetIme(){
			return ime;
		}
		
		string GetPrezime(){
			return prezime;
		}
		
		float GetProsek(){
			return prosek;
		}
		
		void Ispis(){
			cout<<ime<<", "<<prezime<<", "<<prosek<<endl;
		}
};

class Odeljenje{
	private:
		int maksBrojUcenika=3;
		Ucenik Ucenici[3];
		int brUcenika=0;
	public:
		Odeljenje(){
			
		}
		
		int GetMaksBrUcenika(){
			return maksBrojUcenika;
		}
		
		int DodajAko(Ucenik ucenik){
			if(brUcenika<maksBrojUcenika){
				Ucenici[brUcenika]=ucenik;
				brUcenika++;
				return 1;
			}else{
				return 0;
			}
		}
		
		void Ispis(){
			int i;
			if(brUcenika!=0){
				for(i=0;i<brUcenika;i++){
					Ucenici[i].Ispis();
				}
			}
		}
		
		void Sortiraj(){
			int i,j;
			Ucenik pomocna;
			for(i=0;i<maksBrojUcenika-1;i++){
				for(j=i+1;j<maksBrojUcenika;j++){
					if(Ucenici[i].GetPrezime()>Ucenici[j].GetPrezime()){
						pomocna=Ucenici[i];
						Ucenici[i]=Ucenici[j];
						Ucenici[j]=pomocna;
					}
				}
			}
		}
		
		Ucenik Dohvati(int index){
			Ucenik trazeniUcenik, nepostojeciUcenik=Ucenik("Ne ","postoji", 0);
			if(index<brUcenika){
				trazeniUcenik=Ucenici[index];
				return trazeniUcenik;
			}else{
				cout<<"Nema ucenika na tom indeksu"<<endl;
				return nepostojeciUcenik;
			}
		}
};

int main(){
	Odeljenje it39;
	Ucenik ucenik;
	int i=0;
	
	while(i<it39.GetMaksBrUcenika()){
		ucenik.ZadajIme();
		ucenik.ZadajPrezime();
		ucenik.ZadajProsek();
		
		it39.DodajAko(ucenik);
		i++;
	}
	cout<<endl<<endl<<endl<<endl;
	it39.Ispis();
	cout<<endl<<endl<<endl<<endl;
	it39.Sortiraj();
	it39.Ispis();
	
	int index;
	cout<<"Kog ucenika trazis? "<<endl;
	cin>>index;
	
	Ucenik trazeniUcenik = it39.Dohvati(index);
	trazeniUcenik.Ispis();
}
