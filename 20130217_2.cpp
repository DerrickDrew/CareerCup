/*
 * [The second round] 2/18-2/24 CareerCup 1.2
 *
 * tedatworking@gmail.com
 *
 * Date: 2.17.2013
 */

/*
 * Algorithm:
 * swap str[i] and str[num - 1 - i] from 0 to num/2; num is the size of the string
 */

/*
 * Test Case 1:
 * a
 *
 * Test Case 2:
 * ab
 *
 * Test Case 3:
 * abc
 *
 * Test Case 4:
 * abcd
 *
 * Test Case 5:
 * abcde
 */

#include<stdio.h>
#include<string.h>

void reverse(char* str)
{
    char tmp;
    int num = 0;

    num = strlen(str);

    for(int i = 0; i < num/2; i++)
    {
        tmp = str[i];
        str[i] = str[num - 1 - i];
        str[num - 1 - i] = tmp;
    }
}

int main()
{
    char* str;
    scanf("%s",str);
    printf("Before transformation: %s\n",str);
    reverse(str);
    printf("After transformation: %s\n",str);
    return 0;
}
