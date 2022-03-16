#include <iostream>
using namespace std;
struct Persona {
    string name;
    int age;
};
int main(){
    Persona persona1;
    cout << "Enter your name: ";
    getline(cin, persona1.name);
    cout << "Enter your age : ";
    cin >> persona1.age;
    
    cout << "name :" << persona1.name << endl;
    cout << "age : " << persona1.age << endl;;

    return 0;

}