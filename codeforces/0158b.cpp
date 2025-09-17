// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/158/B
// 158B Такси

#include <iostream>
#include <vector>
int main() {
  int n;
  int count = 0;
  std::cin >> n;

  std::vector<int> groups;

  while (n--) {
    int s;
    std::cin >> s;
    groups.push_back(s);
  }

  for (int i = 0; i < groups.size(); i++) {
    if (groups[i] == 4) {
      count++;
      groups[i] += 100;
      continue;
    }
    int minRemaind = 4;
    int minRemaindIndex = 0;
    for (int j = i + 1; j - 1 < groups.size(); j++) {
      if ((groups[i] + groups[j]) == 4) {
        minRemaindIndex = j;
        int minRemaind = 0;
        break;
      }
      if (((groups[i] + groups[j]) % 4 < minRemaind) &&
          ((groups[i] + groups[j]) <= 4)) {
        minRemaind = (groups[i] + groups[j]) % 4;
        minRemaindIndex = j;
      }
    }

    if (minRemaindIndex != 0) {
      count++;
      groups[i] += 100;
      groups[minRemaindIndex] += 100;
    } else if (groups[i] < 4) {
      count++;
      groups[i] += 100;
    }
  }

  std::cout << count;
}