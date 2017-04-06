#include <string>
#include <sstream>
#include <iostream>

void solve()
{
    std::string str;
    std::cin >> str;
    if(str.size() > 10) {
        std::stringstream sstream;
        sstream << str.front();
        sstream << (str.size() - 2);
        sstream << str.back();
        std::cout << sstream.str() << "\n";
        return;
    }
    std::cout << str << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        solve();
    }

    return 0;
}
