/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int sti = 0;
    int endi = n-1;

    while (sti <= endi) {
        int midli = (sti + endi) / 2;
        if (value == values[midli]) {
            printf("Found!");
            return true;
        }
        else if (value < values[midli]) {
            endi = midli - 1;
        }
        else {
            sti = midli + 1;
        }
    }

    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (values[j] < values[min])
                min = j;
        }
        // Swap the smallest element with the first element of the unsorted array.
        int buf = values[i];
        values[i] = values[min];
        values[min] = buf;
    }

    return;
}
