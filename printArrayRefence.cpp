#include <iostream>
#include <string>

int printarray(char const** begin, char const** end ,int count){

    for (begin; begin < end; begin = begin + 1)
        {
            if (*begin != nullptr)
                {
                    std::cout << *begin << std::endl;
                    ++count;
                }
        }
    std::cout << count << std::endl;
    return 0;
}

int main()
    {
        char const* arreglo[26] {"alpha", "betha", "charli"};
        int count=0;
        printarray(&arreglo[0], &arreglo[26], count);

        return 0;
    }


