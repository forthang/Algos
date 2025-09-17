// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1742/A
// 1742A Сумма

#include <iostream>

int main() {
  int t = 0;
  std::cin >> t;

  while (t--) {
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a >> b >> c;

    a == b + c || b == a + c || c == a + b ? std::cout << "YES" << '\n'
                                           : std::cout << "NO" << '\n';
  }
  return 0;
}
