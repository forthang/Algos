// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1/A
// 1A Театральная площадь

#include <iostream>

int main() {
  long long n, m, a;
  std::cin >> n >> m >> a;

  long long tilesInLength = (n + a - 1) / a;
  long long tilesInWidth = (m + a - 1) / a;

  std::cout << tilesInLength * tilesInWidth << '\n';

  return 0;
}
