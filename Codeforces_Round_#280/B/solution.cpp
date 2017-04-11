#include <set>
#include <vector>
#include <iostream>
#include <algorithm>

struct item
{
    int delta;
    int remainder;

    int p1;
    int p2;
};

bool operator<(const item& i1, const item& i2)
{
    if(i1.delta == i2.delta) {
        return i1.remainder < i2.remainder;
    }
    return i1.delta < i2.delta;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int l;
    std::cin >> n;
    std::cin >> l;

    std::vector<int> vec(n, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    std::sort(vec.begin(), vec.end());
    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());

    std::set<item> queue;
    queue.insert( item{   vec.front(), 0,          0, vec.front()} );
    queue.insert( item{l - vec.back(), 0, vec.back(),           l} );

    for(int i = 0; i < n - 1; i++) {
        const int abs = vec[i + 1] - vec[i];
        const int delta = abs / 2;
        const int remainder = abs % 2;
        queue.insert(item{delta, remainder, vec[i], vec[i + 1]});
    }

    auto elem = (*queue.rbegin());
    std::cout << elem.delta;
    if(elem.remainder) {
        std::cout << ".5";
    }
    std::cout << std::endl;

    return 0;
}
