#include <iostream>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);

    std::unordered_map<int, int> cache;
    cache[ 25] = 0;
    cache[ 50] = 0;
    cache[100] = 0;

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;

        switch(temp) {
            case 25:
                {
                    cache[25]++;
                }
                break;

            case 50:
                {
                    cache[50]++;
                    if(cache[25] > 0) {
                        cache[25]--;
                    }
                    else {
                        std::cout << "NO" << std::endl;
                        return 0;
                    }
                }
                break;

            case 100:
                {
                    cache[100]++;
                    if(cache[50] > 0 && cache[25] > 0) {
                        cache[50]--;
                        cache[25]--;
                    }
                    else if(cache[25] > 2) {
                        cache[25] -= 3;
                    }
                    else {
                        std::cout << "NO" << std::endl;
                        return 0;
                    }
                }
                break;
        }
    }

    std::cout << "YES" << std::endl;

    return 0;
}
