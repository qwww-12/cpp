#include "Replace.hpp"

Replace::Replace(const std::string &fn, const std::string &s1, const std::string &s2)
        : name_file(fn), s1(s1), s2(s2)
{}

void    Replace::start_replace()
{
    std::ifstream   file(name_file);
    std::string     line;

    if (!file.is_open())
    {
        std::cout << "Error file" << std::endl;
        exit (1);
    }
    std::ofstream   newfile(name_file + ".replace");
    if (!newfile.is_open())
    {
        std::cout << "Create file faild" << std::endl;
        file.close();
        exit (1);
    }
    if (s1 == s2)
    {
        while (getline(file, line))
        {
            newfile << line;
            if (file.peek() != EOF)
                newfile << "\n";
        }
    }
    while (getline(file, line) && s1 != s2)
    {
        int index = 0;
        int result = 0;
        while ((result = line.find(s1, index)) != std::string::npos)
        {
            result = line.find(s1, index);
            line = line.substr(index, result) + s2 + line.substr((result + s1.length()), line.length());
            index = 0;
            result = 0;
        }
        newfile << line;
        if (file.peek() != EOF)
            newfile << "\n";
    }
    file.close();
    newfile.close();
}
