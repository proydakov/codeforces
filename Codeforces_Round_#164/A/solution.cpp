#include <vector>
#include <iostream>

struct team
{
    int h;
    int a;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<team> teams;
    teams.reserve(n);

    for(int i = 0; i < n; i++) {
        int h; int a;
        std::cin >> h;
        std::cin >> a;
        teams.push_back( team{h, a} );
    }

    int counter = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                continue;
            }
            if(teams[i].h == teams[j].a) {
                counter++;
            }
        }
    }

    std::cout << counter << std::endl;

    return 0;
}
