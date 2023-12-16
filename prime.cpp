#include <iostream>
#include <cmath>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    } else if (n == 2) {
        return true;
    } else if (n % 2 == 0) {
        return false;
    } else {
        // Check divisibility from 3 to the square root of n
        for (int i = 3; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    // Example usage
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (is_prime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}
