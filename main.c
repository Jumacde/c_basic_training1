#include <stdio.h>

int main (int argc, char** argv) {
    printf("hello world\n");
    printf("%s: %d + %d = %d\n", "add", 17, 25, 17 + 25);
    printf("%s\n", "hello world!");
    printf("%s\n%s\n%s\n", "123", "456", "789");
    printf("%d + %d = %d\n", 1, 1, 1 + 1);
    printf("%d + %d = %d\n", 2, 3, 2 + 3);
    printf("%d + %d + %d = %d\n", 1, 2, 3, 1 + 2 + 3);
    
    int a;
    printf("a = ");
    scanf("%d", &a);
    printf("the value a is %d.\n", a);

    int x;
    int y;
    printf("pleas input x and y. \n");
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n", x, y, x % y);

    // rectangle
    double i1 = 9.0;
    int i = (int) i1; // try cast form float num to int num.
    int j = 4;
    int h = i * j;
    printf("calculate the area of a rectangle\n");
    printf("%d * %d = %d\n", i, j, h);

    // try if 
    int e;
    printf("please int a positive digit e.\n e = ");
    scanf("%d", &e);
    if (e > 0) {
        printf("your inputted number is %d\n", e);
    } else {
        printf("%d is'nt positiv digit.\n", e);
    }

    return 0;
}