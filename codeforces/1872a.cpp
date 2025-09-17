// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1872/A
// 1872A Два сосуда

#include <iostream>
#include <vector>

int main() {
  int t;

  std::cin >> t;

  std::vector<int> result;

  for (int i = 0; i < t; i++) {
    int a, b, c;
    int count = 0;

    std::cin >> a >> b >> c;

    if (a > b) {
      while (a > b) {
        a -= c;
        b += c;
        count += 1;
      }
    } else if (a < b) {
      while (a < b) {
        a += c;
        b -= c;
        count += 1;
      }
    } else {
      count = 0;
    }
    result.insert(result.begin() + i, count);
  }
  for (int n : result)
    std::cout << n << "\n";
  return 0;
}