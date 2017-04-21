#include <cmath>
#include <vector>
#include <iostream>

struct time_point
{
    int h;
    int m;
};

bool operator==(const time_point& p1, const time_point& p2)
{
    return p1.h == p2.h && p1.m == p2.m;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<time_point> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i].h;
        std::cin >> data[i].m;
    }

    int count = 1;
    int max_count = 1;
    for(int i = 1; i < n; i++) {
        if(data[i] == data[i - 1]) {
            count++;
        }
        else {
            count = 1;
        }
        max_count = std::max(max_count, count);
    }

    std::cout << max_count << std::endl;

    return 0;
}
