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
        
    string GetName() const { return name; }
    void SetName(const string& n) { name = n; }

    string GetSurname() const { return surname; }
    void SetSurname(const string& s) { surname = s; }

    int GetAge() const { return age; }
    void SetAge(int a) { age = a; }

    string GetGender() const { return gender; }
    void SetGender(const string& g) { gender = g; }
};

int main() {

    return 0;
}
