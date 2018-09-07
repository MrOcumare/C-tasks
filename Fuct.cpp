#include <iostream>

int fuctorial(int);

int main() {
    int a;
    std::cin >> a;
    std::cout << fuctorial(a);
    return 0;
}

int fuctorial (int a) {
    if (a != 0) {
        return (a * fuctorial(a-1));
    }
    else {
        return(1);
    }
}