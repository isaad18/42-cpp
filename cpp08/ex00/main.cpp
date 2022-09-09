#include "easyFind.hpp"

int main(){
    std::array<int, 5> a = {1, 5, 3, 4, 2};
    std::vector<int> c;
    c.push_back(1);
    c.push_back(5);
    c.push_back(3);
    c.push_back(4);
    c.push_back(2);
    try{
    std::cout << easyFind(c, 5) << std::endl;
    std::cout << easyFind(c, 3) << std::endl;
    std::cout << easyFind(c, 2) << std::endl;
    std::cout << easyFind(c, 7) << std::endl;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
    try{
    std::cout << easyFind(a, 5) << std::endl;
    std::cout << easyFind(a, 3) << std::endl;
    std::cout << easyFind(a, 2) << std::endl;
    std::cout << easyFind(a, 7) << std::endl;
    }
    catch(std::exception& e){
        std::cout << e.what() << std::endl;
    }
}