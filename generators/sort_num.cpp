#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

int main(int argc, char* argv[])
{
    std::ios::sync_with_stdio(false);

    if(argc != 2) {
        std::cerr << argv[0] << " <count>" << std::endl;
        return 1;
    }

    const int num = std::stoi(argv[1]);

    std::vector<int> data(num, 0);
    for(int i = 0; i < num; i++) {
        std::cin >> data[i];
    }

    std::sort(data.begin(), data.end());

    std::cout << "is_sorted: " << std::is_sorted(data.begin(), data.end()) << std::endl;

    return 0;
}
