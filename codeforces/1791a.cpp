// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1791/A
// 1791A   Проверка Codeforces

#include <iostream>

int main() {
  int t = 0;
  std::cin >> t;

  while (t--) {
    char c = ' ';
    std::cin >> c;

    std::string cf = "codeforces";
    cf.find(c) != -1 ? std::cout << "YES \n" : std::cout << "NO \n";
  }

  return 0;
}
