// Hollow Square Pattern
// Homework 03 , Feb 

#include <iostream>
using namespace std ;
int main()
{   int n ;
    cout<< "Enter Rows :" << endl;
    cin >> n;

    for (int row = 0 ; row < n ; row++)
    {   if ( row == 0 || row == n-1)
        {
            for (int col = 0 ; col < n ; col++)
            {
                cout << "*";
            }
        }
        else
        {   cout << "*";
            for (int k = 0 ; k < n -2  ; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}
