#include <set>
#include <iostream>
#include <algorithm>

void load_set(std::set<std::string>& set, int size)
{
    for(int i = 0; i < size; i++) {
        std::string temp;
        std::cin >> temp;

        set.insert(std::move(temp));
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int m;
    std::cin >> n;
    std::cin >> m;

    std::set<std::string> n_set;
    std::set<std::string> m_set;

    load_set(n_set, n);
    load_set(m_set, m);

    std::set<std::string> int_set;

    std::set_intersection(n_set.begin(), n_set.end(),
                          m_set.begin(), m_set.end(),
                          std::inserter(int_set, int_set.begin()));

    int int_size = int_set.size();
    int int_delta = int_size % 2;

    int n_size = n_set.size() - int_size + int_delta;
    int m_size = m_set.size() - int_size;

    if(n_size > m_size) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
