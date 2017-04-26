#include <string>
#include <iostream>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);

    int q;
    std::cin >> q;

    std::unordered_map<std::string, std::string> cache;
    cache.reserve(1024);

    for(int i = 0; i < q; i++) {
        std::string from; std::string to;
        std::cin >> from;
        std::cin >> to;

        auto it = cache.find(from);
        if(it == cache.end()) {
            cache[to] = from;
        }
        else {
            std::string oritin = it->second;
            cache.erase(it);
            cache[to] = oritin;
        }
    }

    std::cout << cache.size() << std::endl;
    for(const auto item : cache) {
        std::cout << item.second << ' ' << item.first << std::endl;
    }

    return 0;
}
