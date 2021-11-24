#include <string>
#include <cstdint>
#include <iostream>
#include <algorithm>

void solve()
{
    std::string str;
    std::cin >> str;

    auto const pred = [](auto const e){
        return 'a' == e;
    };


    if (std::all_of(str.begin(), str.end(), pred))
    {
        std::cout << "NO\n";
        return;
    }

    std::cout << "YES\n";

    auto const prefix_it = std::find_if_not(str.begin(), str.end(), pred);
    auto const prefix = std::distance(str.begin(), prefix_it);

    auto const suffix_it = std::find_if_not(str.rbegin(), str.rend(), pred);
    auto const suffix = std::distance(str.rbegin(), suffix_it);

//    std::cout << "str: " << str << " prefix: " << prefix << " suffix: " << suffix << std::endl;

    if (prefix > suffix)
    {
        std::cout << 'a' << str << '\n';
    }
    else
    {
        std::cout << str << 'a' << '\n';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    for(int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}
