#include <iostream>
#include <string>
using namespace std;

class Sat{
	private:
		int sat;
		int minut;
		int sekund;

	public:
			
		Sat(){
			sat=12;
			minut=24;
			sekund=5;
		}
		Sat(int sat, int minut,	int sekund){
			this->sat=sat;
			this->minut=minut;
			this->sekund=sekund;
		}
		
		void SetSat(int sat){
			if(sat<=23 && sat>=0){
				this->sat=sat;
			}else{
				return;
			}
		}
		void SetMinut(int minut){
			if(minut<=59 && minut>=0){
				this->minut=minut;
			}else{
				return;
			}
		}
		void SetSekund(int sekund){
			if(sekund<=59 && sekund>=0){
				this->sekund=sekund;
			}else{
				return;
			}
		}
		
		int GetSat(){
			return sat;
		}
		int GetMinut(){
			return minut;
		}
		int GetSekund(){
			return sekund;
		}
		
		void Ispis(){
			cout<<sat<<":"<<minut<<":"<<sekund<<endl;
		}
		
		void DodajSekund(){
			sekund++;
			if(sekund==60){
				sekund=0;
				minut++;
				if(minut==60){
					minut=0;
					sat++;
					if(sat==24){
						sat=0;
					}
				}
				
			}
		}
		
		void DodajZaZadatiBroj(int n){
			int divSekund, divMinut, divSat;
			divSekund=(n+sekund)/60;
			divMinut=(divSekund+minut)/60;
			divSat=(divMinut+sat)/60;
			
			sekund+=n;
			if(sekund>=60){
				sekund-=60*divSekund;
				minut+=divSekund;
				if(minut>=60){
//					minut+=divSekund;
					minut-=60*divMinut;
					sat+=divMinut;
					if(sat>=24){
						sat-=24-divSat;
					}
				}
			}
		}
};



int main(){
	Sat rucni=Sat(17, 59, 54);
	rucni.Ispis();
	
	rucni.DodajSekund();
	rucni.Ispis();
	int n;
	cout<<"Unesi broj: "<<endl;
	cin>>n;
	rucni.DodajZaZadatiBroj(n);
	rucni.Ispis();
	
	return 0;
}



