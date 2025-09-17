// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/236/A
// 236A Девушка или Юноша

#include <iostream>

int main() {
  std::string str;
  std::cin >> str;

  int count = 0;

  for (int i = 0; i < str.length(); ++i) {
    int isUnique = 1;
    for (int j = 0; j < i; ++j) {
      if (str[i] == str[j]) {
        isUnique = 0;
        break;
      }
    }
    if (isUnique) {
      count++;
    }
  }

  if (count % 2 != 0) {
    std::cout << "IGNORE HIM!";
  } else {
    std::cout << "CHAT WITH HER!";
  }

  return 0;
}