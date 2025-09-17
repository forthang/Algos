// 2024 by Blokhine Saveliy
// task source https://codeforces.com/problemset/problem/1649/A
// 1649A Игра

#include <iostream>
#include <vector>

int main() {
	int t = 0;
	std::cin >> t; 
	while (t--) {
		int n = 0;
		std::cin >> n;
		std::vector<int> ground(n);
		int start = 0;
		int end = n-1;
		int jump = 0;
		for (int i = 0; i < n; ++i) {
			std::cin >> ground[i];
		}
		while (start + 1 < n && ground[start + 1]) {
			++start; 
		}
		while (end > 0 && ground[end - 1]) {
			--end; 
		}
		jump = (end - start);
		jump = (jump > 0) ? jump : 0;

		std::cout << jump<<"\n";
	}
}
