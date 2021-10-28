#include <iostream>
using namespace std;
 
class Car{
	public: 
		unsigned int id;
		string brand;
		string model;
		
		void getData();
};
 
void Car::getData(){
	cout<<"ID: "<<id<<", marka: "<<brand<<", model: "<<model<<" Konstruktor Domyœlny"<<endl;
}
 
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
 	
 	Car fiat{10,"Fiat",};
 	fiat.getData();
 	Car fiat1{10,"Fiat","126p"};
 	fiat1.getData();
 	
	return 0;
}
