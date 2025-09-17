// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/4/C
// 4C Система регистрации

#include <iostream>
#include <map>
#include <string>

int main() {
  int n;
  std::cin >> n;

  std::map<std::string, int> usernames;
  std::string username;
  while (n--) {
    std::cin >> username;
    if (usernames.count(username) == 0) {
      std::cout << "OK" << '\n';
      usernames[username] = 1;
    } else {
      std::cout << username << usernames[username] << '\n';
      usernames[username] += 1;
    }
  }
  return 0;
}