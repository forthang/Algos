// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/112/A
// 112A Петя и строки

#include <iostream>

int main() {

  std::string str1;
  std::string str2;

  std::cin >> str1;
  std::cin >> str2;

  for (int i = 0; i < str1.length(); ++i) {
    char s1 = (str1[i] >= 'A' && str1[i] <= 'Z') ? str1[i] + 32 : str1[i];
    char s2 = (str2[i] >= 'A' && str2[i] <= 'Z') ? str2[i] + 32 : str2[i];

    if (s1 < s2) {
      std::cout << "-1" << '\n';
      return 0;
    } else if (s1 > s2) {
      std::cout << "1" << '\n';
      return 0;
    }
  }

  std::cout << "0" << '\n';

  return 0;
}
