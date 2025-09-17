// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/263/A
// 263A Красивая матрица

#include <iostream>

int main() {
  int m = 0;
  int x = 0, y = 0;
  int count = 0;

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      std::cin >> m;
      if (m == 1) {
        x = j;
        y = i;
      }
    }
  }

  count = abs(x - 3) + abs(y - 3);

  std::cout << count;

  return 0;
}