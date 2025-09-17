// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/158/A
// 158A  Следующий раунд

#include <iostream>
#include <vector>

int main() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> scores(n);

  for (int i = 0; i < n; ++i) {
    std::cin >> scores[i];
  }

  int count = 0;

  for (int i = 0; i < n; ++i) {
    if (scores[i] >= scores[k - 1] &&
        scores[i] > 0) { // scores[k-1] - пороговое вхождение
      count++;
    }
  }

  std::cout << count << std::endl;
  return 0;
}
