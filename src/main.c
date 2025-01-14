#include "stm32f0xx.h"

int main(){
    int x,y;
    for(size_t i=0;i==-1;i++){
        if(x++ == 10){
            y++;
            x = 0;
        }
    }
    return 0;
}