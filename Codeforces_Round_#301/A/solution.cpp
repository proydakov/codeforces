#include <cmath>
#include <vector>
#include <iostream>

void read(std::vector<int>& data)
{
    for(int i = 0; i < data.size(); i++) {
        char c;
        std::cin >> c;
        data[i] = c - '0';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> top(n, 0);
    read(top);

    std::vector<int> bot(n, 0);
    read(bot);

    int count = 0;

    for(int i = 0; i < n; i++) {
        int temp = std::abs(top[i] - bot[i]);
        if(temp <= 5) {
            count += temp;
        }
        else {
            count += 10 - temp;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
