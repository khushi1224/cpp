//
// Created by khushi on 12/10/2023.
//
//
// Created by khushi on 12/10/2023.
//
#include <iostream>
using namespace std;

class School {
public:
    int a;
    string n;
public:
    void name() {
        cout << "Name ->" << n << endl;
    }

    void age() {
        cout << "Age ->" <<a<< endl;
    }
};

class C10 : public School {
public:
    string section;
public:
    void sec() {
        cout << "Section ->" <<section<<endl;
    }
};

int main() {
    C10 c1;
    c1.a = 10;
    c1.n="khushi";
    c1.section = "a";
    c1.age();
    c1.name();
    c1.sec();
    return 0;
}