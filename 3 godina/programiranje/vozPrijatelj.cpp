#include <iostream>
#include <string>

using namespace std;

class Vagon{
	private:
		string naziv;
		int kapacitet = 10;
		int brojPutnika = 0;
	public:
		Vagon(){
		}
		Vagon(string naziv){
			this->naziv=naziv;
		}
		string GetNaziv(){
			return naziv;
		}
		int GetBrPutnika(){
			return brojPutnika;
		}
		void SetNaziv(string naziv){
			this->naziv=naziv;
		}
		void DodajPutnika(){
			if(brojPutnika<kapacitet){
				brojPutnika++;
			}
		}
		void UkloniPutnika(){
			if(brojPutnika>0 ){
				brojPutnika--;
			}
		}
		
		friend bool operator>(const Vagon&v1, const Vagon&v2){
			return v1.brojPutnika>v2.brojPutnika;
		}
		friend bool operator<(const Vagon&v1, const Vagon&v2){
			return v1.brojPutnika<v2.brojPutnika;
		}
		
		friend std::ostream& operator<<(std::ostream &izlaz, const Vagon &v){
			izlaz<<"Vagon "<<v.naziv<<" : broj putnika: "<<v.brojPutnika<<endl;
		}
};

class Voz{
	private:
		struct Element{
		Vagon info;
		Element *sledeci;
			Element(Vagon v){
				info=v;
				sledeci=NULL;
			}
		};
		Voz::Element*pocetak=NULL;
		Voz::Element*kraj=NULL;
		string ime;
		
	public:
		Voz(string ime){
			this->ime=ime;
		}
		void DodajVagon(Vagon v){
			Voz::Element*novi=new Voz::Element(v);
			if(!pocetak){
				pocetak=novi;
				kraj=novi;
			}else{
				kraj->sledeci=novi;
				kraj=novi;
			}
		}
		void DodajVagonP(Vagon v){
			Voz::Element*novi= new Voz::Element(v);
			if(!pocetak){
				pocetak=novi;
				kraj=novi;
			}else{
				novi->sledeci=pocetak;
				pocetak=novi;
			}
		}
		int BrPutnika()const{
			int zbir=0;
			Voz::Element*pom=pocetak;
			while(pom){
				zbir+=pom->info.GetBrPutnika();
				pom=pom->sledeci;
			}
			return zbir;
		}
		void Sortiraj(){
			Voz::Element*i=pocetak;
			Voz::Element*j;
			Vagon pom;
			while(i){
				j=i->sledeci;
				while(j){
					if(i->info<j->info){
						pom=i->info;
						i->info=j->info;
						j->info=pom;
					}
					j=j->sledeci;	
				}
				i=i->sledeci;
			}
		}
		
		~Voz(){}
		
		friend std::ostream& operator<<(std::ostream&izlaz,const Voz&v){
			Voz::Element*pom=v.pocetak;
			if(!v.pocetak){
				cout<<"Nema vagone"<<endl;
			}else{
				cout<<"Voz "<<v.ime<<": "<<v.BrPutnika()<<" putnika"<<endl;
				while(pom){
					cout<<pom->info;
					pom=pom->sledeci;
				}
			}
		}
};

int main(){
Vagon v1=Vagon("vagoncic");
Vagon v2=Vagon("veliki vagon");
for(int i=0; i<20; i++){
	if(i%3){
		v1.DodajPutnika();
	}else{
		v2.DodajPutnika();
	}
}
	Voz vozic=Voz("vozic");
	vozic.Ispis();
	for(int i=0; i<5;i++){
		vozic.DodajVagon(v1);
		vozic.DodajVagonP(v2);
	}
	cout<<vozic;
	vozic.Sortiraj();
	cout<<vozic;
		
	if(v1>v2){
		cout<<"Vece"<<endl;
	}
	
	return 0;
}
