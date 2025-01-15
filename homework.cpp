/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector
 
 void compare(int x, int y)
   { if (x > y)
    {
        std::cout << x << " is greater than " << y << std::endl;
    }
    else
    {
        if (y > x)
        {
            std::cout << x << " is smaller than " << y << std::endl;
        }
        else
        {
            std::cout << "the inputs are equal\n";
        }
    }
   }

   //void quadForm (int a, int b, int c);
   //{
    //std::cout << 
  // }

void minList(std::vector<int> list)
{
    int count = 0;
    int min;
    while(count <= list.size())
   { 
    if(list[count] < list[count+1])
    {
    min = list[count];
    count = count + 1;
    }
   else
   {
    if(list[count] > list[count+1])
    {
        
    }
   }
   }
}

int main()
{
    // Complete your homework here
    //problem 1
    int x;
    int y;
    std::cout << "Input two numbers\n";
    std::cin >> x >> y;
    compare(x, y);
   
    
    
    return 0;
}
