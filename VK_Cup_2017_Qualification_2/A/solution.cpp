#include <string>
#include <iostream>

class generator_t
{
public:
    generator_t(int k) : alphabet_("abcdefghijklmnopqrstuvwxyz"), k_(k), index_(0)
    {
        alphabet_.resize(k);
    }

    char next()
    {
        char c = alphabet_[index_];
        index_++;
        index_ %= k_;
        return c;
    }

private:
    std::string alphabet_;
    int k_;
    int index_;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    generator_t generator(k);
    for(int i = 0; i < n; i++) {
        std::cout << generator.next();
    }
    std::cout << std::endl;

    return 0;
}
