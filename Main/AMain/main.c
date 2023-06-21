#include <stdio.h>
#include "../../Include/Header/Quick_Sort/Quick_Sort.h"

int main(){

    int Data[10] = {1 , 11 , 7 ,10 , 44 ,14 , 66 , 33 , 41 ,80};

    Quick_Sort(Data ,10);

    for(int i  = 0 ; i < 10; i++ ){
        printf("%d , " , Data[i]);
    }

    return 0 ;

}