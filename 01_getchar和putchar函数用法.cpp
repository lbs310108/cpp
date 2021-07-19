/*
int getchar(void)：
    函数从屏幕读取一个可用的字符，并把它返回为一个整数。这个函数在同一个时间内只会读取一个单一的字符。把收到的一个字符转换成asic码
int putchar(int c)：
    函数把字符输出到屏幕上，并返回相同的字符。这个函数在同一个时间内只会输出一个单一的字符

*/

#include <stdio.h>
int main()
{
    int c;
    printf("Enter string: ");
    c = getchar();
    printf("%d\n", c);

    printf("Your put is: ");
    putchar(c);  
    printf("\n");

    return 0;
}