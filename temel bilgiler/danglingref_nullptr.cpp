#include <iostream>
#include <string>

using namespace std;

int main(){
	int *r=NULL;	//E�er pointer'�m�z�n hi�bir adresi i�aret etmesini istemiyorsak null pointer olarak ayarlayabiliriz.
					//Bir pointer'� bu �ekilde ba�latmak �ok daha g�venlidir. 
					
	cout << r << endl;	//B�yle yazd���m�zda 0 de�erini al�r�z.
					
	r=new int;		//Pointer'�m�z i�in 1 integer'l�k yer ay�r�yoruz.
	*r=10;			//Bu yere 10 de�erini at�yoruz.
	
	delete r;		//Pointer'�n g�sterdi�i adresi tekrardan belle�e verirsek pointer'�m�z art�k bir "dangling pointer" olur. 
					//Yani belle�e ait olan bir yeri g�stermi� olur. Runtime hatas� al�r�z.
	
	cout<<*r;		
	return 0;
}
