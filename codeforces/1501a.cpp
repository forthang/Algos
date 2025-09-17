// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1501/A
// 1501A Леша и поезд

#include <iostream>
#include <vector>

int main() {
  
    int t = 0;
    std::cin >> t;
    while (t--) {
		int n = 0;
		std::cin >> n;

		std::vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			std::cin >> a[i] >> b[i];
		}

		std::vector<int> m(n);
		for (int i = 0; i < n; i++) {
			std::cin >> m[i];
		}
		int prev = 0;
		int time = 0;
		for (int i = 0; i < n; i++) {
			time += (a[i] - prev + m[i]);
			int stay = (b[i] - a[i] + 1) / 2;
			if (i < n - 1) {
				time += stay;
			}
			if (time < b[i] && i < n - 1) {
				time = b[i];
			}
			prev = b[i];
		}
		std::cout << time << '\n';
    }
    return 0;
}
