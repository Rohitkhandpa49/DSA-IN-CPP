/*
// 01. Solid Square Pattern

// Write a program that takes an integer N as input and prints a solid square of size N × N using the * (asterisk) character.
* * * * 
* * * * 
* * * * 
* * * *

#include<iostream>
using namespace std;
int main(){
    int row,n;
    cout<<"Enter the Input: ";
    cin>>n;
    for(row = 1; row<=n; row++){
        for(int col = 1; col<= n; col = col+1){
        cout<<"*"<<" ";
      }
    cout<<endl;
   }
}   */

/*
02. Solid Rectangle Pattern
Write a program that takes two integers as input:
Rows (R) – the number of rows in the rectangle.
Columns (C) – the number of columns in the rectangle.
Print a solid rectangle using the * (asterisk) character.
Each row should contain exactly C stars, and there should be exactly R rows
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
#include<iostream>
using namespace std;
int main(){
    int rows,cols;
     cout<<"Enter the Number of rows: ";
    cin>>rows;
    cout<<"Enter the Number of columns: ";
    cin>>cols;
    for(int row = 1; row<=rows; row++){
        for(int col = 1; col <= cols; col = col+1){
        cout<<"*"<<" ";
      }
    cout<<endl;
   }
}    */

/*
03. Number Square Pattern
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
#include<iostream>
using namespace std;
int main(){
    int row,col,n;
    
    cout<<"Enter the Input: ";
    cin>>n;
    for(row = 1; row<=n; row++){
        for(int col = 1; col<= n; col = col+1){
        cout<<col<<" ";
      }
    cout<<endl;
   }
}     */