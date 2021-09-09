#include <iostream>
using namespace std;
class rectangle {
public:
	int a;
	int b;
	float Pole();
	float Obwod();
	void showObwod();
	void showPole();
};

void rectangle::showObwod() {
	cout << (a + b) * 2 <<endl;
}
void rectangle::showPole() {
	cout << a * b << endl;
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	rectangle prostokat;
	prostokat.a = 4;
	prostokat.b = 6;
	prostokat.showObwod();
	prostokat.showPole();
	return 0;
}
