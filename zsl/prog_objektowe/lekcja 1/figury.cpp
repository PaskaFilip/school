#include <iostream>
using namespace std;
class rectangle{
public:		
	float a,b;
	float Pole(float a, float b);
	float Obwod(float a, float b);
	void showObwod();
	void showPole();
};

	void rectangle::showPole(){
		return a*b;
	}
	void rectangle::showObwod(){
		return (a+b)*2;
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	rectangle prostokat;
	prostokat.showObwod();
	prostokat.showPole();
	return 0;
}
