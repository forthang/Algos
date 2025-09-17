// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/231/A
// 231A Команда

#include <iostream>

int main() {
  int n;
  int count = 0;
  std::cin >> n;
  while (n--) {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a + b + c >= 2) {
      count += 1;
    }
  }
  std::cout << count;
  return 0;
}