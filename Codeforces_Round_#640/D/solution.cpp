#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int data[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> data[i];
    }

    int alice_index = 1;
    int bob_index = n - 1;

    int alice_accumulator = data[0];
    int bob_accumulator = 0;

    int turn = 1;
    int last_delta = data[0];

    while(alice_index <= bob_index)
    {
        {
            int current_delta = 0;
            for(; current_delta <= last_delta && alice_index <= bob_index; bob_index--)
            {
                current_delta += data[bob_index];
            }
            last_delta = current_delta;
            bob_accumulator += current_delta;
            turn++;
        }

        if (alice_index <= bob_index)
        {
            int current_delta = 0;
            for(; current_delta <= last_delta && alice_index <= bob_index; alice_index++)
            {
                current_delta += data[alice_index];
            }
            last_delta = current_delta;
            alice_accumulator += current_delta;
            turn++;
        }
    }

    std::cout << turn << ' ' << alice_accumulator << ' ' << bob_accumulator << '\n';
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
