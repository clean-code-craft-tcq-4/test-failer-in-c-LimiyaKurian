#include <stdio.h>
#include <assert.h>
#include "misaligned.h"

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

int printColorMap() {

    int majorColorCount = 0 ,minorColorCount = 0;
    ColorPair colorPair;
    for(majorColorCount = 0; majorColorCount < numberOfMajorColors; majorColorCount++) {
        for(minorColorCount = 0; minorColorCount < numberOfMinorColors; minorColorCount++) {
		colorPair.majorColor = (MajorColor)majorColorCount;
                colorPair.minorColor = (MinorColor)minorColorCount;
		int pairnumber = GetPairNumberFromColor(&colorPair);
                printf("%d\t|\t%s\t|\t%s\n", pairnumber, majorColor[majorColorCount], minorColor[minorColorCount]);
        }
    }
    
    return majorColorCount * minorColorCount;
}

void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber)
{
    ColorPair colorPair; 
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    assert(pairNumber == expectedPairNumber);
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    testPairToNumber(WHITE, BLUE,1);
    testPairToNumber(YELLOW,SLATE,20);
    printf("All is well (maybe!)\n");
    return 0;
}
