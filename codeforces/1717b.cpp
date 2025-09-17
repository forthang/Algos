// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1717/B
// 1717B  Мадока и подпольные соревнования

#include <iostream>

int main() {
  int t = 0;
  std::cin >> t;

  while (t--) {
    int n, k, r, c;
    std::cin >> n >> k >> r >> c;
    r--;
    c--;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if ((i + j - r - c) % k == 0)
          std::cout << "X";
        else
          std::cout << ".";
      }
      std::cout << '\n';
    }
  }
  return 0;
}
