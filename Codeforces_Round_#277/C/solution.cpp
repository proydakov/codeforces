#include <vector>
#include <iostream>
#include <algorithm>

void calc(int m, int s, std::vector<int>& buffer)
{
    if(m <= 1) {
        buffer.push_back(s);
    }
    else if(s > 9) {
        buffer.push_back(9);
        calc(m - 1, s - 9, buffer);
    }
    else {
        buffer.push_back(s);
        calc(m - 1, 0, buffer);
    }
}

template<class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    for(const auto item : vec) {
        os << item;
    }
    return os;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int m; int s;

    std::cin >> m;
    std::cin >> s;

    std::vector<int> max;
    max.reserve(m);

    calc(m, s, max);

    if(1 == max.size() && max.back() < 10) {
        std::cout << max.back() << ' ' << max.back() << std::endl;
        return 0;
    }

    if(max.empty() || max.front() == 0 || max.back() > 9) {
        std::cout << -1 << ' ' << -1 << std::endl;
        return 0;
    }

    std::vector<int> min(max);
    std::reverse(min.begin(), min.end());

    if(0 == min[0]) {
        min[0] = 1;
        for(int i = 1; i < m; i++) {
            if(min[i] > 0) {
                min[i] = min[i] - 1;
                break;
            }
        }
    }

    std::cout << min << ' ' << max << std::endl;

    return 0;
}
