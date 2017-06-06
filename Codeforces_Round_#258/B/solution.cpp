#include <vector>
#include <cstdint>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<uint64_t> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    int delta = 1;

    int switch_1 = -1;
    int switch_2 = -1;
    int switch_counter = 0;

    for(int i = 1; i < n; i++) {
        if(data[i] < data[i - 1] && switch_counter > 0 && delta == 1) {
            switch_counter = 2;
            break;
        }
        if(data[i] < data[i - 1] && switch_counter == 0) {
            switch_counter = 1;
            delta = -1;
            switch_1 = i - 1;
        }
        if(data[i] > data[i - 1]) {
            if(-1 == delta) {
                switch_2 = i - 1;
            }
            delta = 1;
        }
    }

    if(delta == -1) {
        switch_2 = data.size() - 1;
    }

    if(switch_counter > 1) {
        std::cout << "no" << std::endl;
    }

    if(switch_counter == 0) {
        std::cout << "yes" << std::endl;
        std::cout << "1 1" << std::endl;
    }

    if(switch_counter == 1) {
        if(switch_1 > 0) {
            if(data[switch_2] < data[switch_1 - 1]) {
                std::cout << "no" << std::endl;
                return 0;
            }
        }

        if(switch_2 + 1 < data.size()) {
            if(data[switch_1] > data[switch_2 + 1]) {
                std::cout << "no" << std::endl;
                return 0;
            }
        }

        std::cout << "yes" << std::endl;
        std::cout << (switch_1 + 1) << ' ' << (switch_2 + 1) << std::endl;
    }

    return 0;
}
