#include "Array.hpp"

#include "Array.hpp"

int main() 
{
    try
    {
        Array<int> intArray;
        std::cout << intArray.size() << std::endl;
        std::cout << intArray[0] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() <<  std::endl;
    }

    try
    {
        Array<int> intArray2(33);
        std::cout << intArray2.size() << std::endl;
        for(unsigned int i = 0; i < 33 ; i++)
        {
            intArray2[i] = i;
        }
        std::cout << intArray2[32] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() <<  std::endl;
    }
    return 0;
}