bool start_with(std::string const& s, std::string const& p)
{
    return s.find(p) == 0;
}

bool end_with(std::string const& s, std::string const& p)
{
    return s.rfind(p) == s.size() - p.size();
}
