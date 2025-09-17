// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1352/A
// 1352A Сумма круглых чисел

#include <iostream>

int main() {
  int n;
  int MAXSIZE = 10000;
  int arr[MAXSIZE];

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    int num = arr[i];
    int count = 0;
    int place = 1;

    while (num > 0) {
      int digit = num % 10;
      if (digit != 0) {
        count++;
      }
      num /= 10;
      place *= 10;
    }

    std::cout << count << "\n";

    place = 1;
    num = arr[i];

    while (num > 0) {
      int digit = num % 10;
      if (digit != 0) {
        std::cout << digit * place << " ";
      }
      num /= 10;
      place *= 10;
    }

    std::cout << "\n";
  }

  return 0;
}