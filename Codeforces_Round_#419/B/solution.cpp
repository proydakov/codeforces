#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio();

    int n; int k; int q;

    std::cin >> n;
    std::cin >> k;
    std::cin >> q;

    std::vector<int> cache(200001, 0);
    for(int i = 0; i < n; i++) {
        int l; int r;
        std::cin >> l;
        std::cin >> r;

        for(int j = l; j <= r; j++) {
            cache[j]++;
        }
    }

    for(int i = 0; i < q; i++) {
        int a; int b;
        std::cin >> a;
        std::cin >> b;

        int counter = 0;
        for(int j = a; j <= b; j++) {
            if(cache[j] >= k) {
                counter++;
            }
        }
        std::cout << counter << std::endl;
    }

    return 0;
}
