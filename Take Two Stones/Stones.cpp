#include <iostream>

int main() {
    int n, s;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        s = i;
    }
    if(s % 2 == 0) {
        std::cout << "Alice" << std::endl;
    }
    else if (s % 2 == 1) {
        std::cout << "Bob" << std::endl;
    }
    return 0;
}
