#include <cmath>
#include <queue>
#include <limits>
#include <vector>
#include <iostream>

struct node_t
{
    int x;
    int y;
};

bool operator==(const node_t& n1, const node_t& n2)
{
    return (n1.x == n2.x) && (n1.y == n2.y);
}

std::ostream& operator<<(std::ostream& os, const node_t& n)
{
    os << "node: [" << n.x << ',' << n.y << "]";
    return os;
}

enum class direction_t
{
    direction_zero,
    direction_dx,
    direction_dy
};

std::ostream& operator<<(std::ostream& os, direction_t direction)
{
    switch(direction) {
        case direction_t::direction_zero:
            os << "direction_zero";
            break;

        case direction_t::direction_dx:
            os << "direction_dx";
            break;

        case direction_t::direction_dy:
            os << "direction_dy";
            break;
    }
    return os;
}

class graph
{
public:
    graph() :
        hmax_(0), wmax_(0)
    {
    }

    void read()
    {
        std::cin >> hmax_;
        std::cin >> wmax_;

        const int size = get_size();

        graph_.reserve(size);

        const std::string noop(wmax_ + 2, '*');
        graph_.append( noop );

        for(int h = 0; h < hmax_; h++) {
            std::string str;
            std::cin >> str;

            graph_.push_back('*');
            for(int w = 0; w < wmax_; w++) {
                const char c = str[w];

                switch(c) {
                    case 'S':
                        from_ = node_t{w + 1, h + 1};
                        break;

                    case 'T':
                        to_ = node_t{w + 1, h + 1};
                        break;
                }
            }
            graph_.append( str );
            graph_.push_back('*');
        }
        graph_.append( noop );

        std::vector<int> neighbors;
        neighbors.reserve(4);
        neighbors_.resize(size, neighbors);

        to_index_ = node_2_index(to_);
    }

    void dump()
    {
        int index = 0;
        for(int h = 0; h < hmax_ + 2; h++) {
            for(int w = 0; w < wmax_ + 2; w++) {
                std::cout << graph_[index];
                index++;
            }
            std::cout << std::endl;
        }
    }

    void build_cache()
    {
        for(int h = 1; h < hmax_ + 1; h++) {
            for(int w = 1; w < wmax_ + 1; w++) {
                int current_index = node_2_index(w, h);
                calc_neighbors(w, h, neighbors_[current_index]);
            }
        }
    }

    node_t get_from() const
    {
        return from_;
    }

    bool dfs(node_t from)
    {
        const int from_index = node_2_index(from);
        std::vector<int> cache(get_size(), 0);
        return dfs(from_index, direction_t::direction_zero, 0, cache);
    }

private:
    int get_size() const
    {
        return (hmax_ + 2) * (wmax_ + 2);
    }

    node_t index_2_node(int index)
    {
        const int x = index % (wmax_ + 2);
        const int y = index / (wmax_ + 2);
        return node_t{x, y};
    }

    int node_2_index(node_t n)
    {
        const int index = n.y * (wmax_ + 2) + n.x;
        return index;
    }

    int node_2_index(int x, int y)
    {
        const int index = y * (wmax_ + 2) + x;
        return index;
    }

    direction_t get_direction(int index1, int index2)
    {
        if(std::abs(index1 - index2) < 2) {
            return direction_t::direction_dx;
        }
        return direction_t::direction_dy;
    }

    void calc_neighbors(int x, int y, std::vector<int>& neighbors)
    {
        {
            const int y1 = y - 1;
            int index = node_2_index(x, y1);
            if(graph_[index] != '*') {
                neighbors.push_back( index );
            }
        }

        {
            const int y2 = y + 1;
            int index = node_2_index(x, y2);
            if(graph_[index] != '*') {
                neighbors.push_back( index );
            }
        }

        {
            const int x1 = x - 1;
            int index = node_2_index(x1, y);
            if(graph_[index] != '*') {
                neighbors.push_back( index );
            }
        }

        {
            const int x2 = x + 1;
            int index = node_2_index(x2, y);
            if(graph_[index] != '*') {
                neighbors.push_back( index );
            }
        }
    }

    bool dfs(int from_index, direction_t from_dir, int penalti, std::vector<int>& cache)
    {
        //std::cout << "from: " << index_2_node(from_index) << " dir: " << from_dir << " penalti: " << penalti << std::endl;

        if(penalti > 3) {
            return false;
        }

        if(from_index == to_index_) {
            return true;
        }

        cache[from_index] = 1;

        const std::vector<int>& neighbors = neighbors_[from_index];
        for(const int node_index : neighbors) {
            if(cache[node_index]) {
                continue;
            }

            const direction_t node_dir = get_direction(from_index, node_index);
            int node_penalti = penalti;
            if(node_dir != from_dir) {
                node_penalti++;
            }

            const bool search = dfs(node_index, node_dir, node_penalti, cache);
            if(search) {
                return true;
            }
        }

        cache[from_index] = 0;

        return false;
    }

private:
    int hmax_;
    int wmax_;

    node_t from_;
    node_t to_;

    int to_index_;

    std::string graph_;
    std::vector<std::vector<int>> neighbors_;
};

int main()
{
    std::ios::sync_with_stdio(false);
    //freopen("/home/proydakov/repository/codeforces/Tinkoff_Challenge-Elimination_Round/B/input_01.txt", "r", stdin);

    graph g;
    g.read();
    g.build_cache();

    //g.dump();
    //return 0;

    const node_t from = g.get_from();
    bool find = g.dfs(from);

    if(find) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
