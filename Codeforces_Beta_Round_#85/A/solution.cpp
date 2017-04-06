#include <string>
#include <iostream>
#include <algorithm>

int compare(const std::string& s1, const std::string& s2)
{
    const size_t size = s1.size();
    for(size_t i = 0; i < size; i++) {
        if(s1[i] < s2[i]) {
            return -1;
        }
        else if(s1[i] > s2[i]) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    std::ios::sync_with_stdio(false);

    std::string s1;
    std::string s2;

    std::cin >> s1;
    std::cin >> s2;

    std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int cmp = compare(s1, s2);

    std::cout << cmp << std::endl;

    return 0;
}
