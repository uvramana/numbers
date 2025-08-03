// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    int n;
    while(1) {
    std::cin >> n;
    std::cout << "Finding factors for: " << n << std::endl;
    int total = 0;
    for (int i=1; i<=n; i++) {
        if (n%i == 0) {
            total++;
            std::cout << i << " : " << (n/i) << std::endl;
        }
    }
    
    std::cout << "total factors are " << total << std::endl;
    }

    return 0;
}
