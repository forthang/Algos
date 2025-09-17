// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/978/B
// 978B Удаление дубликатов

#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;

  std::string s;
  std::cin >> s;

  int counter = 0;

  for (int i = 0; i < n - 2; i++) {
    int count = -2;
    if (s[i] == 'x' && s[i + 1] == 'x') {
      int j = i;
      while (s[j] == 'x') {
        count++;
        j++;
        s[j - 1] = 'a';
      }
    }
    if (count > 0) {
      counter += count;
    }
  }

  std::cout << counter;
  return 0;
}