// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/339/A
// 339A Математика спешит на помощь

#include <iostream>
#include <vector>

int main() {
  std::vector<char> vec;
  std::string s;

  std::cin >> s;

  int len = s.length() / 2 + 1;

  for (int i = 0; i < s.length(); i += 2) {
    vec.push_back(s[i]);
  }

  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (vec[j] > vec[j + 1]) {
        std::swap(vec[j], vec[j + 1]);
      }
    }
  }

  for (int i = 0; i < len; i++) {
    if (i == len - 1) {
      std::cout << vec[i];
      return 0;
    }
    std::cout << vec[i] << '+';
  }

  return 0;
}