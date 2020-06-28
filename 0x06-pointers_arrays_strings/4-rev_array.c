#include "holberton.h"
/*
* reverse array
*/ void reverse_array(int *a, int n)
{
        int *b;
        int x;

        b = a + n - 1;
        while (a < b)
        {
                x = *a;
                *a = *b;
                *b = x;
                a++;
                b--;
        }

}
