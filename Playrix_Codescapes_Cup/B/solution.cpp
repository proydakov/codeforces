#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

struct item_t
{
    int p;
    int a;
    int b;
    int index;
};

bool operator<(const item_t& i1, const item_t& i2)
{
    return i1.p < i2.p;
}

int main()
{
    std::ios::sync_with_stdio(false);
    //freopen("/home/eproydakov/repository/codeforces/Playrix_Codescapes_Cup/B/input_01.txt", "r", stdin);

    int n;
    std::cin >> n;

    std::vector<item_t> items(n);
    for(int i = 0; i < n; i++) {
        std::cin >> items[i].p;
        items[i].index = i;
    }
    for(int i = 0; i < n; i++) {
        std::cin >> items[i].a;
    }
    for(int i = 0; i < n; i++) {
        std::cin >> items[i].b;
    }

    std::vector<int> used(n, 0);
    std::unordered_map<int, std::vector<item_t>> cache;

    for(const auto item : items) {
        if(item.a == item.b) {
            cache[item.a].push_back(item);
        }
        else {
            cache[item.a].push_back(item);
            cache[item.b].push_back(item);
        }
    }

    for(auto& item : cache) {
        std::sort(item.second.rbegin(), item.second.rend());
    }

    int m;
    std::cin >> m;

    for(int i = 0; i < m; i++) {
        int color;
        std::cin >> color;

        bool find = false;
        while(!cache[color].empty()) {
            auto item = cache[color].back();
            if(0 == used[item.index]) {
                used[item.index] = 1;
                std::cout << item.p;
                find = true;
                break;
            }
            else {
                cache[color].pop_back();
            }
        }
        if(!find) {
            std::cout << -1;
        }
        std::cout << ' ';
    }
    std::cout << std::endl;

    return 0;
}
