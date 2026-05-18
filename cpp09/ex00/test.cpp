#include <iostream>
#include <map>
#include <sstream>


// stream is abstraction represent a sequence bytes between program and I/O Devices like: file, keyboard, socket ...

// abstraction: is mean hidden complex details and showing only essentail features

int main(int ac, char **av){
    std::map<int, std::string> m;

    m[1] = "a";
    // m[3] = "b";
    // m[5] = "c";

    std::map<int, std::string>::iterator it = m.lower_bound(2);
    if (it == m.end()){
        std::cout << "Not found" << std::endl;
    }
    // std::cout << it->first << " " << it->second << std::endl;
    // for (auto it : m){
    //     std::cout << it.first << " " << it.second << std::endl;
    // }


    // std::string str = "dog.cat";

    // std::cout << str.find('.') << std::endl;
    // std::cout << str.substr(3 + 1) << std::endl;
    // std::cout << str.substr(0, 3) << std::endl;



    // convert string to number
    // std::stringstream ss;
    // str = "99999999999";
    // size_t n;
    // ss << str;
    // ss >> n;
    // std::cout << n << std::endl;

    // convet number to string
    // ss.clear();
    // ss.str("");
    // n = 90;
    // ss << n;
    // str = ss.str();
    // std::cout << str << std::endl;
}