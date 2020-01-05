#include <vector>
#include <cstdint>
#include <iostream>
#include <algorithm>

struct descriptor
{
    int first;
    int last;
    bool up;
};

int main()
{
    std::ios::sync_with_stdio(false);

    std::int64_t n = 0;
    std::cin >> n;

    std::vector<int> vec_fisrt;
    vec_fisrt.reserve(n);

    std::vector<int> vec_last;
    vec_last.reserve(n);

    std::int64_t up = 0;

    for(int i = 0; i < n; i++)
    {
        int l = 0;
        std::cin >> l;

        int last = 0;
        std::cin >> last;

        descriptor d{last, last, false};
        for (int j = 1; j < l; j++)
        {
            int current = 0;
            std::cin >> current;
            if (current > last)
            {
                d.up = true;
            }
            last = current;
        }
        d.last = last;
        if (d.up)
        {
            up++;
        }
        else
        {
            vec_fisrt.push_back(d.first);
            vec_last.push_back(d.last);
        }
    }

    std::sort(vec_fisrt.begin(), vec_fisrt.end(), [](auto d1, auto d2){
        return d1 < d2;
    });

    std::sort(vec_last.begin(), vec_last.end(), [](auto d1, auto d2){
        return d1 > d2;
    });

    std::int64_t const up_res = (n * n) - ((n - up) * (n - up));

    std::int64_t res_cnt = 0;
    for(auto d : vec_last)
    {
        auto const it = std::upper_bound(vec_fisrt.begin(), vec_fisrt.end(), d);
        auto const dist = std::distance(it, vec_fisrt.end());
        res_cnt += dist;
    }

    std::cout << (up_res + res_cnt) << std::endl;

    return 0;
}
