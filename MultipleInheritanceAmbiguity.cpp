#include <iostream>
using namespace std;

class greet1
{
    int a;

public:
    void say()
    {
        cout << "How are you?" << endl;
    }
};

class greet2
{
    int b;

public:
    void say()
    {
        cout << "hello" << endl;
    }
};

class greet : public greet1, public greet2
{
    int c;

public:
    void say()
    {
        greet2 ::say(); //  ambiguity
    }
};

int main()
{
    greet obj;
    obj.say();
    return 0;
}
