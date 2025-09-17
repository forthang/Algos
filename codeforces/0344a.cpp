// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/344/A
// 344A Магниты

#include <iostream>

int main() {
  int n;
  int count = 0;
  int temp = 0;
  std::cin >> n;

  while (n--) {
    int m;
    std::cin >> m;
    if (temp != m) {
      count++;
    }
    temp = m;
  }

  std::cout << count;
}