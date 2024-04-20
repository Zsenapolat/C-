#include <iostream>

using namespace std;

int main(){
	int a = 5;
	cout<<"a'n�n adresi: "<<&a<<endl;
	cout<<"a'n�n de�eri: "<<a<<endl;
	
	int* ptr;	
	ptr=&a;
	cout<<"ptr'nin yeni adresi: "<<ptr<<endl;
	cout<<"ptr'nin yeni de�eri: "<<*ptr<<endl;
	
	int& ref = a;
	cout<<"ref'in adresi: "<<&ref<<endl;				//Referans'�n adresi art�k a'd�r. Yani a ve ref asl�nda ayn� de�i�kendir. �ki isimle de �a�r�labilirler.
	cout<<"ref'in de�eri: "<<ref<<endl;
	return 0;
}
