#include <map>
#include <iostream>

void dump_reverse(const std::map<int, int>& map, int s, char c)
{
    int counter = 0;
    for(auto it = map.rbegin(), end_it = map.rend(); it != end_it && counter < s; ++it) {
        std::cout << c << ' ' << it->first << ' ' << it->second << std::endl;
        ++counter;
    }
}

void dump_offset(const std::map<int, int>& map, int s, char c)
{
    size_t size = map.size();
    if(s >= size) {
        dump_reverse(map, s, c);
        return;
    }
    auto it = map.rbegin();
    while(size > s) {
        ++it;
        --size;
    }
    for(auto end_it = map.rend(); it != end_it; ++it) {
        std::cout << c << ' ' << it->first << ' ' << it->second << std::endl;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int s;

    std::cin >> n;
    std::cin >> s;

    std::map<int, int> map_s;
    std::map<int, int> map_b;

    for(int i = 0; i < n; i++) {
        char c; int p; int q;

        std::cin >> c;
        std::cin >> p;
        std::cin >> q;

        switch(c) {
            case 'S':
            {
                map_s[p] += q;
            }
                break;

            case 'B':
            {
                map_b[p] += q;
            }
                break;

            default:
                break;
        }
    }

    dump_offset(map_s, s, 'S');
    dump_reverse(map_b, s, 'B');

    return 0;
}
