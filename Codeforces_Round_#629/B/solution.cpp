#include <cstdint>
#include <iostream>

void solve()
{
    size_t n, k;
    std::cin >> n >> k;

    size_t num = 1, len = 2;
    while(k > num)
    {
        k -= num;
        num += 1;
        len += 1;
    }

    k -= 1;

    std::string result;
    result.append(std::string(n - len, 'a'));
    result.append("b");
    len -= 1;
    result.append(std::string(len - 1 - k, 'a'));
    result.append("b");
    result.append(std::string(k, 'a'));

    std::cout << result << "\n";
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
