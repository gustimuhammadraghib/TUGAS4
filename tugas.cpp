#include <iostream>
#include <string>
using namespace std;

class pakaian {
    public:
        void model (string pakaian);
        string jenisbahan;
        void contoh (string berbentuk);
    
                
        };
int main(){
	
    pakaian CASUAL,FORMAL,ETNIS; 

	CASUAL.jenisbahan					="Bahan Kain 	: Katun";
	ETNIS.jenisbahan					="Bahan Kain 	: Rajut";
	FORMAL.jenisbahan					="Bahan Kain  	: Sifon";
	
	cout << "PAKAIAN CASUAL: \n\n";
	cout << (CASUAL.jenisbahan);
	CASUAL.contoh("T-Shirt dan Jeans (Kegunaan Untuk : Style Santai)");
	cout <<"_____________________________________________________________\n\n";
	
	cout << "PAKAIAN FORMAL: \n\n";
	cout << (FORMAL.jenisbahan);
	FORMAL.contoh("Tuxedo dan Gaun (Kegunaan Untuk :  Style Pesta)");
	cout <<"___________________________________________________________\n\n";
	
	cout << "PAKAIAN ETNIS: \n\n";
	cout << (ETNIS.jenisbahan);
	ETNIS.contoh("Sarung (Kegunaan Untuk : Acara Adat)");
	cout <<"_________________________________________________\n\n";
}

	void pakaian::model (string pakaian){	
	cout <<"\n"<<"merk "<<pakaian<<endl;
}
	
	void pakaian::contoh (string berbentuk){
	cout <<"\n"<<"Contoh Berupa "<<berbentuk<<endl;

}
