#include <iostream>

using namespace std;

class school {
    public:
        static string s_school;
        static string s_jobPosition;

        string name;
        string surname;
        
        void getData();
        void setNameSurname(string name, string surname);
};

string school::s_school="CDV";
string school::s_jobPosition="Student";

void school::getData(){
    cout<<"\nImie i nazwisko: "<<name<<" "<<surname;
}

void school::setNameSurname(string name, string surname){
    school::name=name;
    school::surname=surname;
}


int main(int argc, char** argv){
    
    setlocale(LC_CTYPE, "polish");
    cout<<school::s_school;
    
    school kowal;
    kowal.setNameSurname("Janusz", "Kowal");
    kowal.getData();
    school::s_jobPosition="Wykładowca";
    cout<<"\n"<<school::s_jobPosition<<endl;
    kowal.s_jobPosition="Dziekan";
    cout<<"\n"<<school::s_jobPosition<<endl;
    return 0;
}