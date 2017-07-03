#include <vector>
#include <iostream>

size_t to_index(std::string val)
{
    size_t index{0};

    size_t offset = 1;
    for(int i = val.size() - 1; i >= 0; i--, offset *= 2) {
        int num = static_cast<int>(val[i] - '0');
        if(num) {
            index += offset;
        }
    }

    return index;
}

size_t to_mask(std::string val)
{
    for(int i = 0; i < val.size(); i++) {
        int num = static_cast<int>(val[i] - '0');
        if(num % 2 == 0) {
            num = 0;
        }
        else {
            num = 1;
        }
        val[i] = num + '0';
    }

    return to_index(val);
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<int> cache(1024 * 1024, 0);

    for(int i = 0; i < n; i++) {
        char c; std::string val;
        std::cin >> c;
        std::cin >> val;

        switch(c) {
            case '+':
            {
                size_t index = to_mask(val);
                cache[index]++;
            }
                break;

            case '-':
            {
                size_t index = to_mask(val);
                cache[index]--;
            }
                break;

            case '?':
            {
                size_t index = to_index(val);
                std::cout << cache[index] << std::endl;
            }
                break;
        }
    }

    return 0;
}
