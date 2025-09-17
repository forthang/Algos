// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/546/A
// 546A  Солдат и бананы

#include <iostream>

int main() {
  int k = 0;
  int n = 0;
  int w = 0;
  std::cin >> k >> n >> w;
  
  std::cout << std::abs(n - k*(1+w)/2);

  return 0;
}