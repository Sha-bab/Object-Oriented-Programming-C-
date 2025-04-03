#include <iostream>
using namespace std;

class Student {
protected:
    int rollNumber;

public:
    void setRollNumber(int r) {
        rollNumber = r;
    }
    void getRollNumber() {
        cout << "Student Roll Number: " << rollNumber << endl;
    }
};

class Marks : public Student {
protected:
    float mathMarks, physicsMarks;

public:
    void setMarks(float m1, float m2) {
        mathMarks = m1;
        physicsMarks = m2;
    }
    void displayMarks() {
        cout << "Mathematics Score: " << mathMarks << endl;
        cout << "Physics Score: " << physicsMarks << endl;
    }
};

class Result : public Marks {
public:
    void displayResult() {
        getRollNumber();
        displayMarks();
        cout << "Overall Percentage: " << (mathMarks + physicsMarks) / 2 << "%" << endl;
    }
};

int main() {
    Result student;
    student.setRollNumber(1539);
    student.setMarks(97, 88);
    student.displayResult();
    return 0;
}
