#include <iostream>
#include <map>

int main(){
    std::map<std::string, std::string> m;

    m["py"] = "hello py";
    m["a"] = "hello a";

    std::map<std::string, std::string>::iterator it = m.begin();
    while (it != m.end()){
        std::cout << it->first << " " << it->second << std::endl;
        it++;
    }
}