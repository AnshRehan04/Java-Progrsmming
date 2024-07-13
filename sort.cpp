#include <iostream>
using namespace std;
int sorted(int arr[],int n){
    int k=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]<arr[i-1]){
            k=k+arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
        else{
            k=0;
        }
    }
    return k;
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<sorted(arr,n);
}