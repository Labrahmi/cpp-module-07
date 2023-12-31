#include "Array.hpp"

void execute_array()
{
    try
    {
        Array<std::string> myArray(10);
        for (unsigned int i = 0; i < myArray.size(); i++)
        {
            std::string newStr;
            newStr = "T[] = ";
            newStr += std::to_string(i + 1);
            myArray[i] = newStr;
        }
        for (unsigned int i = 0; i < myArray.size(); i++)
            std::cout << myArray[i] << std::endl;
        std::cout << myArray[22] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main(void)
{
    execute_array();
    while (1);
    return 0;
}
