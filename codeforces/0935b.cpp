// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/935/B
// 935B Фафа и ворота

#include <iostream>



int main() {
    int n = 0;
    std::cin >> n;

    std::string moves;
    std::cin >> moves;

    int x = 0;
    int y = 0;

    int coins = 0;
    bool upper = moves[0] == 'U';

    for (int i = 0; i < n - 1; i++) {

        moves[i] == 'U' ? y++ : x++;

        if (x == y) {
            if (moves[i + 1] == 'R' && upper) {
                coins += 1;
                upper = false;
            }
            else if (moves[i + 1] == 'U' && !upper) {
                coins++;
                upper = true;
            }
        }
    }
        std::cout << coins;

        return 0;
    }
