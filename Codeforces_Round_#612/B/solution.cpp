#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_set>

struct cleaner
{
    cleaner(char c1, char c2) : c1_(c1), c2_(c2) {}

    bool operator()(char c) const
    {
        return c1_ == c or c2_ == c;
    }

    char const c1_;
    char const c2_;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int n, k;
    std::cin >> n;
    std::cin >> k;

    std::unordered_set<std::string> cards_set;
    cards_set.reserve(n);

    std::vector<std::string> cards(n, std::string(k, ' '));
    for(int i = 0; i < n; i++)
    {
        std::cin >> cards[i];
        cards_set.insert(cards[i]);
    }

    int counter = 0;

    std::string buffer;
    buffer.reserve(k);

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            buffer.resize(0);

            auto const& c1 = cards[i];
            auto const& c2 = cards[j];

            for (int c = 0; c < k; c++)
            {
                if (c1[c] == c2[c])
                {
                    buffer.push_back(c1[c]);
                }
                else
                {
                    cleaner const clean{c1[c], c2[c]};
                    std::string temp("SET");
                    temp.erase(std::remove_if(temp.begin(), temp.end(), clean), temp.end());
                    buffer.push_back(temp[0]);
                }
            }

            if (cards_set.end() != cards_set.find(buffer))
            {
                counter++;
            }
        }
    }
    std::cout << counter / 3 << std::endl;

    return 0;
}
