#include <iostream>

using namespace std;

class BaseClass{
	public:
		BaseClass(){
			cout<<"Base class constructor."<<endl;
		}
		~BaseClass(){
			cout<<"Base class destructor."<<endl;
		}
		
};

class DerivedClass:public BaseClass{
	public:
		DerivedClass(){
			cout<<"Derived class constructor."<<endl;
		}
		~DerivedClass(){
			cout<<"Derived class destructor."<<endl;
		}
};
int main(){
	DerivedClass der;							//�nce base class constructor'u sonra derived class constructor'u, ard�ndan derived class destructor'u, en son
												//base class destructor'u �al��t�r�l�r.

	return 0;
}
