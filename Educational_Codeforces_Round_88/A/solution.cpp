#include <cstdint>
#include <iostream>

void solve()
{
    int n, m, k;
    std::cin >> n >> m >> k;

    int cards_person = n / k;

    int leader_jocker = std::min(cards_person, m);
    m -= leader_jocker;
    k--;

    int second_jocker = m / k;
    if (m % k > 0)
    {
        second_jocker++;
    }

    std::cout << (leader_jocker - second_jocker) << '\n';
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
