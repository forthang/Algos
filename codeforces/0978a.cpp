// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/978/A
// 978A Удаление дубликатов

#include <iostream>
#include <vector>

int main() {

  int n = 0;
  std::cin >> n;

  std::vector<int> vec;

  while (n--) {
    int a = 0;
    std::cin >> a;
    vec.push_back(a);
  }

  for (int i = vec.size(); i > 0; i--) {
    for (int j = i - 1; j >= 0; j--) {
      if (vec[i] == vec[j] && vec[i] != -1) {
        vec[j] = -1;
      }
    }
  }

  int count = 0;
  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] != -1) {
      count++;
    }
  }

  std::cout << count << '\n';

  for (int i = 0; i < vec.size(); i++) {
    if (vec[i] != -1) {
      std::cout << vec[i] << ' ';
    }
  }
  return 0;
}