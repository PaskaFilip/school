#include <iostream>
using namespace std;
 
class Car{
	public: 
		unsigned int id;
		string brand;
		string model;
		
		void getData();
		
		Car();
		Car(unsigned int id,string brand,string model);
};
 
void Car::getData(){
	cout<<"ID: "<<id<<", marka: "<<brand<<", model: "<<model<<endl;
}

Car::Car():
	id{12},
	brand{"Matiz"},
	model{"Matiz"}
	{
	cout<<" Konstruktor Domy?lny";
	}

Car::Car(unsigned int pId,string pBrand,string pModel):
	id{pId},
	brand{pBrand},
	model{pModel}
	{
	cout<<" Konstruktor Parametryczny";
	}
 
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
 	
 	Car fiat;
 	fiat.getData();
 	
 	Car porshe(8,"Porshe","911");
 	porshe.getData();
 	
	return 0;
}
