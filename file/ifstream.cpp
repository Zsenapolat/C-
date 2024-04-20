#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream outFile("file2.txt");		//file2 ad�nda bir dosya olu�turduk ve i�erisine a�a��daki de�erleri girdik.
	outFile << 3 <<endl;
	outFile << 4 <<endl;
	outFile << 5 <<endl;
	outFile << 6 <<endl;
	outFile << 7 <<endl;
	outFile.close();
	
	ifstream inFile("file2.txt");		//ifstream objesi olu�turuyoruz. Daha �nceden varolan bir dosyay� okumak i�in kullan�l�r.				
	int x;								//Bir x de�i�keni olu�turduk. Bu de�i�ken s�ras�yla dosyadaki b�t�n integer'lar�n de�erini alacak. Her seferinde
	while(!(inFile.eof())){				//ekrana yazd�racak. eof komutu sayesinde dosyan�n sonuna gelip gelmedi�imizi ��renebiliriz. E�er geldiysek "true" d�nd�r�r.
		inFile >> x ;
		cout << x << endl;
	}
	/*
	string a;							//E�er string alacaksak bo�luklar� biti� olarak almamas� i�in getline komutunu kullanmam�z gerekir.
	getline(inFile,a);
	*/
	inFile.close();
	return 0;
}
