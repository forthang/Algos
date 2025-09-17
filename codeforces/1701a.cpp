// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1701/A
// 1701A Полянаm

#include <iostream>

int main() {
    int t = 0;
    std::cin >> t;

    while (t--) {
        int count = 0;
        for (int i = 1; i <= 2; i++) {
            for (int j = 1; j <= 2; j++) {
                int a = 0;
                std::cin >> a;

                a == 1 ? count++ : count += 0;
            }
        }

        if (count == 0) {
            std::cout << "0 \n";
        }
        else if (count == 4) {
            std::cout << "2 \n";
        }
        else {
            std::cout << "1 \n";
        }
    }
    return 0;
}