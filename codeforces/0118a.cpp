// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/118/A
// 118A Упражнение на строки

#include <iostream>

int main() {
  std::string s;
  std::string vowels = "AOYEUIaoyeui";
  std::cin >> s;

  for (int i = 0; i < s.length(); i++) {
    int isVowel = 0;
    for (int j = 0; j < vowels.length(); j++) {
      if (s[i] == vowels[j]) {
        isVowel = 1;
        break;
      }
    }
    if (isVowel == 1) {
      continue;
    } else if (s[i] >= 97 && s[i] <= 122) {
      std::cout << "." << s[i];
    } else {
      s[i] += 32;
      std::cout << "." << s[i];
    }
  }

  return 0;
}