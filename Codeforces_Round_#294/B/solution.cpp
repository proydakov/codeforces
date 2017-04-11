#include <map>
#include <iostream>

void decr(std::map<int, int>& errors, int key)
{
    auto it = errors.find(key);
    if(it->second == 1) {
        errors.erase(it);
    }
    else {
        it->second--;
    }
}

int remove(std::map<int, int>& errors, int from, int n)
{
    for(int i = from; i < n; i++) {
        int temp;
        std::cin >> temp;
        decr(errors, temp);
    }
    return errors.begin()->first;
}

void read(std::map<int, int>& errors, int n)
{
    for(int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        errors[temp]++;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::map<int, int> errors;
    read(errors, n);

    std::map<int, int> copy(errors);
    const int error1 = remove(copy, 1, n);

    std::cout << error1 << std::endl;
    decr(errors, error1);

    const int error2 = remove(errors, 2, n);
    std::cout << error2 << std::endl;

    return 0;
}
