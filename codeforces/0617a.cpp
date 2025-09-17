// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/617/A
// 617A Слоник

#include <iostream>

int main() {
  int m = 0;
  int count = 0;
  int jump = 5;

  std::cin >> m;

  while (m > 0) {
    if (m - jump >= 0) {
      m -= jump;
      count += 1;
    } else if (jump > 0) {
      jump -= 1;
    }
  }
  std::cout << count;
  return 0;
}