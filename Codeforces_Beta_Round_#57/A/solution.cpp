#include <string>
#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);

    std::string s1;
    std::string s2;

    std::cin >> s1;
    std::cin >> s2;

    const int size = s1.size();

    std::string s3;
    s3.resize(size);

    for(int i = size - 1; i >= 0; i--) {
        int t1 = s1[i] - '0';
        int t2 = s2[i] - '0';

        s3[i] = (t1 + t2) % 2 + '0';
    }

    std::cout << s3 << std::endl;

    return 0;
}
