#include <iostream>
using namespace std;
class Car{
    public:
    int year;
    float price;
    string brand,model,color;
    Car(){
        cout<<"konstruktor domyslny"<<endl;
    };
    
    Car(string nBrand, string nModel, int nYear);
    
    Car(float nPrice,string nColor,string nBrand, string nModel, int nYear);
    
    void showData();
    void createObject();
    
    ~Car(){
        cout<<"Destruktor Wywolany"<<endl;
    };
};

void Car::showData() {
    cout<<"Marka: "<<brand<<"\nKolor: "<<color<<"\nModel: "<<model<<"\nCena: "<<price<<"\nRocznik: "<<year<<endl;
};
void createObject(){
		Car car;
		car.showData();
		cout<<"wywolanie funkcjji createobject"<<endl;
	}
Car::Car(string nBrand, string nModel, int nYear):
    brand {nBrand},
    model {nModel},
    year {nYear}
    {}
Car::Car(float nPrice,string nColor,string nBrand, string nModel, int nYear):
    price {nPrice},
    color {nColor},
    brand {nBrand},
    model {nModel},
    year {nYear}
{}
int main()
{
    
    return 0;
}
