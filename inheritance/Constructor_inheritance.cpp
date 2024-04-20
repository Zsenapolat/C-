#include <iostream>

using namespace std;

class MenuItem{
	public:
		string name;
		int ab;
		MenuItem(){							//E�er base class'�n default constructor'unu yazmazsak �al��maz. Mutlaka default constructor olmal�.
			name="unknown";
			cout<<"Base constructor"<<endl;
		}
		
		MenuItem(int ab){				//Bir fonksiyonu override edebilmemiz i�in o fonksiyonun bir base class'tan derive edilmesi gerek.
									//Bir base class'�n fonksiyonu ba�ka bir base classta override edilemez.
			cout<<"Base param constructor"<<endl;
		}
};

class Drink : public MenuItem{
	public:
		int ounces;
		
		using MenuItem::MenuItem;					//Bu �ekilde yazd���m�zda base class'�n b�t�n constructor'lar� inherit edilecektir.Drink objesi olu�tururken
													//e�er MenuItem parametresini de kullanabilmek istiyorsak bu �ekilde yazar�z.
		
		Drink(){									//Derived class'�n default constructor'unu �a��rd���m�zda e�er yan�nda base class'� da tan�mlamad�ysak
													//base class'�n default constructor'u �a�r�lacakt�r. E�er tan�mlad�ysak param constructor'u �a�r�lacakt�r.
			ounces = 9;
			cout<<"Derived constructor"<<endl;
		}											
		Drink (int set_ounces)	
		{											//Bu �ekilde �al��t�rd���m�zda base class'�n default constructor'u �al���r. Drink (double set_ounces)
													//E�er base class'�n param constructor'u �al��s�n istiyorsak 
			ounces = set_ounces;
			cout<<"Derived param constructor"<<endl;
		}
};
int main(){
	MenuItem soup;					//Base class'tan bir obje �retirsek sadece base class'�n constructor'u �al���r.
	Drink soda(8);					//Derived class'tan bir obje �retti�imizde ise ikisinin de constructor'u �al���r. ��nk� Derived class Base class'�n da 
									//�zelliklerine eri�ebilir. E�er int bir de�er girersek drink class'�n�n param constructor'� �al���r.
									//String girersek MenuItem'�n constructor'lar�n� inherit etti�imiz i�in base class param constructor'u �al��acakt�r.
	return 0;					
}
