#include <iostream>

int main(){
    for (int i = 1; i <= 100; i++)
    {
        if (i%3 ==0 && i%5==0)
        {
            std::cout << "Fizz Buzz, ";
        }
        if (i%3==0 && !i%5==0)
        {
            std::cout << "Fizz, ";
        }
        if (i%5==0 && !i%3==0)
        {
            std::cout << "Buzz, ";
        }
        else{
            std::string out = std::to_string(i);
            std::cout << out+ ", ";
        }
    }
}