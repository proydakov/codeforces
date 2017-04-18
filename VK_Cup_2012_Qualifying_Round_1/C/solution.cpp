#include <vector>
#include <iostream>
#include <algorithm>

class path_processor
{
public:
    path_processor()
    {
        stack_.reserve(1024);
    }

    void cd(const std::string& path)
    {
        size_t from = 0;
        if(path[0] == '/') {
            from = 1;
            stack_.clear();
        }

        size_t pos = path.find('/', from);
        while(pos != std::string::npos) {
            std::string step = path.substr(from, pos - from);
            concat_path(step);
            from = pos + 1;
            pos = path.find('/', from);
        }
        if(from < path.size()) {
            std::string step = path.substr(from);
            concat_path(step);
        }
    }

    void pwd()
    {
        if(!stack_.empty()) {
            for(int i = 0; i < stack_.size(); i++) {
                std::cout << '/' << stack_[i];
            }
        }
        std::cout << "/" << std::endl;
    }

private:
    void concat_path(const std::string& step)
    {
        if(".." == step) {
            stack_.resize( std::max(0, int(stack_.size()) - 1) );
        }
        else {
            stack_.push_back(step);
        }
    }

private:
    std::vector<std::string> stack_;
};

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    path_processor processor;
    for(int i = 0; i < n; i++) {
        std::string cmd;
        std::cin >> cmd;

        if(cmd == "cd") {
            std::string path;
            std::cin >> path;

            processor.cd(path);
        }
        else if(cmd == "pwd") {
            processor.pwd();
        }
        else {
            throw std::invalid_argument(cmd);
        }
    }

    return 0;
}
