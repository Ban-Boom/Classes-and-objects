#include <iostream>
#include <string>

class Counter {
private:
    int value;

public:
    Counter(int initialValue = 1) : value(initialValue) {}

    void increment() {
        value++;
    }

    void decrement() {
        value--;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    std::string choice;
    std::cout << "Do you want to specify the initial value of the counter? Enter yes or no: ";
    std::cin >> choice;

    int startValue = 1;
    if (choice == "yes") {
        std::cout << "Enter the initial value of the counter: ";
        while (!(std::cin >> startValue)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Mistake! Enter an integer: ";
        }
    }

    Counter counter(startValue);

    while (true) {
        std::string command;
        std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
        std::cin >> command;

        if (command == "+") {
            counter.increment();
        }
        else if (command == "-") {
            counter.decrement();
        }
        else if (command == "=") {
            std::cout << counter.getValue() << std::endl;
        }
        else if (command == "x") {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
        else {
            std::cout << "Wrong team! Try again." << std::endl;
        }
    }

    return 0;
}
