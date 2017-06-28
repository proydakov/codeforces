#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> calc_dividers(int n)
{
    std::vector<int> dividers;
    dividers.reserve(1024);

    int div = 2;

    //dividers.push_back(1);

    while (n % div == 0)
    {
        dividers.push_back(div);
        n = n / div;
    }
    div++;

    while (n > 1)
    {
        while (n % div == 0)
        {
            dividers.push_back(div);
            n = n / div;
        }
        div += 2;
    }

    return dividers;
}

void remove_2_3(std::vector<int>& vec)
{
    auto it = std::remove(vec.begin(), vec.end(), 2);
    vec.erase(it, vec.end());

    it = std::remove(vec.begin(), vec.end(), 3);
    vec.erase(it, vec.end());
}

void debug(int n)
{
    std::vector<int> dividers = calc_dividers(n);
    std::cout << dividers[0];
    for(int i = 1; i < dividers.size(); i++) {
        std::cout << " * " << dividers[i];
    }
    std::cout << std::endl;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int t;
    std::cin >> t;

    std::vector<int> original_dividers = calc_dividers(t);
    remove_2_3(original_dividers);

    for(int i = 1; i < n; i++) {
        std::cin >> t;
        std::vector<int> test_dividers = calc_dividers(t);
        remove_2_3(test_dividers);

        if(original_dividers != test_dividers) {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;

    return 0;
}
