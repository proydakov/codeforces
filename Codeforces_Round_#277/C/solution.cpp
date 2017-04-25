#include <string>
#include <iostream>
#include <algorithm>

std::string calc_max(int m, int s, std::string& str)
{
    if(m == 1) {
        str.append(std::to_string(s));
    }
    else if(s > 9) {
        str.append(std::to_string(9));
        calc_max(m - 1, s - 9, str);
    }
    else {
        str.append(std::to_string(s));
        calc_max(m - 1, 0, str);
    }
    return str;
}

std::string calc_min(int m, int s, std::string& str)
{
    
    
    return str;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int m; int s;
    std::cin >> m;
    std::cin >> s;

/*
    if(m == 1 && s < 10) {
        std::cout << s << ' ' << s << std::endl;
        return 0;
    }

    if(s == 0 && m > 1) {
        std::cout << -1 << ' ' << -1 << std::endl;
        return 0;
    }
*/

    std::string max;
    calc_max(m, s, max);

    if(max.front() == '0' || max.size() != m) {
        std::cout << -1 << ' ' << -1 << std::endl;
        return 0;
    }

    std::cout << max << std::endl;

    return 0;
}
