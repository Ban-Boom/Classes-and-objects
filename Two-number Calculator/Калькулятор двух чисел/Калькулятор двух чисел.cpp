#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    Calculator() : num1(0), num2(1) {}

    bool set_num1(double n) {
        if (n != 0) {
            num1 = n;
            return true;
        }
        return false;
    }

    bool set_num2(double n) {
        if (n != 0) {
            num2 = n;
            return true;
        }
        return false;
    }

    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; }
    double subtract_1_2() { return num1 - num2; }
    double subtract_2_1() { return num2 - num1; }
    double divide_1_2() { return num1 / num2; }
    double divide_2_1() { return num2 / num1; }
};

int main() {
    Calculator calc;
    double n1, n2;

    while (true) {
        cout << "Enter num1: ";
        cin >> n1;
        cout << "Enter num2: ";
        cin >> n2;

        if (!calc.set_num1(n1) || !calc.set_num2(n2)) {
            cout << "Incorrect input!" << endl;
            continue;
        }

        cout << "num1 + num2 = " << calc.add() << endl;
        cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
        cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
        cout << "num1 * num2 = " << calc.multiply() << endl;
        cout << "num1 / num2 = " << calc.divide_1_2() << endl;
        cout << "num2 / num1 = " << calc.divide_2_1() << endl;
    }
    return 0;
}