#include <iostream>
using namespace std;

// Inline function to calculate the product of two numbers
inline int product(int a, int b) {
    return a * b;
}

// Function to calculate the received amount with a default interest rate
float moneyReceived(int currentMoney, float rate = 1.06) {
    return currentMoney * rate;
}

int main() {
    int money;
    cout << "Enter the amount of money you have: ";
    cin >> money;

    cout << "With a standard rate, your total amount will be: " << moneyReceived(money) << " tk" << endl;
    cout << "For VIP members, your total amount will be: " << moneyReceived(money, 1.08) << " tk" << endl;

    return 0;
}

