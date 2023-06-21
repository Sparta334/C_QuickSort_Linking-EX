DirPath:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

Cmp=gcc
Stdlib=-std=c99
Cmpopt=-O3
Detinfo=-g
Wall=-Wall
Fsg=-fmessage-length=0 -pthread

LibPath=/Include/lib/Quick_Sort

.SUFFIXES: .c .h

.Phony: A
A: 
	${Cmp} ${Stdlib} ${Cmpopt} ${Detinfo} ${DirPath}/Main/AMain/main.c -L.${LibPath} -lQuickSort -o Test


.Phony: DLL

DLL: ${DirPath}/Main/DLLMain/main.o \
	 ${DirPath}/Include/Source/Quick_Sort/GetQuickSortDLL.o 
	${Cmp} ${Stdlib} ${Cmpopt} ${Detinfo} ${DirPath}/Main/DLLMain/main.o ${DirPath}/Include/Source/Quick_Sort/GetQuickSortDLL.o -o TestDll




${DirPath}/Main/DLLMain/main.o: 
	${Cmp} ${Stdlib} ${Cmpopt} ${Detinfo} ${Wall} ${Fsg} -c ${DirPath}/Main/DLLMain/main.c -o ${DirPath}/Main/DLLMain/main.o



${DirPath}/Include/Source/Quick_Sort/GetQuickSortDLL.o: 
	${Cmp} ${Stdlib} ${Cmpopt} ${Detinfo} ${Wall} ${Fsg} -c ${DirPath}/Include/Source/Quick_Sort/GetQuickSortDLL.c -o ${DirPath}/Include/Source/Quick_Sort/GetQuickSortDLL.o

