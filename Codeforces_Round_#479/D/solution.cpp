#include <deque>
#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

void swap_remove(std::vector<std::uint64_t>& data, std::vector<std::uint64_t>::reference& ref)
{
    std::swap(ref, data.back());
    data.resize(data.size() - 1);
}

int main()
{
    std::ios::sync_with_stdio(false);

    std::size_t size;
    std::cin >> size;

    std::vector<std::uint64_t> data(size);
    for(std::size_t i = 0; i < size; i++)
    {
        std::cin >> data[i];
    }

    std::deque<std::uint64_t> deq;
    deq.push_back(data.front());
    swap_remove(data, data.front());

    while(not data.empty())
    {
        bool added = false;

        auto it = std::find(data.begin(), data.end(), deq.front() * 3);
        if(it != data.end())
        {
            deq.push_front(*it);
            swap_remove(data, *it);
        }
        else
        {
            auto it = std::find(data.begin(), data.end(), deq.front() / 2);
            if(it != data.end())
            {
                deq.push_front(*it);
                swap_remove(data, *it);
            }
            else
            {
                auto it = std::find(data.begin(), data.end(), deq.back() * 2);
                if(it != data.end())
                {
                    deq.push_back(*it);
                    swap_remove(data, *it);
                }
                else
                {
                    auto it = std::find(data.begin(), data.end(), deq.back() / 3);
                    if(it != data.end())
                    {
                        deq.push_back(*it);
                        swap_remove(data, *it);
                    }
                    else
                    {
                        return 1;
                    }
                }
            }
        }

    }

    for(auto const& val : deq)
    {
        std::cout << val << ' ';
    }
    std::cout << std::endl;

    return 0;
}
