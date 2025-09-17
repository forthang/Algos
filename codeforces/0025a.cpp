// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/25/A
// 25A Театральная площадь

#include <iostream>

int main() {
  long int n, a[100], i, x, y, o, e;
  while (std::cin >> n) {
    o = 0, e = 0;
    for (i = 1; i <= n; i++) {
      std::cin >> a[i];
      if (a[i] % 2 == 0) {
        e++;
        x = i;
      } else {
        o++;
        y = i;
      }
    }
    if (o > e)
      std::cout << x << std::endl;
    else
      std::cout << y << std::endl;
  }
  return 0;
}
