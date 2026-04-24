#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 3;
    std::cout << "Hello, C++!" << std::endl;
    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;
    return 0;
}
