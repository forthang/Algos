#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, c = 0;
        int xy1[2], xy2[2];
        std::cin >> n;

        std::vector<std::vector<char>> a(n, std::vector<char>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> a[i][j];
                if (a[i][j] == '*' && c == 0) {
                    xy1[0] = i;
                    xy1[1] = j;
                    c++;
                }
                else if (a[i][j] == '*' && c == 1) {
                    xy2[0] = i;
                    xy2[1] = j;
                }
            }
        }

        if (xy1[0] == xy2[0]) {
            if (xy1[0] == 0) {
                a[xy1[0] + 1][xy1[1]] = '*';
                a[xy2[0] + 1][xy2[1]] = '*';
            }
            else {
                a[xy1[0] - 1][xy1[1]] = '*';
                a[xy2[0] - 1][xy2[1]] = '*';
            }
        }
        else if (xy1[1] == xy2[1]) {
            if (xy1[1] == 0) {
                a[xy1[0]][xy1[1] + 1] = '*';
                a[xy2[0]][xy2[1] + 1] = '*';
            }
            else {
                a[xy1[0]][xy1[1] - 1] = '*';
                a[xy2[0]][xy2[1] - 1] = '*';
            }
        }
        else {
            a[xy1[0]][xy2[1]] = '*';
            a[xy2[0]][xy1[1]] = '*';
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << a[i][j];
            }
            std::cout << std::endl;
        }
    }