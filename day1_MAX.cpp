#include <iostream>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10;
    int y = 20;

    std::cout << "Max of " << x << " and " << y << " is: " << MAX(x, y) << std::endl;

    return 0;
}
