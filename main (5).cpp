/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <array> 

int main()
{
    std::array<int, 4> numbers {7,3,9,2};
    
    int max = numbers[0];

    for(int i = 0; i < 4; ++i){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    std::cout << max;
    

    return 0;
}