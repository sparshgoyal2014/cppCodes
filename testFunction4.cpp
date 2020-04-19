#include <iostream>

void clearDisplay(void);

int main(void){
    for(int i = 0; i < 2; i++){
        if (i == 0) clearDisplay;
    }
    return 0;
}

void clearDisplay(void){
    std::cout << "test" << std::endl;
}