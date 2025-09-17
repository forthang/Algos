// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/479/A
// 479A  Выражение

#include <iostream>

int main() {
  int a = 0;
  int b = 0;
  int c = 0;

  std::cin >> a >> b >> c;

  int ans = a + b + c;
  ans = std::max(ans, (a + b) * c);
  ans = std::max(ans, a * (b + c));
  ans = std::max(ans, a * b * c);

  std::cout << ans << std::endl;
}