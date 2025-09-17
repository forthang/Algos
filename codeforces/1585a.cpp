// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1585/A
// 1585A Жизни цветов важны

#include <iostream>


int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n = 0;
        std::cin >> n;
        int prev = 0;
        int alive = 1;
        int length = 1;

        for (int i = 0; i < n; ++i) {
            int watered = 0;
            std::cin >> watered;
            if (i == 0) {
                length += (watered == 1) ? 1 : 0;
            }
            else if (alive && watered == 1) {
                length += 1;
                length += (prev == 1) ? 4 : 0;
            }
            else if (alive && prev == 0 && watered == 0) {
                alive = -1;
                length = 0;
            }
            prev = watered;
        }

        std::cout << length << "\n";
    }

    return 0;
}
