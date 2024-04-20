#include <iostream>

using namespace std;

class CommonBaseClass{
	public:
		int common_value;
		int m;
		CommonBaseClass(){
			cout<<"CommonBaseClass default"<<endl;
			common_value=10;
		}
		CommonBaseClass(int common_val){
			cout<<"CommonBaseClass param"<<endl;
			common_value=common_val;
			cout<<common_val<<endl;
		}
};
class BaseClass1 :public virtual CommonBaseClass{
	public:
		int base1_value;
		
		BaseClass1():CommonBaseClass(80){
			cout<<"BaseClass1 default"<<endl;
		}
		BaseClass1(int base1_val){
			cout<<"BaseClass1 param"<<endl;
			base1_value=base1_val;
			cout<<base1_val<<endl;
		}
};
class BaseClass2 : public virtual CommonBaseClass{
	public:
		int base2_value;
		
		BaseClass2():CommonBaseClass(15){
			cout<<"BaseClass2 default"<<endl;
		}
		BaseClass2(int base2_val){
			cout<<"BaseClass2 param"<<endl;
			base2_value=base2_val;
			cout<<base2_val<<endl;
		}
};
class DerivedClass:public BaseClass1, public BaseClass2{
	public:
		int derived_value;
		
		DerivedClass(){										//Constructor tercihi yapmak istedi�imizde class1():class2()
			cout<<"DerivedClass default"<<endl;
			BaseClass2::CommonBaseClass();					//DerivedClass'�n default constructor'u �a�r�ld���nda commonbaseclass'�n default'u da tekrar �a�r�l�r.
		}
		DerivedClass(int derived_val){		
			cout<<"DerivedClass param"<<endl;
			derived_value=derived_val;
			cout<<derived_val<<endl;
		}
};
int main(){
	DerivedClass derivedclass1;			//Kendi default constructor'�n� kullanmak i�in baseclasslar�n�n constructor'lar�n� kulland�. Onlar da commonbase'inkini
										//kulland�. Commonbase'in default'u common_value'yu 10 olarak ayarlad�. Di�erleri de kendi default constructor'lar�yla
										//bu de�eri de�i�tirmeye �al��t�. Ancak ge�erli olan commonclass'�nkidir.  
										//Ama virtual olarak yazd���m�zda tekrardan commonclass'a u�ramaz.
											
	DerivedClass derivedclass2(5);
	
	derivedclass1.common_value=6;		//Bu �ekilde �a��rd���m�zda hangi base class'tan commonbaseclass'a gidece�ini bilemedi�i i�in hata verir. Bunu 
										//�nlemek i�in base class'lara commonbaseclass'� virtual olarak ekleriz.
											
	derivedclass1.m=3;					//Burada b�t�n class'lar�m�zda m de�i�keni var. Fakat derived class i�erisinde bunu override etti�imiz i�in derived
										//�zerinden i�lem yapar. E�er derived'da olmasayd� di�erlerinin hepsinde olsayd� hata verirdi. Belirtmemiz gerekirdi.
										//E�er hi�birinde yoksa sadece commonbaseclass i�inde varsa onu de�i�tirirdi.
	
	derivedclass1.BaseClass1::m=4;		//Bu �ekilde ayarlayabiliriz.		Bir class'�n de�erini de�i�tirmek i�in class1.class2::m=?
	
	
	return 0;
}
