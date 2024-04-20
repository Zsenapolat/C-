#include <iostream>
#include <string>

using namespace std;
class Employee{							
	private:
		int age;
		int salary;
	
	public:
		Employee(){					
			age=0;
			salary=0;
		}
		Employee(int age){				
			this->age=age;
				
		}
		Employee(int age, int salary){	
			this->age=age;
			this->salary=salary;		
		}
		
		int getAge(){
			return age;
		}
		int getSalary(){
			return salary;
		}
		void showInfos(){				
			cout<<age<<endl;
			cout<<salary<<endl;

		}
};
void samp(Employee* emp){				//Pointer parametre olu�turuyoruz.
	emp->showInfos();
}
int main(){
	Employee employee1(35,3000);
	samp(&employee1);					//Olu�turdu�umuz objeyi samp fonksiyonunun i�ine g�nderdik ama pointer kullanmadan g�nderdi�imiz i�in
										//t�pk� de�i�kenlerde oldu�u gibi fonksiyonumuz i�in ayr� bir obje daha olu�turmu� oluyoruz. 
										//Girdi�imiz employee1 objesini kopyalay�p emp objesi olu�turuyoruz. Bu da gereksiz bellek harcamam�za neden oluyor.
										//Bu y�zden objeyi de�il objenin adres bilgisini g�nderiyoruz. Direkt olarak objenin kendisine fonksiyonumuz �zerinden
										//ula��p ekrana bu �ekilde yazd�r�yoruz.
										
	return 0;
}
