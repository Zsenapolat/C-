#include <iostream>

using namespace std;
//�ki t�r� vard�r. By Value ve By reference.

void test1(int a, int b){	//Pass by value. Burada a ve b diye iki tane de�i�ken olu�turduk ve fonksiyon �a�r�ld���nda c ve d de�i�kenlerini kopyalayacaklar.
	a = a+b;
	cout<<a<<" "<<b<<endl;
}

void test2(int *a, int b){	//Pass by value (pointers 1). a de�i�kenimiz bir pointer. b de�i�kenimiz ise normal de�i�ken. �kisi de local variablelar. 
	int y=7;				//y diye bir local variable olu�turduk ve buna 7 de�erini verdik.
	a=&y; 					//a pointer'�m�z y'nin adresini g�steriyor. Art�k *a=7 olmu� oldu.                         
}


void test3(int *a, int b){	//Pass by value (pointers 2)
	int y=7;				
	*a=y; 					//y local variable'�n� a pointer'�n�n de�erine e�itledik. a'n�n g�sterdi�i adres s de�i�keninin adresiydi. Bu y�zden s de�i�keninin
}							//de�eri de�i�mi� oldu. Fonksiyon bittikten sonra a pointer'� ve y de�i�keni silinir.



void test4(int &a, int b){	//Pass by reference. a parametresi bir referans al�yor.
	int y=7;				
	a=y; 					//Fonksiyon bitti�inde a, b ve y de�i�kenleri silinir.
}


int main() {

	int a=4;
	int b=6;
	test1(a,b);						//a ve b, c ve d de�i�kenlerini kopyalad� ve fonksiyon �a�r�ld���nda a ve b i�in i�lem yap�ld�. Bunlar local variable'lar
									//oldu�u i�in fonksiyon �a�r�ld�ktan sonra bellekten silinirler. Herhangi bir yer de i�gal etmezler.
	cout << a << " " << b << endl; 	//Tekrar c ve d'yi yazd�rmak istedi�imizde kendileri silinmedi�i ve de�i�tirilmedi�i i�in kendi de�erleriyle yazd�r�l�rlar.

	int x=4;
	int y=6;
	test2(&x,y);					//x de�i�keninin adresini a pointer'�na atad�k. a pointer'� x'in adresini g�steriyor. Ama fonksiyon �a�r�ld���nda art�k x'in
	cout << x << " " << y << endl; 	//adresini de�il y'nin adresini g�steriyor. Bu y�zden herhangi bir de�i�iklik yap�lmadan a pointer'� da y de�i�keni de 
									//siliniyor. x ve y'nin de�erlerinde herhangi bir de�i�iklik olmaz.
	int s=4;
	int t=6;
	test3(&s,t);					//s'in adresini a pointer'�na g�nderdik. 
	
	cout << s << " " << t << endl; 	//s de�i�keninin de�eri de�i�ti. s=7, t=6
	
	int e=4;						
	int f=6;

	test4(e,f);						//a parametresi bir referans oldu�u i�in e de�i�keniyle ayn� de�er ve adrese sahip. a parametresinde yap�lan de�i�iklikler
	cout << e << " " << f << endl; 	//e de�i�keninde de yap�lacakt�r. En kullan��l� yol budur. ��nk� bellekte herhangi yeni bir de�i�ken olu�turmuyoruz.


	return 0;
}

