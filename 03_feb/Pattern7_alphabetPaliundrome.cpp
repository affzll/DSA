#include <iostream>
using namespace std ;
int main()
{
     int n ;
    cout << "enter rows" << endl;
    cin >> n;
   
// number pattern
// 1
// 121
// 12321
// 1234321
// 123454321


    // for (int row = 0 ; row < n ; row++)
    // {
    //     int col ;

    //     for ( col = 0 ; col < row +1 ; col++)
    //     {
    //         cout << col +1;
    //     }
    //     col = col -1 ;
    //     for (int col = row ; col >=1;col = col - 1)
    //     {
    //         cout << col;
    //     }
    //     cout  <<endl;
    // }


// A
// ABA
// ABCBA

for (int row = 0 ; row < n ; row++)
    {
        int col ;

        for ( col = 0 ; col < row +1 ; col++)
        {   
            int ans = col +1;
            char ch = ans + 'A' -1;
            cout << ch;
        }
        col = col -1 ;
        for (int col = row ; col >=1;col = col - 1)
        {   int ans = col;
             char ch = ans + 'A' -1;

            cout << ch;
        }
        cout  <<endl;
    }

return 0; 
}
