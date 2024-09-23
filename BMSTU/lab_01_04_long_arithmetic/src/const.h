#ifndef CONST_H
#define CONST_H

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include <errno.h>
#include "ctype.h"
#include "math.h"
#include "stdbool.h"
#include "assert.h"
#include "errors.h"

#define MAX_MANTISE 40
#define MANTISE_DEFINE 50
#define MAX_ORDER 10000
#define MAX_STRING_LEN 49
#define ERR_EPS = 10e-40

#pragma pack(push, 1)
typedef struct
{
    unsigned short sign; // 0 - минус, 1 - плюс
    unsigned short mantise_size;
    unsigned short order;
    short mantise[MANTISE_DEFINE];
} long_number; // Структура для записи делимого, делителя и частного
#pragma pack(pop)


#pragma pack(push, 1)
typedef struct
{
    unsigned short mantise_size;
    short mantise[MANTISE_DEFINE];
} mantise_t; // Структура для записи промежуточных результатов
#pragma pack(pop)

#endif
