#include <iostream>
#include <string>

using namespace std;
							//NOT: cin komutunun sonuna endl yazamazs�n.
int main(){

	string str1;			//Getline komutu sayesinde b�t�n bir c�mleyi kullan�c�dan alabiliriz. Bu komut sadece stringlerde kullan�labilir.
	getline(cin,str1);
	cout << str1 <<endl;

	string str2;
	cin >> str2;			//Bu �ekilde string' i almaya �al���rsak e�er string i�erisinde bo�luk i�eriyorsa bo�luktan sonras�n� almayacakt�r.
	cout << str2 <<endl;	
	
	string str3;			//E�er getline'� cin komutunu kulland�ktan sonra kullan�rsak bir �nceki cin komutunun girdisi ile birle�ecektir.
	getline(cin,str3);		//De�i�ken farkl� bir de�i�ken olsa bile cin i�inde kullan�lan c�mlenin bo�luktan �ncesini yazd�r�p 
	cout << str3 <<endl;	//bo�luktan sonras�n� da ard�ndan yazd�racakt�r. 3. kere girdi almayacakt�r. 
	return 0;				//Bu hatan�n �n�ne ge�ebilmek i�in stringlerde cin komutu yerine getline komutunu kullan.
}

