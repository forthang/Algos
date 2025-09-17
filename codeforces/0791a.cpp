// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/791/A
// 791A Мишка и старший брат

#include <iostream>

int main() {
  int n, m;
  int count = 0;
  std::cin >> n >> m;

  while (n <= m) {
    n *= 3;
    m *= 2;
    count++;
  }
  std::cout << count;
  return 0;
}