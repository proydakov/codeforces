#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int d;
    std::cin >> n;
    std::cin >> d;

    int max_win = 0;

    int win = 0;
    for(int i = 0; i < d; i++) {
        std::string buffer;
        std::cin >> buffer;

        const auto it = std::find(buffer.begin(), buffer.end(), '0');
        if(it == buffer.end()) {
            max_win = std::max(win, max_win);
            win = 0;
        }
        else {
            win++;
        }
    }
    max_win = std::max(win, max_win);
    std::cout << max_win << std::endl;

    return 0;
}
