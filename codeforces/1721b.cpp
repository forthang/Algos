// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1721/B
// 1721B  Смертоносный лазер

#include <iostream>

int main() {
  int t = 0;
  std::cin >> t;

  while (t--) {
    int n, m, sx, sy, d = 0;
    std::cin >> n >> m >> sx >> sy >> d;
    for (int i = 0; i < n * m; i++) {
      if (std::min(sx - 1, m - sy) <= d && std::min(n - sx, sy - 1) <= d) {
        std::cout << -1 << '\n';
        break;
      } else {
        std::cout << n + m - 2 << '\n';
        break;
      }
    }
  }

  return 0;
}