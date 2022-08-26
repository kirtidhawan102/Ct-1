#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 2010990388 Kirti Dhawan
void printfirstrepeating(int arr[],int n){
    int min=-1;
    set<int> myset;
    for(int i=n-1;i>=0;i--){
        if(myset.find((arr[i]))!=myset.end()){
            min=i;
        }
        else{
            myset.insert((arr[i]));

        }
    }
    if(min!=-1){
        cout<<arr[min]<<"minimum element";
    }
    else{
        cout<<"Invalid input";
    }

}
int main(){
    cout<<"enter the no of elements";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     printfirstrepeating(arr,n);
}