#include <stdio.h>
#include <assert.h>

int TotalColorpairPrinted = 0;

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
        }
    }
    
    TotalColorpairPrinted = ((i-1)*5)+(j-1);
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    assert(result == TotalColorpairPrinted);
    printf("All is well (maybe!)\n");
    return 0;
}
