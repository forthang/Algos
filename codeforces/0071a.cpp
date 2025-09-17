// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/71/A
// 71A Слишком длинные слова

#include <iostream>

int main() {
  int n;
  std::string s;
  std::cin >> n;
  while (n--) {
    std::cin >> s;
    if (s.length() > 10) {
      std::cout << s[0] << s.length() - 2 << s[s.length() - 1] << '\n';
    } else {
      std::cout << s << '\n';
    }
  }
  return 0;
}