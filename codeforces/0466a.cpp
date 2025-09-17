// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1692/A
// 1692A Сумма

#include <iostream>

int main() {
  int n = 0;
  int m = 0;
  int a = 0;
  int b = 0;

  std::cin >> n >> m >> a >> b;
  n % m == 0 ? std::cout << std::min((n / m * b), n * a)
             : std::cout << std::min(
                   std::min(((n / m * b) + ((n - ((n / m) * m)) * a)),
                            (n / m * b + b)),
                   n * a);

  return 0;
}
