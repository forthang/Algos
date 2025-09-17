    // 2024 by Blokhine Saveliy
    // task source https://codeforces.com/problemset/problem/1671/A
    // 1671A Построение строки

    #include <iostream>

    int main() {
        int t;
        std::cin >> t;


        while (t--) {
            std::string s;
            std::cin >> s;

            bool possible = true;
            for (int i = 0; i < s.size(); i++) {

                if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
                    possible = 0;
                }
            }

            if (possible) {
                std::cout<<"YES\n";
            }
            else {
                std::cout << "NO\n";
            } 
        }
        return 0;
    }
