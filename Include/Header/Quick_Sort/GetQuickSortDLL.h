#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <libloaderapi.h>



typedef void (*QUICKSORT)(int* , int) ;

QUICKSORT GetQuickSortDLL();