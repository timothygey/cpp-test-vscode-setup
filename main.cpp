#include <iostream>
#include <limits>
#include <string>

int main() {
    double a, b;
    std::string op;

    std::cout << "Simple Console Calculator" << std::endl;
    std::cout << "Operators: + | - | *  |  Enter 'q' to quit" << std::endl;
    std::cout << std::string(45, '-') << std::endl;

    while (true) {
        std::cout << "\nEnter first number: ";
        std::cin >> a;

        if (std::cin.fail()) {
            std::cin.clear();
            std::string token;
            std::cin >> token;
            if (token == "q" || token == "Q") {
                std::cout << "Goodbye!" << std::endl;
                break;
            }
            std::cout << "Error: Invalid number input. Please try again." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cout << "Enter operator (+, -, *, q to quit): ";
        std::cin >> op;

        if (op == "q" || op == "Q") {
            std::cout << "Goodbye!" << std::endl;
            break;
        }

        std::cout << "Enter second number: ";
        std::cin >> b;

        if (std::cin.fail()) {
            std::cout << "Error: Invalid number input. Please try again." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (op == "+") {
            std::cout << "Result: " << a << " + " << b << " = " << (a + b) << std::endl;
        } else if (op == "-") {
            std::cout << "Result: " << a << " - " << b << " = " << (a - b) << std::endl;
        } else if (op == "*") {
            std::cout << "Result: " << a << " * " << b << " = " << (a * b) << std::endl;
        } else {
            std::cout << "Error: Invalid operator '" << op << "'. Please use +, -, or *." << std::endl;
        }
    }

    return 0;
}
