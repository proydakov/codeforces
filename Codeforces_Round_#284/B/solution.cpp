#include <string>
#include <iostream>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);
    
    std::unordered_map<std::string, std::string> cache;

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    for(int i = 0; i < m; i++) {
        std::string a; std::string b;
        std::cin >> a;
        std::cin >> b;

        if(a.size() <= b.size()) {
            b = a;
        }
        cache[a] = b;
    }

    for(int i = 0; i < n; i++) {
        std::string req;
        std::cin >> req;
        std::cout << cache[req] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
