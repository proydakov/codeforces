#include <stack>
#include <vector>
#include <cstdint>
#include <iostream>
#include <unordered_map>

typedef unsigned __int128 uint128_t;

std::ostream& operator<<(std::ostream& os, uint128_t val)
{
    std::stack<int> stack;
    while(val) {
        stack.push(val % 10);
        val /= 10;
    }

    while(!stack.empty()) {
        os << stack.top();
        stack.pop();
    }

    return os;
}

std::unordered_map<int, uint128_t> g_cache;

uint128_t solve(int i, const std::vector<int>& cnt)
{
    auto it = g_cache.find(i);
    if(it != g_cache.end()) {
        return it->second;
    }

    uint128_t score = 0;

    if(i >= 2) {
        score = std::max(solve(i - 1, cnt), solve(i - 2, cnt) + cnt[i] * i);
    }
    else if(i == 1) {
        score = cnt[1];
    }

    g_cache[i] = score;

    return score;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> cnt(100000 + 1, 0);
    for(int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        cnt[temp]++;
    }

    uint128_t score = solve(n, cnt);

    std::cout << score << std::endl;

    return 0;
}
