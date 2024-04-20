#include <iostream>
#include <string>

using namespace std;
								//Belle�imizde gereksiz yer i�galini �nlemek i�in kullan�r�z.
int main(){
	int age=10;
	
	cout<<sizeof(age)<<endl;	//Sizeof operat�r� veri yap�m�z�n bellekte ne kadar yer kaplad���n� g�sterir.
								
	int *ptr1= new int;			//Burada new anahtar kelimesiyle birlikte pointer'�m�za g�stermesi i�in bir integer'l�k yer ay�rm�� olduk.
	*ptr1=5;
	
	cout<<ptr1<<endl;			
	cout<<&ptr1<<endl;
	
	delete ptr1;					//E�er ptr'nin g�sterdi�i t�m alanlar� belle�e geri vermek istiyorsak delete anahtar kelimesini kullan�r�z.
	
	cout<<ptr1<<endl;			//Yukarda asl�nda pointer'�m�z� silmedik. Sadece pointer'�m�z�n g�sterdi�i adresi belle�e geri verdik.	
	cout<<&ptr1<<endl;			//Fakat pointer hala ayn� adresi g�stermeye devam eder. Bu adrese yeni bir de�er atayabiliriz.
	
	
	int *ptr2 = new int[5];		//Burada 5 integer'l�k yer ay�rm�� olduk.
	
	for(int i=0;i<5;i++){
		cin>>ptr2[i];
	}
	
	for (int i=0;i<5;i++){
		cout<<ptr2[i]<<endl;
	}
	
	delete [] ptr2;				//Ba��na k��eli parantez koydu�umuzda ptr2 i�in ayr�lan b�t�n adresleri belle�e geri vermi� oluruz.
	
		for (int i=0;i<5;i++){	//Tekrardan adreslerdeki de�erleri yazd�rmak istedi�imizde garbage de�erler al�r�z.
		cout<<ptr2[i]<<endl;
	}
		
	int *ptr3 = new int[3];
	
	for(int i=0;i<3;i++){
		cin>>ptr3[i];
	}
	
	cout<<&(ptr3[2])<<endl;
	
	for (int i=0;i<3;i++){
		cout<<ptr3[i]<<endl;
	}
	
	delete ptr3;				//[] koymad���m�zda da ayn� sonucu al�r�z. Ne olur ne olmaz parantez koy.
	
	for (int i=0;i<3;i++){
		cout<<ptr3[i]<<endl;
	}
	
	cout<<&(ptr3[2])<<endl;		//Pointer'�n g�sterdi�i 3. eleman�n adresi de�i�medi. Sadece de�eri de�i�ti.
	return 0;
}
