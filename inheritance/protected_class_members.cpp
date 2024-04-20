#include <iostream>

using namespace std;

class BaseClass{
	public:
		int public_member;
	private:
		int private_member;				//private member'lara derived class dahil hi�bir yerden ula��lamaz.
	protected:
		int protected_member;			//protected member'lara ise derived class eri�ebilir ama program�n geri kalan� eri�emez.
};

class DerivedClass : public BaseClass {
	public:
		void member_function(){
			public_member=0; 	
			protected_member=5;								//Fakat sadece class i�erisinden eri�ilebilir. Ayn� private member'lar gibi.
				
			cout<<"public_member: "<<public_member<<endl;
			cout<<"protected_member: "<<protected_member<<endl;
		}
};

class AnotherClass : public DerivedClass{					//Ayn� �ekilde derived class'tan derive edilmi� class'lar da protected class'lara eri�ebilir.
	public:
		void member_function(){
			public_member=3; 	
			protected_member=6;								
				
			cout<<"public_member: "<<public_member<<endl;
			cout<<"protected_member: "<<protected_member<<endl;
		}
};
int main(){
	DerivedClass derived;
	derived.member_function();
	
	AnotherClass anotherderived;
	anotherderived.member_function();
	return 0;
}
