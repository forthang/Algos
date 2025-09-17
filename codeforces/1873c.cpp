// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1873/C
// 1870C Стрельба по мишени

#include <iostream>

int main() {
  int t;

  std::cin >> t;

  while (t--) {
    std::string s = "";
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        char mark = '0';
        std::cin >> mark;
        s += mark;
      }
    }
    std::cout << '\n';
    std::cout << '\n';
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'X') {
        int target = i + 1;
        if (target == 45 || target == 46 || target == 55 || target == 56) {
          score += 5;
        } else if (target <= 10 || target >= 90 ||
                   (target % 10 == 0 || target % 10 == 1)) {
          score++;
        } else if ((target > 10 && target <= 20) ||
                   (target > 80 && target <= 90) ||
                   (target % 10 % 9 == 0 || target % 10 % 10 == 2)) {
          score += 2;
        } else if ((target > 20 && target <= 30) ||
                   (target > 70 && target <= 80) ||
                   (target % 10 % 8 == 0 || target % 10 % 10 == 3)) {
          score += 3;
        } else if ((target > 30 && target <= 40) ||
                   (target > 60 && target <= 70) ||
                   (target % 10 % 7 == 0 || target % 10 % 10 == 4)) {
          score += 4;
        }
      }
    }
    std::cout << score << '\n';
  }
}
