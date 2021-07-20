#include <string>
#include <cstdint>
#include <iostream>

bool start_with(std::string const& s, std::string const& p)
{
    return s.find(p) == 0;
}

bool end_with(std::string const& s, std::string const& p)
{
    return s.rfind(p) == s.size() - p.size();
}

void solve()
{
    size_t size;
    std::cin >> size;

    std::string s;
    std::cin >> s;

    bool const c1 = start_with(s, "2020") || end_with(s, "2020");
    bool const c2 = start_with(s, "202") && end_with(s, "0");
    bool const c3 = start_with(s, "20") && end_with(s, "20");
    bool const c4 = start_with(s, "2") && end_with(s, "020");

    std::cout << ((c1 || c2 || c3 || c4) ? "YES\n" : "NO\n");
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
