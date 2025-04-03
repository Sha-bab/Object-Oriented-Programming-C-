#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "The animal makes a sound." << endl;
    }
};

class Dog : public Animal
{
public:
    void speak() override
    {
        cout << "The dog barks." << endl;
    }
};

int main()
{
    Animal *animal_ptr;  // Pointer to base class
    Animal animal_obj;   // Base class object
    Dog dog_obj;         // Derived class object
    
    animal_ptr = &dog_obj;  // Pointing base class pointer to derived class object
    animal_ptr->speak();    // Calls the derived class function

    return 0;
}
