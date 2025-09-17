// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/266/A
// 266A Камни на столе

#include <iostream>

int main() {
  int n;
  int count = 0;
  std::string s;

  std::cin >> n;
  std::cin >> s;

  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) {
      count++;
    }
  }
  std::cout << count;

  return 0;
}