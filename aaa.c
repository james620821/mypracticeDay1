#include <stdio.h>

int main()
{
    /*===========test1==================
    printf("H     H      A\n");
    printf("H     H     A A\n");
    printf("HHHHHHH    A   A\n");
    printf("H     H   AAAAAAA\n");
    printf("H     H  A       A\n");
    /*///Q:�ťդj�p��^��r���L�k�۵�?�w�ѨM�A�r���令consolas
    /*============test2=================
    int integer, sum;
    printf("Please enter thr first integer: ");
    scanf("%d", &integer);
    sum = integer;
    printf("Please enter thr second integer: ");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("Please enter third integer: ");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("Sum is %d.\n", sum);
    */
    int integer1, integer2, temp;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);
    temp = integer1;
    integer1 = integer2;
    integer2 = temp;
    /*����H�A�����O��Ƭ����
    integer1 = integer1 + integer2;
    integer2 = integer1 - integer2;
    integer1 = integer1 - integer2;
    */
    /*����H
    integer1 = integer1 ^ integer2;
    integer2 = integer1 ^ integer2;
    integer1 = integer1 ^ integer2;
    */
    printf("integer1: %d\n",integer1);
    printf("integer2: %d\n",integer2);
    return 0;
}

