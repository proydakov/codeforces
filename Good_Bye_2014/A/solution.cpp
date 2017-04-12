#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    int t;
    std::cin >> n;
    std::cin >> t;

    std::vector<int> data(n, 0);
    for(int i = 1; i < n; i++) {
        std::cin >> data[i];
    }

    bool find = t == 1;
    for(int i = 1; i < n && !find;) {
        i += data[i];
        if(i == t) {
            find = true;
        }
    }

    if(find) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
