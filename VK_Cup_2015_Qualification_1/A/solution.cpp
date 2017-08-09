#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

size_t depth(const std::unordered_map<std::string, std::vector<std::string>>& table, const std::string& item)
{
    size_t size{1};

    auto it = table.find(item);
    if(table.end() == it) {
        return size;
    }

    const std::vector<std::string>& vec = it->second;
    for(const auto name : vec) {
        size_t test_size = depth(table, name) + 1;
        size = std::max(size, test_size);
    }

    return size;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::unordered_map<std::string, std::vector<std::string>> table;
    table.reserve(n);

    for(int i = 0; i < n; i++) {
        std::string name1;
        std::string temp;
        std::string name2;

        std::cin >> name1;
        std::cin >> temp;
        std::cin >> name2;

        std::transform(name1.begin(), name1.end(), name1.begin(), ::tolower);
        std::transform(name2.begin(), name2.end(), name2.begin(), ::tolower);

        table[name2].push_back(name1);
    }

    std::string head("polycarp");

    size_t solultion = depth(table, head);
    std::cout << solultion << std::endl;

    return 0;
}
