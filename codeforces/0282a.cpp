// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/282/A
// 282A  Bit++

#include <iostream>

int main() {
  int n;
  std::cin >> n;

  int count = 0;

  while (n--) {
    std::string s;
    std::cin >> s;
    s[1] == '+' ? count++ : count--;
  }
  std::cout << count;
  return 0;
}
