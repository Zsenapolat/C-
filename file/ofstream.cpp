#include <iostream>
#include <fstream> 				//ifstream ve ofstream'i kullanabilmek i�in ekliyoruz.
using namespace std;

int main(){											//ofstream dosya olu�turma i�lemi i�in kullan�l�r.
	ofstream outFile("file3.txt", ofstream::app);	//Bir ofstream objesi olu�turuyoruz ve isim veriyoruz. Bu �ekilde yazarsak a�a��da yaz�lanlar� her a�t���m�zda
													//ekleyecektir.
	if (outFile.fail()){							//E�er dosya a��l�rken hata olursa bu mesaj� yazd�raca��z.
		cout<<"ERROR"<<endl;				
		return 1;
	}
	if ( outFile.is_open() ){						//is_open komutu ile dosyan�n a��k olup olmad���n� kontrol edebiliriz.
    outFile << 3 << endl;
  }
	outFile << "content" << endl;				//Bu dosyay� her a�t���m�zda bu yaz� tekrar yaz�lmayacak. E�er daha �nceden yaz�lm��sa ayn� �ekilde duracak. E�er
												//yaz�lmam��sa bu sefer yazacak.
	
	outFile.close();
	return 0;
}
