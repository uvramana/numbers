// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    int n;
    std::cin >> n;
    std::cout << "Finding factors for: " << n << std::endl;
    for (int i=1; i<=n; i++) {
        if (n%i == 0) {
            std::cout << i << " : " << (n/i) << std::endl;
        }
    }

    return 0;
}
