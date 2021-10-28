#include <iostream>
 
using namespace std;
 
class Rectangle {
private:
    double sideA;
    double sideB;
 
public:
    Rectangle();
    Rectangle(double pSideA, double pSideB);
    Rectangle(const Rectangle&);
 
    void catchSide(double&, double&);
    void setSides(double, double);
    double Area();
    double circuit();
};
 
Rectangle::Rectangle() {
    cout << "konstruktor domyœlny" << endl;
};
 
Rectangle::Rectangle(double pSideA, double pSideB) {
    sideA = pSideA;
    sideB = pSideB;
    cout << "konstruktor parametryczny" << endl;
};
 
Rectangle::Rectangle(const Rectangle& model) {
    sideA = model.sideA;
    sideB = model.sideB;
 
    cout << "konstruktor kopuj¹cy" << endl;
};
 
void Rectangle::catchSide(double &pSideA, double &pSideB) {
    sideA = pSideA;
    sideB = pSideB;
};
void Rectangle::setSides(double pSideA, double pSideB){
	sideA=pSideA;
	sideB=pSideB;
};
double Rectangle::Area(){
	return sideA*sideB;
};
double Rectangle::circuit(){
	return 2*sideA+2*sideB;
};

Rectangle copyRectangle(Rectangle rectangle){
	return rectangle;
}

int main(int argc, char** argv)
{
    setlocale(LC_CTYPE, "polish");
 
 	double a=10.5, b=2;
 	cout<<"Pierwszy prostok¹t: "<<endl;
 	Rectangle prostokat1(2,4);
	prostokat1.catchSide(a,b); 	
 	cout<<"Bok a: "<<a<<endl;
 	cout<<"Bok b: "<<b<<endl;
 
 	cout<<"Drugi prostok¹t: "<<endl;
 	Rectangle prostokat2=prostokat1;
 	prostokat2.catchSide(a,b);
 	cout<<"Bok a: "<<a<<endl;
 	cout<<"Bok b: "<<b<<endl;
 	
 	cout<<"Trzeci prostok¹t: "<<endl;
 	Rectangle prostokat3(prostokat1);
 	prostokat3.catchSide(a,b);
 	cout<<"Bok a: "<<a<<endl;
 	cout<<"Bok b: "<<b<<endl;
 	
 	cout<<"Czwarty prostok¹t: "<<endl;
 	Rectangle prostokat4;
 	prostokat4= copyRectangle(prostokat1);
 	prostokat4.catchSide(a,b);
 	cout<<"Bok a: "<<a<<endl;
 	cout<<"Bok b: "<<b<<endl;
 	
    return 0;
}
