#include <vector>
#include <cstdint>
#include <iostream>

unsigned func(unsigned a, unsigned b)
{
    unsigned const res = a & (~b);
    return res;
}

void trace(std::string name, std::vector<unsigned> const& data)
{
    std::cout << name << std::endl;
    for(auto val : data)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    size_t n;
    std::cin >> n;

    std::vector<unsigned> array(n, 0);
    for(size_t i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    std::vector<unsigned> prefix(n, ~0u);
    std::vector<unsigned> suffix(n, ~0u);

    for(size_t i = 1; i < n; i++)
    {
        prefix[i] = func(prefix[i - 1], array[i - 1]);
    }

    for(size_t i = n - 2 ; i < n; i--)
    {
        suffix[i] = func(suffix[i + 1], array[i + 1]);
    }

//    trace("array", array);
//    trace("prefix", prefix);
//    trace("suffix", suffix);    

    size_t index = 0;
    unsigned res = 0;
    for(size_t i = 0; i < n; i++)
    {
        unsigned const test = array[i] & prefix[i] & suffix[i];
        if (test > res)
        {
            res = test;
            index = i;
        }
    }

    std::cout << array[index] << ' ';
    for(size_t i = 0; i < n; i++)
    {
        if (i != index)
        {
            std::cout << array[i] << ' ';
        }
    }
    std::cout << std::endl;

    return 0;
}
