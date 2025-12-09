#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class Replace
{
    private:
        std::string name_file;
        std::string s1;
        std::string s2;

    public:
        Replace(const std::string &fn, const std::string &s1, const std::string &s2);
        void    start_replace();
};

#endif