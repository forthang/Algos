// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1873/D
// 1873D 1D Ластик

#include <iostream>

int main() {
  int t = 0;
  std::cin >> t;

  while (t--) {
    int n = 0;
    int k = 0;
    std::cin >> n >> k;

    std::string s = "";
    std::cin >> s;

    int i = 0;
    int count = 0;

    while (i < n) {
      if (s[i] == 'B') {
        count++;
        if (i + k < n) {
          i += k;
        } else {
          i = n;
        }
      } else {
        i++;
      }
    }
    std::cout << count << '\n';
  }

  return 0;
}