#include <iostream>
#include <string>

using namespace std;
					//Const anahtar kelimesi kullan�larak tan�mlanan bir de�i�kenin ya da array'in herhangi bir eleman�n�n de�erini daha sonradan de�i�tiremeyiz.
void printArray(const int *ptr1,const int *ptr2){	//Array'imizin elemanlar�n� const yapt�k.
													//*(ptr1+1)=2; yazamay�z. ��nk� buradaki parametre yaz�m�nda array'imizin sadece 2. ve 5. eleman�n� de�il,
													//b�t�n elemanlar�n� const yapm�� olduk.
	for(;ptr1!=ptr2;ptr1++){	
		cout<<*ptr1<<endl;							//Bu �ekilde hata almay�z. ��nk� const bir pointer tan�mlad���m�zda sadece g�sterdi�i adresteki de�er de�i�emez.
													//Pointer'�n g�sterdi�i adres de�i�ebilir.
	}
} 
int main(){
	int x;
	int *p1=&x;				//Daha sonradan pointer'�n g�sterdi�i adres de, i�indeki de�er de de�i�tirilebilir.
	const int *p2=&x;		//Daha sonradan pointer'�n g�sterdi�i adres de�i�tirilebilir ama i�indeki de�er de�i�tirilemez.
	int *const p3=&x;		//Daha sonradan pointer'�n g�sterdi�i adres de�i�tirilemez ama i�indeki de�er de�i�tirilebilir.
	const int *const p4=&x;	//Daha sonradan pointer'�n g�sterdi�i adres de, i�indeki de�er de de�i�tirilemez.
	
	
	int array[]={1,2,3,4,5};	
	printArray(array+1,array+4);
	array[2]=5;				//Burada array'in eleman�n� de�i�tirebiliriz. ��nk� sadece fonksiyon i�erisinde elemanlar� const yapt�k.				
	return 0;
}
