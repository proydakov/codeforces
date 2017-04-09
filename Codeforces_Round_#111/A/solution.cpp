#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> coins(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> coins[i];
    }

    std::sort(coins.begin(), coins.end());

    int s1 = 0;
    int s2 = coins.back();

    int counter = 1;

    for(int i = 0, j = n - 2; i <= j; ) {
        if(s1 + coins[i] < s2) {
            s1 += coins[i];
            i++;
        }
        else {
            s2 += coins[j];
            j--;
            counter++;
        }
    }

    std::cout << counter << std::endl;

    return 0;
}
