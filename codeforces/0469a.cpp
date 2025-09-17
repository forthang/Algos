// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/469/A
// 469A I Wanna Be the Guy

#include <iostream>
#include <set>

int main() {
  int n;
  std::cin >> n;

  int p;
  std::cin >> p;

  std::set<int> lvls;

  while (p--) {
    int lvl;
    std::cin >> lvl;
    lvls.insert(lvl);
  }

  int q;
  std::cin >> q;

  while (q--) {
    int lvl;
    std::cin >> lvl;
    lvls.insert(lvl);
  }

  if (lvls.size() == n) {
    std::cout << "I become the guy.";
  } else {
    std::cout << "Oh, my keyboard!";
  }
}