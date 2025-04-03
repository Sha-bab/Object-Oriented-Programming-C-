#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Student Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Dynamic allocation of an object
    Student* s1 = new Student("Alice", 20);
    s1->display();

    delete s1; // Free memory
    return 0;
}
