// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/64/A
// 64A Магниты

#include <iostream>

int main() {
  std::string s1;
  std::string s2;
  std::cin >> s1 >> s2;

  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] == s2[i]) {
      std::cout << 0;
    } else {
      std::cout << 1;
    }
  }
}