
#ifndef _MY_TYPES_H
#define _MY_TYPES_H

#include <stdio.h>
#include <stdlib.h>

#define ZERO_INIT 0
#define ZERO 0

typedef unsigned char boolean;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef unsigned long long uint64;
typedef signed char sint8;
typedef signed short sint16;
typedef signed int sint32;
typedef signed long long sint64;
typedef float float32;
typedef double float64;

typedef enum retstatus{
    isNOK,
    isOK
}retststus_t;


#endif // _MY_TYPES_H
