// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/271/A
// 271A  Красивый год

#include <iostream>

int main() {
  int m = 0;
  bool is_beautiful = false;

  std::cin >> m;

  while (!is_beautiful) {

    m += 1;

    int a = m % 10;
    int b = m % 100 / 10;
    int c = m % 1000 / 100;
    int d = m % 10000 / 1000;

    if ((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d)) {
      is_beautiful = true;
    }
  }

  std::cout << m;
  return 0;
}