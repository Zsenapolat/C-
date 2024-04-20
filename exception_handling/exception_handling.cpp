#include <iostream>

using namespace std;
									//Hatalar s�n�flar taraf�ndan temsil edilir. Hata a��s�ndan izlemek istedi�imiz kodlar� try blo�una yazmal�y�z. 
									//Try blo�u i�erisinde bir hata olu�ursa bu hata f�rlat�l�r. F�rlat�lan hatay� catch blo�u yakalar.
int main () {
	try {
		int a,b;					//Mesela 2 ve 1 girersek catch blo�una u�ramayacak. 2/1 = 2 yazd�racak ve kod sat�r�na devam edecek.
									//E�er 2 ve 0 girersek catch blo�una 2 de�erini g�nderecek ve buna uygun ��kt� verecek. Ard�ndan kod sat�r�na devam edecek.
		cin >>a >>b;

		if ( b==0) throw(2);		//E�er b'ye 0 de�erini girersek program catch blo�una atlayacak. cout'u yazd�rmayacak.
		cout << a/b << endl;
		
	} catch (int t){ 
		cout << "Exception=" << t << endl;
	}

	cout << "After try-catch" << endl;
	
	int divErr=2;
	try {
	    int c,d;
	    cin >>c >>d;
	    if ( c==100) throw('A'); 
	    if ( c==1000) throw(3.4); 
	    if ( d==0) throw(divErr); 
	    cout << c/d << endl;
	} catch (int t){
		cout << "Exception=" << t << endl;
	} catch (char t){
		cout << "A=100" << endl;
	} catch (double t){
		cout << "A=1000" << endl;
	}catch (...) { 								//else gibi d���nebiliriz.
		cout << "General Exception" << endl;
	}

	cout << "After try-catch" << endl;
}



