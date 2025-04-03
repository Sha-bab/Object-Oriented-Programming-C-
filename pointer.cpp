#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    void setData(string n, int r) {
        name = n;
        rollNumber = r;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    // Creating an object dynamically using a pointer
    Student *ptr = new Student;

    // Accessing members using pointer
    ptr->setData("Jhon Doe", 123456);
    ptr->display();

    // Releasing allocated memory
    delete ptr;

    return 0;
}
