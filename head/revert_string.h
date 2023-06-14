//
// Created by shun on 2023/6/13.
//

#ifndef UTIL_REVERT_STRING_H
#define UTIL_REVERT_STRING_H


#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

const static int LONG_BIT_COUNT = CHAR_BIT * sizeof(long);

void revert(char* data,int len,char* r_data);
char *itobs(long n, char *ps);
long bstoi(const char *ps, int size);


#endif //UTIL_REVERT_STRING_H
