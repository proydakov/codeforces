#include <set>
#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string name1;
    std::string name2;

    std::cin >> name1;
    std::cin >> name2;

    int n;
    std::cin >> n;

    std::cout << name1 << ' ' << name2 << std::endl;

    std::set<std::string> names{name1, name2};
    for(int i = 0; i < n; i++) {
        std::cin >> name1;
        std::cin >> name2;

        names.erase (name1);
        names.insert(name2);

        for(const auto& name : names) {
            std::cout << name << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}
