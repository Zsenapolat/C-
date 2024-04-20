#include <iostream>
#include <string>

using namespace std;

class Employee{
	private:
		int age;
	
	public:
		void setAge(int age){
			this->age=age;
		}
		
		int getAge(){
			return age;
		}
};

int main(){
											/*Buradaki i�lemlerin hepsinde bir pointer i�in yer ay�r�yoruz. De�i�ken t�r� ne olursa olsun olu�turulan
											pointer'�m�z�n bellekte kaplad��� alan ayn�d�r. ��nk� biz burada pointer'�m�z�n g�sterdi�i adrese olu�turmak
											istedi�imiz de�i�ken t�r�n�n kaplad��� alan kadar yer ay�rmak istiyoruz. Pointer'�m�za bu de�i�kenin t�r�
											kadar yer ay�rm�yoruz. Yaz�m �ekli olarak pointer'�m�z� olu�tururken g�sterece�i adresteki de�i�ken t�r�yle
											ayn� t�rde yazmam�z gerekiyor.
											*/
	Employee* employee = new Employee;	//Veri tipi burada Employee class'� olur.		
														
	cout<<sizeof(Employee)<<endl;		//Employee class tipinde bir objenin kaplad��� alan 4 byte.		
	cout<<sizeof(employee)<<endl;		//employee objesini i�aret eden pointer'�n kaplad��� alan 8 byte. Pointer'�m�z employee objesinin adresini ta��yor.
	cout<<sizeof(*employee)<<endl;		//employee objesinin kaplad��� alan 4 byte.
	
	cout<<employee<<endl;				//Bu y�zden art�k employee objesini kullan�rken -> i�areti ile kullanmam�z gerekiyor.
										//Pointer'�n g�sterdi�i adres.
	cout<<&employee<<endl;				//Pointer'�n adresi.
	
	int *ptr1 = new int;
	
	cout<<sizeof(int)<<endl;			//Int veri tipinin kaplad��� alan 4 byte.
	cout<<sizeof(ptr1)<<endl;			//Int veri tipinde de�i�keni i�aret eden pointer'�n kaplad��� alan 8 byte. Pointer burada de�i�kenin adresini ta��yor.
	cout<<sizeof(*ptr1)<<endl;			//De�i�kenimizin kaplad��� alan 4 byte.
	
	double *ptr2 = new double;
	
	cout<<sizeof(double)<<endl;			//Double veri tipinin kaplad��� alan 8 byte.
	cout<<sizeof(ptr2)<<endl;			//Double veri tipinde de�i�keni i�aret eden pointer'�n kaplad��� alan 8 byte. Pointer burada de�i�kenin adresini ta��yor.
	cout<<sizeof(*ptr2)<<endl;			//De�i�kenimizin kaplad��� alan 8 byte.
	
	float *ptr3 = new float;
	
	cout<<sizeof(float)<<endl;			//Float veri tipinin kaplad��� alan 4 byte.
	cout<<sizeof(ptr3)<<endl;			//Float veri tipinde de�i�keni i�aret eden pointer'�n kaplad��� alan 8 byte. Pointer burada de�i�kenin adresini ta��yor.
	cout<<sizeof(*ptr3)<<endl;			//De�i�kenimizin kaplad��� alan 4 byte.
	
	char *ptr4 = new char;
	
	cout<<sizeof(char)<<endl;			//Char veri tipinin kaplad��� alan 1 byte.
	cout<<sizeof(ptr4)<<endl;			//Char veri tipinde de�i�keni i�aret eden pointer'�n kaplad��� alan 8 byte. Pointer burada de�i�kenin adresini ta��yor.
	cout<<sizeof(*ptr4)<<endl;			//De�i�kenimizin kaplad��� alan 1 byte.
		
	return 0;
}
