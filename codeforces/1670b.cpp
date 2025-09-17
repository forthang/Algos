// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1670/B
// 1670B Общажные войны

#include <iostream>
#include <vector>

int main() {
  int t = 0;
  std::cin >> t;

  while (t--) {
    int n = 0;
    std::string s = "";
    std::cin >> n >> s;

    int k = 0;
    std::cin >> k;
    std::vector<char> chars;

    int count = 0;

    for (int i = 0; i < k; i++) {
      char ch;
      std::cin >> ch;
      chars.push_back(ch);
    }

    int prev = 0;
    int maxi = 0;
    for (int i = 0; i < s.length(); i++) {
      for (int j = 0; j < k; j++) {
        if (s[i] == chars[j]) {
          if (maxi < i - prev) {
            maxi = i - prev;
          }
          prev = i;
        }
      }
    }
    std::cout << maxi << '\n';
  }

  return 0;
}