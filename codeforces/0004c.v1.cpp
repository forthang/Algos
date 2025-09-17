// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/4/C
// 4C Система регистрации

#include <iostream>
#include <string>
#include <unordered_map> //hash table(faster than map)

int main() {
  int n;
  std::cin >> n;

  std::unordered_map<std::string, int> usernames;

  while (n--) {
    std::string username;
    std::cin >> username;

    if (usernames.find(username) == usernames.end()) {
      usernames[username] = 0;
      std::cout << "OK" << '\n';
    } else {
      int counter = ++usernames[username];
      std::string newUsername = username + std::to_string(counter);
      while (usernames.find(newUsername) != usernames.end()) {
        counter++;
        newUsername = username + std::to_string(counter);
      }
      usernames[newUsername] = 0;
      std::cout << newUsername << '\n';
    }
  }

  return 0;
}
