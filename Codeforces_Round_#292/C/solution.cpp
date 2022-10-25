#include <map>
#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>
#include <functional>

void solve()
{
    std::string origin;
    std::cin >> origin;

    std::map<char, std::string> map;
    map['1'] = "";
    map['2'] = "2";
    map['3'] = "3";
    map['4'] = "322";
    map['5'] = "5";
    map['6'] = "53";
    map['7'] = "7";
    map['8'] = "7222";
    map['9'] = "7332";

    std::string result;
    for(auto const c : origin)
    {
        result.append(map[c]);
    }

    std::sort(result.begin(), result.end(), std::greater{});

    std::cout << result << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    {
        solve();
    }

    return 0;
}
