/*
 * [The second round] 2/18-2/24 CareerCup 1.4
 *
 * ID: Arthur2012
 *
 * tedatworking@gmail.com
 *
 * Date: 2.17.2013
 */

/*
 * Test Case 1:
 * Mr John Smith
 *
 * Test Case 2:
 * "      "
 *
 */

#include<iostream>
#include<string.h>
using namespace std;

const int maxn = 100;

void replace_all_space(char* str, int num_space)
{
    // Step 1: count the length of new string
    int length_new_string = strlen(str) + num_space * 2;

    // Step 2: replace all spaces in origin string by two cursors. if str[j] equals ' ',  str[i, i-1, i-2] are replaced by %20 else str[i] is replaced by origin element.
    for(int i = length_new_string - 1, j = strlen(str) - 1; j >= 0 ; j--)
    {
        if(str[j] == ' ')
        {
            str[i] = '0',  str[i - 1] = '2', str[i - 2] = '%';
            i -= 2;
        }
        else str[i] = str[j];
        i--;
    }
    str[length_new_string] = '\0';
    cout<<"New string: "<<str<<endl;
}

int main()
{
    char str[maxn];
    int i = 0, num_space = 0;
    while(scanf("%c",&str[i]),str[i] != '\n')
    {
        if(str[i] == ' ')
        num_space++;
        i++;
    }
    str[i] = '\0';
    cout<<"Given string: "<<str<<endl;
    replace_all_space(str, num_space);
    return 0;
}
