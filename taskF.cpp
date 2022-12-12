#include <iostream>

#define _USE_MATH_DEFINES
#include <cmath>



void func(float x){
    float y;
    
    if(x > 5)
        y = 2 * x * x + 10;
    else if(x == 0)
        y = 0;
    else if(x < 5)
        y = 2 * abs(x + 6) - x * x;

    std::cout << y;
}

int main(){
    float x;
    std::cin >> x;

    func(x);
}