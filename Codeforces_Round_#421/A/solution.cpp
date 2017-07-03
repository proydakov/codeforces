#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    int c; int v0; int v1; int a; int l;

    std::cin >> c;
    std::cin >> v0;
    std::cin >> v1;
    std::cin >> a;
    std::cin >> l;

    int page = 0;
    int i = 1;

    for(; ; i++) {
        int ceff = v0 + (i - 1) * a;
        if(ceff > v1) {
            ceff = v1;
        }
        if(i > 1) {
            page -= l;
        }
        page += ceff;
        if(page >= c) {
            break;
        }
    }
    std::cout << i << std::endl;

    return 0;
}
