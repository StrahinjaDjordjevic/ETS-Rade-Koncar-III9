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
			if(brojPutnika>0	){
				brojPutnika--;
			}
		}
		
		void Ispis(){
			cout<<"Vagon "<<naziv<<": "<<brojPutnika<<" putnika"<<endl;
		}
};

class Voz{
	private:
		string naziv;
		int kapacitet=10;
		int brojVagona=0;
		Vagon nizVagona[10];
	public:
		Voz(){
			
		}
		Voz(string naziv){
			this->naziv=naziv;
		}
		
		string GetNaziv(){
			return naziv;
		}
		int GetBrVagona(){
			return brojVagona;
		}
		
		void SetNaziv(string naziv){
			this->naziv=naziv;
		}
		
		void DodajVagon(Vagon vagon){
			if(brojVagona<kapacitet){
				nizVagona[brojVagona]=vagon;
				brojVagona++;
			}
		}
		void UkloniVagon(){
			if(brojVagona>0){
				brojVagona--;
			}
		}
		
		int IzracunajPutnike(){
			int i,s=0;
			for(i=0;i<GetBrVagona();i++){
				s+=nizVagona[i].GetBrPutnika();
			}
			return s;
		}
		
		void Sortiraj(){
			int i,j;
			Vagon p;
			for(i=0;i<GetBrVagona()-1;i++){
				for(j=i+1;j<GetBrVagona();j++){
					if(nizVagona[i].GetBrPutnika()>nizVagona[j].GetBrPutnika()){
						p=nizVagona[i];
						nizVagona[i]=nizVagona[j];
						nizVagona[j]=p;
					}
				}
			}
		}
		
		void Ispis(){
			cout<<"Voz "<<naziv<<": "<<IzracunajPutnike()<<" putnika"<<endl;
			for(int i=0;i<GetBrVagona();i++){
				cout<<i+1<<". ";
				nizVagona[i].Ispis();
			}
		}
};

int main(){
	Vagon v1=Vagon("Zoi");
	Vagon v2=Vagon("Rene");
	for(int i=0;i<20;i++){
		v1.DodajPutnika();
	}
	for(int i=0;i<5;i++){
		v2.UkloniPutnika();
	}
	v1.Ispis();
	v2.Ispis();
	
	Voz vozic=Voz("MjauMjau");
	vozic.Ispis();
	for(int i=0;i<10;i++){
		vozic.DodajVagon(v1);
		vozic.DodajVagon(v2);
	}
	vozic.Ispis();
	vozic.UkloniVagon();
	vozic.Ispis();
	vozic.Sortiraj();
	vozic.Ispis();
	
	return 0;
}
