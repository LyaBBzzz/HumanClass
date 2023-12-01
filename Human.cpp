#include <iostream>
#include <string>
using namespace std;

class Human {
protected:
    string name;
    string surname;
    int age;
    string gender;

public:
    Human(const string& n, const string& s, int a, const string& g)
        : name(n), surname(s), age(a), gender(g) {}

};

int main() {

    return 0;
}
