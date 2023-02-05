#include <iostream>
using namespace std ;
int main()
{
     int n ;
    cout << "enter rows" << endl;
    cin >> n;

    for (int row = 0 ; row < n ; row++)
    {   // spaces

        for(int col = 0 ; col < n - row -1 ; col++)
        {
            cout << " ";
        }
        // stars followed by a space
        for (int k =0 ; k < row +1 ; k++)
        {
            // cout << "*"; // minor change
             cout << "* ";
        }
        cout << endl;
    }

       for (int row = 0; row < n ; row++)
    {
        for(int col = 0 ; col < row ; col++)
        {
            cout << " ";
        }
        for (int k = 0 ; k < n - row ; k ++)
        {
            cout << "* " ;
        }
        cout <<endl;
    }
return 0;
}