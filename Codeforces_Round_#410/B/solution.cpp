#include <cmath>
#include <limits>
#include <string>
#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<std::string> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    if(n == 1) {
        std::cout << 0 << std::endl;
        return 0;
    }

    bool ok = true;
    std::string double_str(data[0] + data[0]);
    for(int i = 1; i < n; i++) {
        int find_position = double_str.find(data[i]);
        if(find_position == std::string::npos) {
            ok = false;
            break;
        }
    }

    if(!ok) {
        std::cout << -1 << std::endl;
        return 0;
    }

    const size_t size = data[0].size();
    int min_count = std::numeric_limits<int>::max();
    for(int s = 0; s < n; s++) {
        int count = 0;
        std::string double_str(data[s] + data[s]);
        for(int i = 0; i < n; i++) {
            if(i == s) {
                continue;
            }
            int find_position = double_str.find(data[i]);
            std::cout << "find: " << data[i] << " in: " << double_str << " pos: " << find_position << std::endl;
            if(find_position != 0) {
                count += size - find_position;
            }
        }
        std::cout << data[s] << " - " << count << std::endl;
        min_count = std::min(min_count, count);
    }

    std::cout << min_count << std::endl;

    return 0;
}
