// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1404/A
// 1404A Сбалансированная бинарная строка

#include <iostream>

int main() {
  int t = 0;
  std::cin >> t;

  while (t--) {
    int n = 0;
    int k = 0;
    std::string s = "";

    std::cin >> n >> k >> s;

    int z = 0, o = 0;
    int flag = 1;

    for (int i = 0; i < k; i++) {
      int prev = -1;
      for (int j = i; j < n; j += k) {
        if (s[j] != '?') {
          if (prev != -1 && s[j] - '0' != prev) {
            flag = 0;
            break;
          }
          prev = s[j] - '0';
        }
      }
      if (prev != -1 && prev == 0) {
        z++;
      } else if (prev != -1 && prev == 1) {
        o++;
      }
    }
    if (std::max(z, o) > k / 2) {
      flag = 0;
    }
    if (flag) {
      std::cout << "YES\n";
    } else {
      std::cout << "NO\n";
    }
  }

  return 0;
}
