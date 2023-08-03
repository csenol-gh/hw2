//  scheduler.c
//  bil_461_2022Yaz_odev2
//
//  Created by Aykut Alparslan KOÇ & Cihan ŞENOL
//  Last modified: 08.08.2023

#include <stdio.h>
#include "pthread.h"

extern const int FRAME_SIZE;
extern const int FRAME_COUNT;
extern const int MEMORY;

int main(int argc, char* argv[])
{
    printf("Process name: %s\n", argv[1]);
    printf("file name: %s\n", argv[2]);

    return 0;
}