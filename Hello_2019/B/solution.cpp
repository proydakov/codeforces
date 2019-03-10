#include <vector>
#include <iostream>

void solve(int val, std::size_t index, std::vector<int> const& turns)
{
    if (index == turns.size())
    {
        if (val % 360 == 0)
        {
            throw 1;
        }

        return;
    }

    {
        int const val_right = val + turns[index];
        solve(val_right, index + 1, turns);
    }

    {
        int const val_left = val - turns[index];
        solve(val_left, index + 1, turns);
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n = 0;
    std::cin >> n;

    std::vector<int> turns;
    for (int i = 0; i < n; i++)
    {
        int turn = 0;
        std::cin >> turn;

        turns.push_back(turn);
    }

    try
    {
        solve(0, 0, turns);
    }
    catch(...)
    {
        std::cout << "YES" << std::endl;
        return 0;
    }

    std::cout << "NO" << std::endl;

    return 0;
}
