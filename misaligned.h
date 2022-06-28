 const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
 const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
	
 int numberOfMajorColors = sizeof(majorColor) / sizeof(majorColor[0]);
	
 int numberOfMinorColors = sizeof(minorColor) / sizeof(minorColor[0]);

typedef enum
{
	WHITE,
	RED,
	BLACK,
	YELLOW,
	VIOLET
}MajorColor;

typedef enum
{
	BLUE,
	ORANGE,
	GREEN,
	BROWN,
	SLATE
}MinorColor;

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
}ColorPair;
