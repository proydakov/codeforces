#include <vector>
#include <iostream>
#include <unordered_set>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::vector<std::pair<std::string, int>> steps(n);
    for(int i = 0; i < n; i++) {
        std::cin >> steps[i].first;
        std::cin >> steps[i].second;
    }

    int max_score = 0;
    std::unordered_set<std::string> names;

    {
        std::unordered_map<std::string, int> score;
        score.reserve(n);

        for(int i = 0; i < n; i++) {
            score[steps[i].first] += steps[i].second;
        }

        for(const auto& item : score) {
            if(item.second > max_score) {
                max_score = item.second;
                names.clear();
            }

            if(item.second == max_score) {
                names.insert(item.first);
            }
        }
    }

    if(names.size() == 1) {
        std::cout << (*names.begin()) << std::endl;
    }
    else {
        std::unordered_map<std::string, int> score;
        score.reserve(n);

        for(int i = 0; i < n; i++) {
            score[steps[i].first] += steps[i].second;
            if(score[steps[i].first] >= max_score && names.count(steps[i].first) > 0) {
                std::cout << steps[i].first << std::endl;
                break;
            }
        }
    }

    return 0;
}
