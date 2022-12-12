#include <iostream>

void quarter(float x, float y){
    if((x > 0) && (y > 0))
        std::cout << 1;
    else if((x < 0) && (y > 0))
        std::cout << 2;
    else if((x < 0) && (y < 0))
        std::cout << 3;
    else if((x > 0) && (y < 0))
        std::cout << 4;
}

int main(){
    float x, y;
    std::cin >> x >> y;
    quarter(x, y);
}