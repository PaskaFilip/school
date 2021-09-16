#include <iostream>
using namespace std;

struct Date {
	unsigned short int d, m, rrrr;
};

struct User{
	
	string login,password,status,accountType;
	unsigned int id;
	Date dateJoin;	
};

int main(int argc, char** argv){
	setlocale(LC_CTYPE,"polish");
	User user {"admin","1234","online","Premium",42,{1,5,2000}};
	cout <<"Login : "<<user.login<<" \nPassword : "<<user.password<<" \nStatus : "
	<<user.status<<"\nAccount Type : "<<user.accountType<<
	" \nID : "<<user.id
	<<" \nJoin Date "<<user.dateJoin.d<<"-"
	<<user.dateJoin.m<<"-"
	<<user.dateJoin.rrrr<< endl;
	return 0;
}
