/*
 * [The second round] 2/18-2/24 CareerCup 1.3
 *
 * ID: Arthur2012
 *
 * tedatworking@gmail.com
 *
 * Date: 2.17.2013
 */

/*
 * Algorithm:
 * Because the ASCII is between 0 to 127, the number of characteristics in each string can be counted.
 * What's more, if two strings have the same number of every characteristic, one is a permutation of the other.
 */

/*
 * Test Case 1:
 * a
 * a
 *
 * Test Case 2:
 * ab
 * ba
 *
 * Test Case 3:
 * abc
 * abcc
 *
 * Test Case 4:
 * +++a
 * a+++
 */

#include<iostream>
#include<string.h>
using namespace std;

bool Decide_Permutation(string str1, string str2)
{

    int map_str1[128];
    int map_str2[128];
    int strLen = 0;
    memset(map_str1, 0, sizeof(map_str1));
    memset(map_str2, 0, sizeof(map_str2));

    for(int i = 0, strLen = str1.size(); i < strLen; i++)
    map_str1[str1[i]]++;

    for(int i = 0, strLen = str2.size(); i < strLen; i++)
    map_str2[str2[i]]++;

    for(int i = 0; i < 128; i++)
    if(map_str1[i] != map_str2[i])
    return false;

    return true;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    bool result = Decide_Permutation(str1, str2);

    if(result)
    {
        cout << "Yes, str2 is a permutation of str1" << endl;
    }
    else cout<< "No, one is not a permutation of the other" <<endl;
    return 0;
}
