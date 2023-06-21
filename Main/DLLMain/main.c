#include <stdio.h>
#include "../../Include/Header/Quick_Sort/GetQuickSortDLL.h"
int main(){

    int Data[10] = {1 , 11 , 7 ,9999 , 44 ,14 , 66 , 33 , 41 ,80};

    QUICKSORT QuickSort;

    QuickSort = GetQuickSortDLL();

    if(QuickSort == NULL){
        printf("CANT LOAD");
        return 0;
    }

    QuickSort(Data , 10);
    
    
    for(int i  = 0 ; i < 10; i++ ){
        printf("%d , " , Data[i]);
    }

    return 0;

}