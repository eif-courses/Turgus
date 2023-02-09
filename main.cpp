#include <iostream>
#include <vector>
using namespace std;



struct Studentas{
    string studentoID ="s000000";
    string vardas = "NERA";
    int amzius = 99;
    string grupe = "XA";
    Studentas(string id, string name, int age, string group){
        studentoID = id;
        vardas = name;
        amzius = age;
        grupe = group;
    }

};

void SpausdintiStudentuSarasa(vector<Studentas> studentai){
    for (auto stud: studentai) {
        cout << stud.vardas <<" " << stud.grupe <<" " << stud.amzius;
        cout << endl;
    }

}

void StudentoKurimas(vector<Studentas> &studentai){

    string vardas;
    int amzius;
    cout << "\nIveskite varda: ";
    cin >> vardas;
    cout << "Iveskite Amziu: ";
    cin >> amzius;
    studentai.push_back(Studentas("sawee",vardas, amzius,"aawae"));
}



int main() {

    vector<int> duomenys{78,145,55,1,55,4,4};

    Studentas petriukas("s0715545", "Petriukas", 18, "IS22A");
    Studentas onute("s0715545", "Onute", 18, "IS22A");

    vector<Studentas> studentai{};

    studentai.push_back(petriukas);
    studentai.push_back(onute);


    int input = 1;
    while (input != 0) {

        cout << "--------------------MENIU-----------------------\n";
        cout << "1. Atvaizduoti studentus\n";
        cout << "2. Naujo studento kūrimas\n";
        cout << "0. Baigti darbą\n";
        cout << "---------------------------------------------------\n";

        cin >> input;

        //= input;
        switch (input) {
            case 1:
                SpausdintiStudentuSarasa(studentai);
            break;
            case 2:
                StudentoKurimas(studentai);
                break;
            case 0:
                cout << "ISEITI IS PROGRAMOS";
                break;
            default:
                cout << "NENUMATYTAS ATVEJIS";
                break;
        }


        if(input == 1){

        }else if(input == 2){

        }
        else if(input == 3){

        } else if(input == 0){

        }









        //

    }


























    return 0;
}
