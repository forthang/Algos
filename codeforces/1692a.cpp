// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1692/A
// 1692A Сумма

#include <iostream>

int main() {
  int t = 0;
  std::cin >> t;

  while (t--) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    std::cin >> a >> b >> c >> d;

    int count = 0;

    a > b ? count += 0 : count++;
    a > c ? count += 0 : count++;
    a > d ? count += 0 : count++;

    std::cout << count << '\n';
  }
  return 0;
}
