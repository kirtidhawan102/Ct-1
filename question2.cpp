#include <iostream>
using namespace std;
#include<bits/stdc++.h>
// 2010990388 Kirti Dhawan
void printconsecutiveintegers(int arr[],int n){
    int start=0;
    int end=0;
    for(int i=1;i<n;i++){
        if((arr[i]-arr[i-1])==1){ // check if the difference between the adjacent elements are 1 then they are consecutive 
          start++;
        }
        else{
            end=-1;
            break;
        }
    }
    if(end==0){
        cout<<"The array contains the consecutive integers from " <<arr[0] <<"to" <<arr[start];
    }
    else{
        cout<<"The array does not contain consecutive integers";
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // first we have to sort the whole array and check the difference between the adjacent elements
  sort(arr,arr+n);
  printconsecutiveintegers(arr,n);
    
    
}