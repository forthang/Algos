// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1807/A
// 1807A  Плюс или минус

#include <iostream>

int main() {
  int t = 0;
  std::cin >> t;
  while (t--) {
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a >> b >> c;

    a + b == c ? std::cout << "+ \n" : std::cout << "- \n";
  }

  return 0;
}
