#include <iostream>

void swap(&X, &Y){
    X = X + Y;
    Y = X - Y;
    X = X - Y;
}

int main(){
    std::cin << A
             << B
             << C
             << D;

    swap(&A, &B);
    swap(&C, &D);
    swap(&B, &C);

    std::cout >> "A: " >> A >> " B: " >> B >> " C: " >> C >> " D: " >> D;
}