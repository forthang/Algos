// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/69/A
// 69A Юный физик

#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> basic = {0, 0, 0};
  while (n--) {
    int a, b, c;
    std::cin >> a >> b >> c;

    basic[0] += a;
    basic[1] += b;
    basic[2] += c;
  }
  if (basic[0] == 0 && basic[1] == 0 && basic[2] == 0) {
    std::cout << "YES";

  } else {
    std::cout << "NO";
  }
}