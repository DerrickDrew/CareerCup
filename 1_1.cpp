/*
 * CareerCup 150 Warmup 1.1
 *
 * tedatworking@gmail.com
 *
 * Date: 1.28.2013
 */


/*
 * Just for fun.
 * Algorithm_1: There are two cycles and everytime pick one element of string to compare with the rest chacteristics of the string.
 *
 *
 *
 */

#include<iostream>
#include<string>
using namespace std;

/*
 * O(n^2)
 */

bool Algorithm_1(string str)
{
    for(int i = 0; i < str.length(); i++)
    {
        for(int j = i + 1; j < str.length(); j++)
        {
            if(str[i] == str[j])
            return false;
        }
    }
    return true;
}

int main()
{
    int n;  /* the size of the input data */
    string str; /* the string needed to be operated */
    bool result; /* the result for the test case */

    /* Input for test cases */
    cin >> n;
    cin >> str;

    /* Algorithm 1 */
    result = Algorithm_1(str);

    if(result)
    {
        cout<< "Yes, the string has all unique characters" <<endl;
    }
    else cout<< "No, the string does not have all unique characters" <<endl;

    return 0;
}
