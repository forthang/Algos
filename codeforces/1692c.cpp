// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1692/C
// 1692C  √де слон

#include <iostream>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;
    

    while (t--) {
        std::vector<std::vector<char>> field(8, std::vector<char>(8));

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                std::cin >> field[i][j];
            }
        }
        for (int i = 1; i < 6; i++) {
            for (int j = 1; j < 6; j++) {
                if (field[i][j] == '#') {
                    if (field[i - 1][j - 1] == '#' && field[i - 1][j + 1] == '#' && field[i + 1][j - 1] == '#' && field[i + 1][j + 1] == '#') {
                        std::cout << i+1 << " " << j+1 << "\n";
                    }
                }
               
            }
        }
    }
    return 0;
}

