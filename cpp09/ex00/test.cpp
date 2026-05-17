#include <iostream>
#include <map>

int main(int ac, char **av){
    std::map<int, std::string> m;

    m[1] = "a";
    // m[3] = "b";
    m[5] = "c";

    std::map<int, std::string>::iterator it = m.lower_bound(2);
    std::cout << it->first << " " << it->second << std::endl;
    // for (auto it : m){
    //     std::cout << it.first << " " << it.second << std::endl;
    // }
}