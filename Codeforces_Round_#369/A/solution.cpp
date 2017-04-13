#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    bool find = false;
    std::vector<std::string> cache;
    cache.reserve(n);

    int i = 0;
    std::string str;
    std::getline(std::cin, str);

    for(; i < n && !find; i++) {
        std::getline(std::cin, str);
        size_t index = str.find("OO");
        if(index != std::string::npos) {
            find = true;
            str[index + 0] = '+';
            str[index + 1] = '+';
        }
        cache.push_back(std::move(str));
    }

    for(; i < n; i++) {
        std::getline(std::cin, str);
        cache.push_back(std::move(str));
    }

    std::cout << (find ? "YES" : "NO") << std::endl;
    if(find) {
        for(int i = 0; i < n; i++) {
            std::cout << cache[i] << "\n";
        }
    }

    return 0;
}
