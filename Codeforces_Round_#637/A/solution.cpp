#include <iostream>

void solve()
{
    int n, a, b, c ,d;
    std::cin >> n >> a >> b >> c >> d;

    auto min_acc = (a - b) * n;
    auto max_acc = (a + b) * n;

    auto min = c - d;
    auto max = c + d;

    if (max_acc < min || min_acc > max)
    {
        std::cout << "no\n";
    }
    else
    {
        std::cout << "yes\n";
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
