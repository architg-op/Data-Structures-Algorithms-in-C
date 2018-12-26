//
//  main.c
//  Naive Algorithm to Search Pattern
//
//  Created by Archit Garg on 23/08/18.
//  Copyright © 2018 Archit tech. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int searchPat(char *str, char *pat) {
    int i;
    int j;
    long lenstr = strlen(str);
    long lenpat = strlen(pat);
    for (i = 0; i <= lenstr - lenpat; i++)
    {
        for (j = 0; j < lenpat; j++)
        {
            if (str[i + j] != pat[j]) {
                break;
            }
        }
        if(j == lenpat)
            return i;
    }
    return -1;
}

int main() {
    char str[] = "Hello World";
    char pat[] = "World";
    int idx;
    idx = searchPat(str, pat);
    if(idx == -1)
        printf("Pattern not found\n");
    else
        printf("Pattern found at %d index\n",idx);
    return 0;
}
