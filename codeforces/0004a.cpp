// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/4/A
// 4A Арбуз

#include <iostream>

int main() {
  int m = 0;
  std::cin >> m;
  if (0 == m % 2 && m != 2) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
  return 0;
}