#include <stdio.h>

int main()
{
#if VER == 1
	printf("This is for version1\n");
#elif VER == 2
	printf("This is for version2");
#else
	#error "please provide the version number"
#endif
}
