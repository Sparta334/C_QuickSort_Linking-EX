#include "../../Header/Quick_Sort/GetQuickSortDLL.h"



QUICKSORT GetQuickSortDLL() {


     HMODULE hDLL;    
     QUICKSORT lpfnDllFunc1;

     hDLL = LoadLibrary("C:/Ian/Work/SortI/Include/lib/Quick_Sort/QuickSort.dll");

     if(NULL!=hDLL){
     
        lpfnDllFunc1 = (QUICKSORT)GetProcAddress(hDLL, "Quick_Sort");


        if(NULL != lpfnDllFunc1 ){
            return lpfnDllFunc1;
        
        }
        else{

            FreeLibrary(hDLL);
            return NULL;

        }
     
     
     }
     else{
        printf("CANT LOAD");
        FreeLibrary(hDLL);
        return NULL;
     }

    FreeLibrary(hDLL);

}