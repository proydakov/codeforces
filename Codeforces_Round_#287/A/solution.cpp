#include <vector>
#include <iostream>
#include <algorithm>

struct val_t
{
    int index;
    int value;
};

bool operator<(val_t v1, val_t v2)
{
    return v1.value < v2.value;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    std::vector<val_t> values(n);

    for(int i = 0, index = 1; i < n; i++, index++) {
        int temp;
        std::cin >> temp;
        values[i] = val_t{index, temp};
    }

    std::sort(values.begin(), values.end());

    int t1k = k;
    int counter = 0;
    for(int i = 0; i < n; i++) {
        t1k -= values[i].value;
        if(t1k >= 0) {
            counter++;
        }
    }
    std::cout << counter << std::endl;

    int t2k = k;
    for(int i = 0; i < n; i++) {
        t2k -= values[i].value;
        if(t2k >= 0) {
            std::cout << values[i].index << ' ';
        }
    }
    std::cout << std::endl;

    return 0;
}
