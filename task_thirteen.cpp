#include <iostream>

int taskOne(){     //13 задание
    int T, H, M, S;
    
    
    for(int i = 0; i < 5; i++){
        std::cin >> T;
        H = T / 3600;
        T -= H*3600;
        M = T / 60;
        T -= M*60;
        S = T;
        std::cout << H << " Hours " <<  M << " Minutes " << S  << " Seconds \n";
    }
    return 0;
}


int main(){
    taskOne();
}