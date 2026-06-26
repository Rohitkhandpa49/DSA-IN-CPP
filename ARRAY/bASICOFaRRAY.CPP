/* basic array question
#include<iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cout<<"Enter the Number: ";
    cin>>n;
    for(int i =0; i<n;i++){
        cin>>arr[i];
    } 
    cout<<"Array Elements are: \n";
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}     */


/* largest element in an array
#include<iostream>
using namespace std;
int main(){
   int n= 5;
    int arr[4]= {3,2,19,7};
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest)
        largest = arr[i];
    }
  cout<<largest;
    return 0;
    }
*/    
