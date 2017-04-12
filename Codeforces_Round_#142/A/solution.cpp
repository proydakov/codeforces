#include <vector>
#include <iostream>
#include <algorithm>

struct dragon
{
    int power;
    int bonus;
};

bool operator<(const dragon& d1, const dragon& d2)
{
    return d1.power < d2.power;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int s; int n;
    std::cin >> s;
    std::cin >> n;

    std::vector<dragon> dragons;
    dragons.reserve(n);

    for(int i = 0; i < n; i++) {
        dragon d;
        std::cin >> d.power;
        std::cin >> d.bonus;
        dragons.push_back(d);
    }

    std::sort(dragons.begin(), dragons.end());

    bool win = true;
    for(int i = 0; i < n && win; i++) {
        if(s > dragons[i].power) {
            s += dragons[i].bonus;
        }
        else {
            win = false;
        }
    }

    if(win) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
