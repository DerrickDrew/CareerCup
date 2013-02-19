/*
 * [The second round] 2/18-2/24 CareerCup 1.6
 *
 * ID: Arthur2012
 *
 * tedatworking@gmail.com
 *
 * Date: 2.19.2013
 */

/*
 * Algorithm:
 * At first turn 180 degree, and then turn through back-diagonal.
 *
 */

/*
 * Test Case 1:
 * 4
 * 1 2 3 4
 * 5 6 7 8
 * 9 10 11 12
 * 13 14 15 16
 *
 * Test Case 2:
 * 1
 * 1
 *
 * Test Case 3:
 * 2
 * 12
 * 34
 */


#include<iostream>
using namespace std;

const int N = 100;

int matrix[N][N];

int swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void output(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        cout << matrix[i][j] << " ";
        cout << "\n";
    }
}

void rotate_matrix(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n / 2; j++)
        {
            swap(matrix[i][j], matrix[i][n - 1 - j]);
        }
    }

    //output(n);

    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1 - i; j >= 0; j--)
        {
            swap(matrix[i][j], matrix[i + n - 1 - i - j][n - 1 - i]);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
     for(int j = 0; j < n; j++)
     cin>> matrix[i][j];

    cout<<"Before transformation: "<<endl;
    output(n);
    rotate_matrix(n);
    cout<<"\nAfter transformation: "<<endl;
    output(n);
    return 0;
}
