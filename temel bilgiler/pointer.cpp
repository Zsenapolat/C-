#include <iostream>
#include <string>

using namespace std;

int main(){
	int *ptr;
	int a=5;
	ptr=&a;
	
	cout<<&ptr<<endl;			//Pointer'�m�z�n bulundu�u adres.
	cout<<ptr<<endl;			//Pointer'�m�z�n g�sterdi�i adres.
	cout<<&a<<endl;				//Pointer'�m�z�n g�sterdi�i adres yani a de�i�keninin adresi.
	return 0;
}
