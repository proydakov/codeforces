#include <array>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);

    std::array<int, 10> array;
    array.fill(0);

    std::vector<int> parts;
    parts.reserve(8);

    for(int i = 0; i < 6; i++) {
        int val;
        std::cin >> val;

        array[val]++;
        parts.push_back(val);
    }

    int hand_len = 0;
    bool hand = false;
    for(int i = 0; i < 10; i++) {
        if(array[i] >= 4) {
            hand_len = i;
            hand = true;
            break;
        }
    }

    if(!hand) {
        std::cout << "Alien" << std::endl;
        return 0;
    }

    auto it = std::remove(parts.begin(), parts.end(), hand_len);
    parts.erase(it, parts.end());
    if(parts.size() < 2) {
        for(int i = parts.size(); i < 2; i++) {
            parts.push_back(hand_len);
        }
    }
    std::sort(parts.begin(), parts.end());

    if(parts.front() < parts.back()) {
        std::cout << "Bear" << std::endl;
    }
    else if(parts.front() == parts.back()) {
        std::cout << "Elephant" << std::endl;
    }
    else {
        std::cout << "Alien" << std::endl;
    }

    return 0;
}
