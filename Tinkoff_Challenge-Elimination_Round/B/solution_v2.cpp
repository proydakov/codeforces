#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

struct point_t
{
    int x;
    int y;
};

bool operator==(const point_t& p1, const point_t& p2)
{
    return (p1.x == p2.x) && (p1.y == p2.y);
}

typedef std::pair<int, std::pair<int, int>> line_t;

bool operator<(const line_t& l1, const line_t& l2)
{
    return l1.first < l2.first;
}

class graph_t
{
public:
    graph_t() : hmax_(0), wmax_(0)
    {
    }

    void read()
    {
        std::cin >> hmax_;
        std::cin >> wmax_;

        graph_.resize(hmax_);
        for(int h = 0; h < hmax_; h++) {
            std::string str;
            std::cin >> str;

            for(int w = 0; w < wmax_; w++) {
                const char c = str[w];
                switch(c) {
                case 'S':
                    s_ = point_t{w, h};
                    break;

                case 'T':
                    t_ = point_t{w, h};
                    break;
                }
            }

            graph_[h] = std::move(str);
        }
    }

    void dump()
    {
        for(int h = 0; h < hmax_; h++) {
            std::cout << graph_[h] << std::endl;
        }
    }

    void calc_line()
    {
        calc_line_impl(s_, s_hline_, s_vline_);
        calc_line_impl(t_, t_hline_, t_vline_);

        mark_hline_impl(s_hline_, '-');
        mark_hline_impl(t_hline_, '-');

        mark_vline_impl(s_vline_, '|');
        mark_vline_impl(t_vline_, '|');
    }

    bool solve()
    {
        bool find = false;

        {
            std::vector<line_t> vlines{s_vline_, t_vline_};
            std::sort(vlines.begin(), vlines.end());

            int min = std::max(vlines[0].second.first, vlines[1].second.first);
            int max = std::min(vlines[0].second.second, vlines[1].second.second);

            // mark vlines
            if(min <= max)
            {
                const line_t tl1{vlines[0].first, std::make_pair(min, max)};
                const line_t tl2{vlines[1].first, std::make_pair(min, max)};

                mark_vline_impl(tl1, '@');
                mark_vline_impl(tl2, '@');
            }

            for(int y = min; y <= max; y++) {
                find = true;
                for(int x = vlines[0].first; x <= vlines[1].first; x++) {
                    if(graph_[y][x] == '*') {
                        find = false;
                        break;
                    }
                }
                if(find) {
                    if(vlines[0].first == vlines[1].first) {
                        const int min_y = std::min(s_.y, t_.y);
                        const int max_y = std::max(s_.y, t_.y);

                        const line_t solution{vlines[0].first, std::make_pair(min_y, max_y)};
                        mark_vline_impl(solution, '#');
                    }
                    else {
                        const line_t solution{y, std::make_pair(vlines[0].first, vlines[1].first)};
                        mark_hline_impl(solution, '#');
                    }
                    goto done;
                }
            }
        }

        {
            std::vector<line_t> hlines{s_hline_, t_hline_};
            std::sort(hlines.begin(), hlines.end());

            int min = std::max(hlines[0].second.first, hlines[1].second.first);
            int max = std::min(hlines[0].second.second, hlines[1].second.second);

            // mark hlines
            if(min <= max)
            {
                line_t tl1{hlines[0].first, std::make_pair(min, max)};
                line_t tl2{hlines[1].first, std::make_pair(min, max)};
                mark_hline_impl(tl1, '@');
                mark_hline_impl(tl2, '@');
            }

            for(int x = min; x <= max; x++) {
                find = true;
                for(int y = hlines[0].first; y <= hlines[1].first; y++) {
                    if(graph_[y][x] == '*') {
                        find = false;
                        break;
                    }
                }
                if(find) {
                    const line_t solution{x, std::make_pair(hlines[0].first, hlines[1].first)};
                    mark_vline_impl(solution, '#');

                    goto done;
                }
            }
        }

done:

        mark_zone();

        return find;
    }

private:
    void calc_line_impl(const point_t& point, line_t& hline, line_t& vline)
    {
        const int px = point.x;
        const int py = point.y;

        {
            hline = std::make_pair(py, std::make_pair(px, px));
            for(int i = px; i < wmax_; i++) {
                if(graph_[py][i] == '*') {
                    break;
                }
                hline.second.second = i;
            }
            for(int i = px; i >= 0; i--) {
                if(graph_[py][i] == '*') {
                    break;
                }
                hline.second.first = i;
            }
        }

        {
            vline = std::make_pair(px, std::make_pair(py, py));
            for(int i = py; i < hmax_; i++) {
                if(graph_[i][px] == '*') {
                    break;
                }
                vline.second.second = i;
            }
            for(int i = py; i >= 0; i--) {
                if(graph_[i][px] == '*') {
                    break;
                }
                vline.second.first = i;
            }
        }
    }

    void mark_hline_impl(const line_t& hline, char ch)
    {
        for(int x = hline.second.first; x <= hline.second.second; x++) {
            graph_[hline.first][x] = ch;
        }
    }

    void mark_vline_impl(const line_t& vline, char cv)
    {
        for(int y = vline.second.first; y <= vline.second.second; y++) {
            graph_[y][vline.first] = cv;
        }
    }

    void mark_zone()
    {
        graph_[s_.y][s_.x] = 'S';
        graph_[t_.y][t_.x] = 'T';
    }

private:
    int hmax_;
    int wmax_;

    std::vector<std::string> graph_;

    point_t s_;
    point_t t_;

    std::pair<int, std::pair<int, int>> s_hline_;
    std::pair<int, std::pair<int, int>> s_vline_;

    std::pair<int, std::pair<int, int>> t_hline_;
    std::pair<int, std::pair<int, int>> t_vline_;
};

int main()
{
    std::ios::sync_with_stdio(false);

    graph_t graph;
    graph.read();

    graph.calc_line();
    bool find = graph.solve();

    if(find) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    //graph.dump();

    return 0;
}
