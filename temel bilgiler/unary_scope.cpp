#include <iostream>
#include <string>

using namespace std;		//Bunu kullanmak yerine her sat�r�n ba��na std:: yazabiliriz.
							//Global variable'lar fonksiyon d���nda tan�mlan�r ve program i�indeki b�t�n fonksiyonlar taraf�ndan eri�ilebilir.
							//Local variable'lar fonksiyon i�inde tan�mlan�r ve sadece o fonksiyon i�inde kullan�labilir.
				
int x=2; 					//Global variable
int main(){
	int x=4;				//Local variable
	
	cout<<x<<endl;			//Burada 4 ��kt�s�n� al�r�z. ��nk� local variable'�n �nceli�i vard�r. E�er global variable ��kt�s� almak istiyorsak;
	cout<<::x<<endl;		//Yazmal�y�z.
	return 0;
}
