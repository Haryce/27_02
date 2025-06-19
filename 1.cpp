#include <iostream>
#include <string>
using namespace std;

class Worker {
public:
    string name;
    int age;
    char gender;
    int experience;
    int company_service;
    double salary;
    void input() {
        cin >> name >> age >> gender >> experience >> company_service >> salary;
    }
    void output() {
        cout << name << " " << age << " " << gender << " " << experience << " " << company_service << " " << salary << endl;
    }
    bool retirement_time() {
        if (gender == 'F' && age >= 60) return true;
        if (gender == 'M' && age >= 65) return true;
        return false;
    }
};
int main() {
    Worker w;
    w.input();
    w.output();
    if (w.retirement_time()) 
        cout << "Пора на пенсию" << endl;
    else
        cout << "Еще рано" << endl;
    return 0;
}
