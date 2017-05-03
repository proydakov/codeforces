#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> lines;
    lines.reserve(128);

    int size = 0;

    for(int i = 0; i < n; i++) {
        char c;
        std::cin >> c;

        switch(c) {
            case 'W':
            {
                if(size > 0) {
                    lines.push_back(size);
                }
                size = 0;
            }
                break;

            case 'B':
            {
                size++;
            }
                break;
        }
    }
    if(size > 0) {
        lines.push_back(size);
    }

    std::cout << lines.size() << std::endl;

    for(const int item : lines) {
        std::cout << item << ' ';
    }
    std::cout << std::endl;

    return 0;
}
