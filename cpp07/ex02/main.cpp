#include "Array.hpp"

int main( void )
{
    Array<int>  arr_int1;
    Array<int>  arr_int2(3);

    try{
        arr_int2[0] = 23;
        arr_int2[1] = 40;
        arr_int2[2] = 13;
        arr_int2[3] = 99;
        arr_int2[6] = 99 - 1;
    } catch (const std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try{
        arr_int1 = arr_int2;
        for (int i = 0; i < 10; i++){
            std::cout << "index now is: " << i << std::endl;
            std::cout << "arr_int1: " << arr_int1[i] << std::endl;
            std::cout << "arr_int2: " << arr_int2[i] << std::endl;
        }
    } catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }

    Array<char> arr_char1(4);

    try{
        arr_char1[0] = 'A';
        arr_char1[1] = 'B';
        arr_char1[2] = 'a';
        arr_char1[3] = '\0';
        for (unsigned int i = 0; i < arr_char1.size() - 1; i++){
            std::cout << "arr_char1[" << i << "]" << ": " << arr_char1[i] << std::endl;
        }
    } catch (const std::exception &e){
        std::cout << e.what() << std::endl;
    }


    try{
        arr_int2[0] = arr_char1[0];
        std::cout << "arr_int2[0]: " << arr_int2[0] << std::endl;
        std::cout << "arr_char1[0]: " << arr_char1[0] << std::endl;
        std::cout << "arr_char1[6]: " << arr_char1[6] << std::endl;
    } catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }

    return (0);
}