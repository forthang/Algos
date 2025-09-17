// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/281/A
// 281A Капитализация слова

#include <iostream>

int main() {
  std::string str;
  std::cin >> str;

  if (str[0] >= 97 && str[0] <= 122) {
    str[0] -= 32;
    std::cout << str;
  } else {
    std::cout << str;
  }
  return 0;
}