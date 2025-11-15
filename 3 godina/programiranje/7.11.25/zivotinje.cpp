#include <iostream>
#include <string>

class Zivotinja{
	protected:
		string ime;
		int godine;
	public:
		Zivotina(){
			ime="fifi";
			godine=7;
		}
		Zivotina(string ime,int godine){
			this->ime=ime;
			this->godine=godine;
		}
		
		void SetIme(string ime){
			this->ime=ime;
		}
		void SetGodine(int godine){
			this->godine=godine;
		}
		
		string GetIme(){
			return ime;
		}
		int GetGodine(){
			return godine;
		}
		
		string Zvuk(){
			return "Zivotinja";
		}
		
		friend bool operator > (const Zivotinja &z1, const Zivotinja &z2){
			return z1.godine>z2.godine;
		}
		friend bool operator < (const Zivotinja &z1, const Zivotinja &z2){
			return z1.godine<z2.godine;
		}
		friend bool operator == (const Zivotinja &z1, const Zivotinja &z2){
			return z1.godine==z2.godine;
		}
		
		friend std::ostream& operator << (std::ostream& izlaz,const Zivotinja &z){
			izlaz<<"Zivotinja "<<z.ime<<", "<<z.godine<<" godina."<<endl;
			return izlaz;
		}
};

class ZooVrt{
	private:
		string ime;
		
		struct Element{
			Zivotinja info;
			Element*sledeci;
			Element(Zivotinja z){
				info=z;
				sledeci=NULL;
			}
		}Element;
		
		ZooVrt::Element*pocetak=NULL;
		ZooVrt::Element*kraj=NULL;
		
	public:
		ZooVrt(){
			ime="Duga";
		}
		ZooVrt(string ime){
			
		}
		
		void SetIme(string ime){
			this->ime=ime;
		}
		string GetIme(){
			return ime;
		}
		
		void DodajZivotinju(Zivotinja z){
			ZooVrt::Element*novi=new ZooVrt::Element(z);
			if(pocetak==null){
				pocetak=novi;
				kraj=novi;
			}else{
				kraj->sledeci=novi;
				kraj=novi;
			}
		}
		
		void UbijZivotinju(){
			ZooVrt::Element*trenutni=pocetak;
			ZooVrt::Element*prethodni=NULL;
			if(pocetak==kraj){
				delete pocetak;
				kraj=NULL;
				pocetak=NULL;
				return;
			}
			while(trenutni){
				if(trenutni->sledeci==kraj){
					prethodni=trenutni;
					trenutni->sledeci=NULL;
					delete kraj;
					kraj=prethodni;
				}
			
				trenutni=trenutni->sledeci;
			}
		}
		
		int ZbirGodina(){
			ZooVrt::Element*trenutni=pocetak;
			int s=0;
			while(trenutni!=NULL){
				s+=trenutni->info.GetGodine();
				trenutni=trenutni->sledeci;
			}
			return s;
		}
		
		friend std::ostream operator << (std::ostream&ispis, const ZooVrt& z){
			ZooVrt::Element*trenutni=z.pocetak;
			ispis<<"Zoo vrt "<<z.ime<<" ima zivotinje: "<<endl;
			while(trenutni){
				ispis<<trenutni->info;
				trenutni=trenutni->sledeci;
			}
		}
};



