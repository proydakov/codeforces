#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

int append(int val, int k)
{
    if(k > 1) {
        int delta = val / k;
        if(val % k == 0) {
            delta--;
        }
        val += delta * 5;
    }
    else {
        int delta = val - 1;
        val += delta * 5;
    }
    return val;
}

int main()
{
    std::ios::sync_with_stdio(false);

    int n; int k;
    std::cin >> n;
    std::cin >> k;

    std::vector<std::string> data(n);
    for(int i = 0; i < n; i++) {
        std::cin >> data[i];
    }

    std::string etalon;
    std::cin >> etalon;

    std::sort(data.begin(), data.end(), [](const std::string& s1, const std::string& s2){
        return s1.size() < s2.size();
    });

    int start_counter = 1;
    int end_coutner   = 0;

    for(int i = 0; i < n; i++) {
        if(data[i].size() < etalon.size()) {
            start_counter++;
        }
        if(data[i].size() <= etalon.size()) {
            end_coutner++;
        }
        else {
            break;
        }
    }

    start_counter = append(start_counter, k);
    end_coutner = append(end_coutner, k);
    std::cout << start_counter << ' ' << end_coutner << std::endl;

    return 0;
}
