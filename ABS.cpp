#include <iostream>

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() {
    int num1 = -7;
    std::cout << "ABS of " << num1 << " is " << ABS(num1) << std::endl;
    return 0;
}
