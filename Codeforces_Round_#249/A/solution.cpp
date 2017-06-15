#include <vector>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    std::vector<int> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    int count = 0;
    int acc = 0;
    for(int i = 0; i < n;) {
        if((acc + data[i]) <= m) {
            acc += data[i];
            i++;
        }
        else {
            count++;
            acc = 0;
        }
    }
    if(acc > 0) {
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}
