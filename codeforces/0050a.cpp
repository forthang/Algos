// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/50/A
// 50A Укладка доминошками

#include <iostream>

int main() {
  int m, n = 0;
  std::cin >> m >> n;
  if (m % 2 == 0) {
    std::cout << m / 2 * n;
  } else if (n % 2 == 0) {
    std::cout << n / 2 * m;
  } else {
    std::cout << m / 2 * n + n / 2;
  }
  return 0;
}