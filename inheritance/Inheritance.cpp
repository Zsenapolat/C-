#include <iostream>

using namespace std;
						//Kod tekrar�n� �nlemek i�in kullan�l�r.
						
class MenuItem{					//Ayn� zamanda i�ecekler i�in de bir class olu�turmam�z gerekiyor. Bu y�zden de bu class'� kopyalayaca��z.
	public:
		string name;
		double calories;
		
		void print(){
			cout<<"Name: "<<name<<endl;
			cout<<"Calories: "<<calories<<endl;
		}
};
									//Drinks class inherit from MenuItem class. 
class Drinks: public MenuItem		//MenuItem burada base(parent) class olmu� olur. Drinks class ise derived(child) class olur. 
									//Member function'lar ve member variable'lar inherit edilir. Bu y�zden bunu yazd���m�zda MenuItem'da da bulunan elemanlar� sil.
{						
		public:						//Bu class menuitem class'�n�n �o�u eleman�n� i�inde bar�nd�r�yor. Bu y�zden �ok fazla kod tekrar� olmu� oluyor.(Code Clone)			
									//�rnek olarak bir class'�n i�indeki bir k�sm� de�i�tirmek istiyoruz. Bunu di�er class'larda da de�i�tirmemiz gerekiyor.									//Bu durumu ��zmek i�inse inheritance kullan�yoruz.
		double ounces;
		double cal_per_ounce(){		
			return calories/ounces;
		}
};

int main(){
	MenuItem french_fries;					
	french_fries.name="french_fries";	
	french_fries.calories=400;
	
	french_fries.print();
	
	Drinks hot_chocolate;
	hot_chocolate.name="hot chocolate";
	hot_chocolate.calories=300;
	hot_chocolate.ounces=8;
	
	cout<<"Calories per ounce: "<<hot_chocolate.cal_per_ounce()<<endl;
	
	MenuItem *ptr;					//Normalde sadece MenuItem class'�na ait olan objeleri g�sterebilir.
	ptr=&hot_chocolate;				//Fakat burada drinks class'�na ait bir objeyi g�steriyor. 
	
	ptr->print();
	return 0;
}
