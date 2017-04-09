#include <string>
#include <iostream>
#include <algorithm>

class machine
{
public:
    machine(const std::string& str) : str_(str) {}

    bool process(const std::string& text) const
    {
        size_t search_index = 0;
        const size_t search_size = str_.size();
        const size_t text_size = text.size();

        for(size_t i = 0; i < text_size; i++) {
            if(text[i] == str_[search_index]) {
                ++search_index;
            }
            if(search_size == search_index) {
                return true;
            }
        }

        return false;
    }

private:
    std::string str_;
};

int main()
{
    std::ios::sync_with_stdio(false);

    std::string str;
    std::cin >> str;

    machine m("hello");
    const bool res = m.process(str);

    if(res) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}
