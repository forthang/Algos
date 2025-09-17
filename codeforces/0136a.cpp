#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> gifts(n);
    std::vector<int> received(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> gifts[i];
    }

    for (int i = 0; i < n; ++i) {
        received[gifts[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << received[i] << " ";
    }

    return 0;
}