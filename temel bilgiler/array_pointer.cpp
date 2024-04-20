#include <iostream>
#include <string>

using namespace std;
						/*
						TANIMLAMA �EK�LLER�
						1) int ary[10];  
						2) int ary[5]={1,2,3,4,5};
						3) int ary[]={1,2,3,4,5};
						4) int matris[2][3]={{1,2,3},{4,5,6}};   //�lk k�s�m sat�r, son k�s�m s�tun olarak d���n�lebilir.
						
						Array boyutundan fazla de�er giremezsin ama eksik de�er girebilirsin.
						*/
						
void printArray(int *p, int size){		//Pointer parametreye bir array atarsak pointer o array'in yerini al�r.
	for (int i=0; i<size; i++){
		cout << i << "indexindeki deger: "<< *(p+i)<< endl;
	} 
}



void printArry(int array[], int size){	//Burada parametre olarak tan�mlad���m�z array'in i�ine boyut de�erini girmemize gerek yok. (array[]=a) 
										//a array'i ile parametre olan array'in adresini e�itledik. Fonksiyonun i�erisinde de bu de�erleri s�ras�yla giriyoruz. 
	for (int i=0; i<size; i++){
		cout << i << "indexindeki deger: "<< array[i] <<endl; //ya da *(array+i);
	}
}



int main(){
	int array[]={1,2,3,4,5};
	
	cout<<array[5]<<endl; //Garbage de�er al�r�z ��nk� array i�erisinde tan�mlanmayan bir index de�eri girdik.
	int ar[3]={1,2};	  //Eksik eleman girebiliriz. 3. eleman i�in bellekte yer ayr�lm�� olur.
	
	cout << array <<endl; //Array'in ba�lang�� adresi ��kt�m�z olur. Burada array pointer de�il, ba�lang�� adresini ta��yan bir de�i�kendir.
	cout << array+1 <<endl; //Bir sonraki eleman�n adresi ��kt�m�z olur.
	
	int a[]={1,2,3,4,5};   //Bu array'in de�erlerini s�ras� ile ekrana yazd�rmak istersek �stte tan�mlanan gibi iki fonksiyon yazabiliriz.
	printArray(a,5);
	printArry(a,5);
	
	int c=3;
	int *ptr=&c;

	cout<<ptr[0]<<endl;
	cout<<ptr[1]<<endl;		//E�er pointer'� bir array'in adresine e�itlemediysek ptr[0] yaz�m�ndan pointer'� e�itledi�imiz de�i�kenin de�erini,
							//ptr[1],ptr[2] gibi yaz�mlardan ise 1,2... ��kt�lar�n� al�r�z.
	
	int *d=&(c+1);			//E�er c de�i�keninin adresinden bir sonraki adrese bir de�er atamak istiyorsak (&c+1)=4; bu �ekilde yazamay�z. 
	*d=4;					//Bu i�lemi bir pointer'la yapmam�z gerekir.
	
	cout<<ptr[1]<<endl;		//Burada ise pointer'� array gibi kullanabiliriz. ��nk� bir sonraki elemana bir de�er atad�k. Bir �nceki �rnekte bu eleman bo�tu.			
	
	return 0;
}
