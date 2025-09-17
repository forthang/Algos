// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1330/A
// 1330A Dreamoon и сбор мест

#include <iostream>
#include <vector>

int main() {
  int t = 0;
  std::cin >> t;

  while (t--) {
    int n, x = 0;
    std::cin >> n >> x;
    std::vector<bool> torf(n + x + 1, false);

    for (int i = 0; i < n; i++) {
      int place = 0;
      std::cin >> place;
      torf[place] = true;
    }

    int max_place = n + x;
    for (int i = max_place; i > 0; i--) {
      int v = 0;
      for (int j = 1; j <= i; j++) {
        if (!torf[j]) {
          v++;
        }
      }
      if (v <= x) {
        std::cout << i << '\n';
        break;
      }
    }
  }
  return 0;
}
