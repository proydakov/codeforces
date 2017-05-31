#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; std::string level;

    std::cin >> n;
    std::cin >> level;

    bool hole_jump = false;
    for(int i = 0; i < n && !hole_jump; i++) {
        if('.' == level[i]) {
            continue;
        }

        const size_t next_space_index = level.find('.', i + 1);
        if(std::string::npos == next_space_index) {
            continue;
        }

        const size_t next_platform_index = level.find('*', next_space_index + 1);
        if(std::string::npos == next_platform_index) {
            break;
        }

        for(int p = next_platform_index; p < n && !hole_jump; p++) {
            if('.' == level[p]) {
                continue;
            }

            int jump_counter = 0;
            const size_t step = p - i;

            for(int j = i; j < n; j += step) {
                if(level[j] == '*') {
                    jump_counter++;
                }
                else {
                    break;
                }

                if(jump_counter > 4) {
                    hole_jump = true;
                    break;
                }
            }
        }

    }

    bool full_level = level.find("*****") != std::string::npos;

    if(hole_jump || full_level) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}
