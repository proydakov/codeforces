#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int t;
    std::cin >> n;
    std::cin >> t;

    std::string str;
    std::cin >> str;

    --n;
    for(int i = 0; i < t; i++) {
        std::vector<int> data(str.size(), 0);
        for(int j = n; j > 0; j--) {
            if(data[j] == 0 && str[j] == 'G' && str[j - 1] == 'B') {
                std::swap(str[j], str[j - 1]);
                data[j - 1] = 1;
            }
        }
    }

    std::cout << str << std::endl;

    return 0;
}
