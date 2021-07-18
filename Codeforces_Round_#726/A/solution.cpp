#include <vector>
#include <cstdint>
#include <numeric>
#include <iostream>

void solve()
{
    int64_t s;
    std::cin >> s;

    std::vector<int64_t> data(s);
    for(int64_t i = 0; i < s; i++)
    {
        std::cin >> data[i];
    }

   auto const total = std::accumulate(data.begin(), data.end(), int64_t{0});
   if(total == s)
   {
       std::cout << "0\n";
   }
   else if (total < s)
   {
       std::cout << "1\n";
   }
   else
   {
        std::cout << (total - s) << "\n";
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
