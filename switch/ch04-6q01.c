#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    if(argc != 4) {
        return 1;
    }
    int x = atoi(argv[2]);
    int y = atoi(argv[3]);
    switch (atoi(argv[1])){
        case 0:
            x += y;
            break;
        case 1:
            x -= y;
            break;
        case 2:
            x *= y;
            break;
        case 3:
            x /= y;
            break;
        default:
            puts("1st argument should be 0 to 3");
            return 2;
    }
    printf("%d\n", x);
    return 0;
 
    
}