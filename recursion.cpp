#include <iostream>

double power(double x, int n) {
    if (n == 0) {
        return 1;
    } else if (n < 0) {
        return 1 / power(x, -n);
    } else {
        return x * power(x, n - 1);
    }
}

int main() {
    std::cout << power(2, 3) << std::endl;   // Вывод: 8
    std::cout << power(2, -2) << std::endl;  // Вывод: 0.25
    return 0;
}

