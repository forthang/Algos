// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1678/A
// 1678A Tokitsukaze и полная нулевая последовательность

#include <iostream>
#include <algorithm>
#include <vector>

int main() {    
    int t;
    std::cin >> t;

    while(t--){
        int n = 0;
        std::cin >> n;
        std::vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        sort(a.begin(), a.end());
        int zero = count(a.begin(), a.end(), 0);

        if (zero > 0) {
            std::cout<< n - zero << "\n";
        }
            
        else {
            bool equal = false;
            for (int i = 1; i < n; i++) {
                if (a[i] == a[i - 1])
                    equal = true;
            }
            if (equal) {
                std::cout << n << "\n";
            }
            else {
                std::cout << n + 1 << "\n";
            }
        }
    }
    return 0;
}
