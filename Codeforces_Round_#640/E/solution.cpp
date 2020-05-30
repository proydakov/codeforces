#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int count_table[n + 1];
    for(int i = 0; i < n + 1; i++)
    {
        count_table[i] = 0;
    }

    int data[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
        count_table[data[i]]++;
    }

    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        int accumulator = 0;
        int len = 0;
        for(int j = i; j < n; j++)
        {
            accumulator += data[j];
            len++;
            if (accumulator > n)
            {
                break;
            }
            if (len >= 2)
            {
                counter += count_table[accumulator];
                count_table[accumulator] = 0;
            }
        }
    }

    std::cout << counter << "\n";
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
