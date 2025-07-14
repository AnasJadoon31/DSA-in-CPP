#include <iostream>

void fib(int n) {
    int t1 = 0, t2 = 1;
    if (n == 0) {
        std::cout << "0 ";
        return;
    } else if (n == 1) {
        std::cout << "0 1 ";
        return;
    } else {
        std::cout << "0 1 ";
        for (int i = 2; i <= n; i++) {
            int t3 = t1 + t2;
            std::cout << t3 << " ";
            t1 = t2;
            t2 = t3;
        }
    }
}
