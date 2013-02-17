/*
 * [The second round] 2/18-2/24 CareerCup 1.1
 *
 * ID: Arthur2012
 *
 * tedatworking@gmail.com
 *
 * Date: 2.17.2013
 */

/*
 * Algorithm_1: There are two cycles and everytime pick one element of string to compare with the rest chacteristics of the string.
 * Algorithm_2: First of all, sort the string; then compare every element with any elements before or behind it
 *
 */

/*
 * Test Case 1:
 * abcdefghijklmnopqrstuvwxyz
 *
 * Test Case 2:
 * abcdefghijklmnopqrstuvwxyzz
 *
 * Test Case 3:
 * abcdefggijklmnopprstuvwxyz
 */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

/*
 * O(n^2)
 */

bool Algorithm_1(string str)
{
    int len = str.length()
    for(int i = 0; i < len; i++)
    {
        for(int j = i + 1; j < len; j++)
        {
            if(str[i] == str[j])
            return false;
        }
    }
    return true;
}

/*
 * O(nlog(n))
 */

bool Algorithm_2(string str)
{
    if(str.size() == 0)
    return true;

    int tmp_str_size = str.size();
    char ch[tmp_str_size];

    for(int i = 0; i < tmp_str_size; i++)  // transform string into char*
    ch[i] = str[i];

    sort(ch, ch + tmp_str_size);           // nlog(n)

    for(int i = 0; i < tmp_str_size - 1; i++)  // compare compare every element with any elements before or behind it
    {
        if(ch[i] ==  ch[i+1])
        return false;
    }

    return true;
}

int main()
{
    string str; /* the string needed to be operated */
    bool result; /* the result for the test case */

    /* Input for test cases */
    cin >> str;

    /* Algorithm 1 */
    result = Algorithm_1(str);

    cout<< "Results of Algorithm_1:" <<endl;

    if(result)
    {
        cout<< "Yes, the string has all unique characters" <<endl;
    }
    else cout<< "No, the string does not have all unique characters" <<endl;

	/* Algorithm 1 */
    result = Algorithm_2(str);

    cout<< "Results of Algorithm_2:" <<endl;

    if(result)
    {
        cout<< "Yes, the string has all unique characters" <<endl;
    }
    else cout<< "No, the string does not have all unique characters" <<endl;

    return 0;
}
