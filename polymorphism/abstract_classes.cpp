#include <iostream>

using namespace std;

class Shape{
	public:
		double virtual area() = 0;
		
		virtual ~Shape() = 0;
		
};

Shape::~Shape(){						//Pure virtual destructor'lar abstract class'lar�n d���nda eklenmelidir. Yoksa �al��maz. 
	cout<<"Shape destructor"<<endl;
}

class Square : public Shape {
	public:
		int side1;
		Square(int side1) : side1(side1){}
		
		double area(){
			return side1*side1;
		}
		
		~Square(){								//Square ve triangle class'lar� shape destructor'�n� override etmeseler de concrete class olurlar. ��nk�
			cout<<"Square destructor"<<endl;	//default destructor'lar� vard�r.
		}
};

class Triangle : public Shape {
	public:
		int side1;
		int side2;
		Triangle(int side1 , int side2) : side1(side1), side2(side2){}
		
		double area(){
			return 0.5*side1*side2;
		}
		
		~Triangle(){
			cout<<"Triangle destructor"<<endl;
		}
};
int main(){
	Shape* shapes[]={
	new Square(5),
	new Triangle(3,4)
	};
	
	for(int i=0 ; i<2 ; i++){
		cout<<shapes[i]->area()<<endl;
	}
	
	for(int j=0 ; j<2 ; j++){
		delete shapes[j];
	}
	return 0;
}
