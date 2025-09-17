// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/915/A
// 915A Сад

#include <iostream>
#include <algorithm>

int main() {
    
    int n = 0;
    int k = 0;
    std::cin >> n >> k;

    int min_hours = 10000000;

    for (int i = 0; i < n; ++i) {
        int bucket = 0;
        std::cin >> bucket;

        if (k % bucket == 0) {
            int hours = k / bucket;
            min_hours = std::min(min_hours, hours);
        }
    }

    std::cout << min_hours << "\n";

    return 0;
}