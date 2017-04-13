#include <string>
#include <iostream>
#include <unordered_map>

typedef std::unordered_map<std::string, int> cache_t;

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    cache_t cache;
    cache.reserve(n);

    for(int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        std::pair<cache_t::iterator, bool> res = cache.insert(std::make_pair(str, 0));

        if(res.second == true) {
            std::cout << "OK" << std::endl;
        }
        else {
            res.first->second++;
            std::cout << str << res.first->second << std::endl;
        }
    }

    return 0;
}
