// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/339/B
// 339B  Ксюша и кольцевая дорога

#include <iostream>

int main() {
  int n;
  int m;

  std::cin >> n >> m;

  int64_t curr = 1;
  int64_t count = 0;
  while (m--) {
    int h = 0;
    std::cin >> h;

    if (h != curr) {
      if (h < curr) {
        count += n - curr + h;
        curr = h;
      } else {
        count += h - curr;
        curr += h - curr;
      }
    }
  }
  std::cout << count;
}
