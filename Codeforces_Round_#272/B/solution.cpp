#include <cmath>
#include <string>
#include <cstdint>
#include <iomanip>
#include <iostream>

unsigned long fact(unsigned N)
{
    unsigned long res = 1;
    while(N > 0)
    {
        res *= N;
        --N;
    }
    return res;
}

unsigned long combination(unsigned k, unsigned n)
{
    return fact(n) / (fact(k) * fact(n - k));
}

int main()
{
    std::ios::sync_with_stdio(false);

    int origin_position = 0;

    std::string drazil;
    std::cin >> drazil;
    for(auto const c : drazil)
    {
        switch(c)
        {
            case '+':
                origin_position++;
                break;

            case '-':
                origin_position--;
                break;
        }
    }

    int test_position = 0;
    int steps = 0;

    std::string dreamoon;
    std::cin >> dreamoon;
    for(auto const c : dreamoon)
    {
        switch(c)
        {
            case '+':
                test_position++;
                break;

            case '-':
                test_position--;
                break;

            case '?':
                steps++;
                break;
        }
    }

    unsigned const position = std::abs(origin_position - test_position);
    if (position <= steps and (position + steps) % 2 == 0)
    {
        unsigned const k = (position + steps) / 2;
        double const result = std::pow(0.5, steps) * combination(k, steps);
        std::cout << std::fixed << std::setprecision(12) << result << std::endl;
    }
    else
    {
        std::cout << "0.00000000000" << std::endl;
    }

    return 0;
}
