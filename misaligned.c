#include <stdio.h>
#include <assert.h>
#include "misaligned.h"

int ColorpairNumber(int majorIndex , int minorIndex)
{
	return ((majorIndex * numberOfMajorColors) + minorIndex+1);
}

int printColorMap() {

    int majorColorCount =0 ,minorColorCount = 0;
    for(majorColorCount = 0; majorColorCount < numberOfMajorColors; majorColorCount++) {
        for(minorColorCount = 0; minorColorCount < numberOfMinorColors; minorColorCount++) {
        int pairnumber = ColorpairNumber(majorColorCount,minorColorCount);
        printf("%d \t %s  \t %s\n", pairnumber, majorColor[majorColorCount], minorColor[minorColorCount]);
        }
    }
    
    return majorColorCount * minorColorCount;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
    return 0;
}
