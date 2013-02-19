/*
 * [The second round] 2/18-2/24 CareerCup 1.5
 *
 * ID: Arthur2012
 *
 * tedatworking@gmail.com
 *
 * Date: 2.18.2013
 */

/*
 * Algorithm:
 * Transform origin string into new string by counting the number of different successive characteristics when the new string is smaller than origin one.
 *
 */

/*
 * Test Case 1:
 * aabcccccaaa
 *
 * Test Case 2:
 * "      "
 *
 * Test Case 3:
 * aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab
 *
 * Test Case 4:
 * aaab
 */

#include<iostream>
#include<string>
using namespace std;

string compressed_string(string ori_str)
{
    string new_str = "";
    char buf[13];
    char pre_char = ori_str[0];
    int count = 1;
    int j = 0;
    for(int i = 1; i < ori_str.size(); i++)
    {
        if(ori_str[i] == pre_char)
        {
            count++;
        }
        else
        {
            new_str += pre_char;
            sprintf(buf, "%d", count);// suggestion from moophis
            new_str += buf;
            j += 2;
            count = 1;
            pre_char = ori_str[i];
        }
    }
    new_str += pre_char;
    sprintf(buf, "%d", count);// suggestion from moophis
    new_str += buf;
    j += 2;
    if(j >= ori_str.size())
    {
        return ori_str;
    }
    else return new_str;

    return 0;
}


int main()
{
    string ori_str;
    cin >> ori_str;
    cout << "Compressed_String: " << compressed_string(ori_str);
    return 0;
}
