#include <hw01.h>
#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i*i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int hw01(int start, int end) {
    if (start < 10 || start > 99 || end < 10 || end > 99)
        return -1;

    int sum = 0;
    for (int i = start; i <= end; ++i) {
        if (is_prime(i)) {
            sum += sum_of_digits(i);
        }
    }

    return sum;
}
int main() {
    int start, end;

    std::cout << "Enter two numbers: ";
    std::cin >> start >> end;
    int result = hw01(start, end);
    std::cout << result << std::endl;

    return 0;
}