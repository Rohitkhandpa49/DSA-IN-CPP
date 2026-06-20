/*
1. pattern
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
#include<iostream>
using namespace std;

int main() {
    int row, col, n;

    cout << "Enter the input: ";
    cin >> n;

    for(row = 1; row <= n; row++) 
    {
        for(col = 1; col <= n - row; col++) {
            cout << "  ";   // Two spaces
        }

        for(col = 1; col <= 2 * row - 1; col++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}               */


/*
02 pattern
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 

#include<iostream>
using namespace std;

int main() {
    int row, col, n;

    cout << "Enter the input: ";
    cin >> n;

    for(row = 1; row <= n; row++) 
    {
        for(col = 1; col <= n - row; col= col+1) {
            cout << "  ";   // Two spaces
        }

        for(col = 1; col <=  row ; col = col+1) {
            cout <<col<<" ";
        }
        for(col = row-1; col >=1; col= col-1){
            cout<<col<<" ";
        }

        cout << endl;
    }

    return 0;
}          */
