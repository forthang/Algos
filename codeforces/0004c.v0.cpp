// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/4/C
// 4C Система регистрации

#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;

  std::vector<std::string> usernames;

  while (n--) {
    std::string username;
    std::cin >> username;

    bool isUnique = true;
    int i = usernames.size() - 1;

    // O(n**2) если не больше
    while (isUnique && i + 1 > 0) {

      for (int j = 1; j < i + 1; j++) {
        if (username + std::to_string(j) == usernames[i]) {
          std::string newUsername = username + std::to_string(j + 1);
          usernames.push_back(newUsername);
          std::cout << newUsername << '\n';
          isUnique = false;
        }
      }

      if (usernames[i] == username) {
        std::string newUsername = username + "1";
        usernames.push_back(newUsername);
        std::cout << newUsername << '\n';
        isUnique = false;
        break;
      }
      i--;
    }

    if (isUnique) {
      usernames.push_back(username);
      std::cout << "OK" << '\n';
    }
  }

  return 0;
}