#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// 2010990388 Kirti Dhawan
void printfirstrepeating(int arr[],int n){
    // first we have to initialize the first repeating element
    int minimum=-1;
    set<int> set1;
    for(int i=n-1;i>=0;i--){
        if(set1.find((arr[i]))!=set1.end()){ 
            // if the element is already present in the set then we have to update the min value;
            // if not present add it to the set;
            minimum=i;
        }
        else{
            set1.insert((arr[i]));

        }
    }
    //Now print the min value;
    if(minimum!=-1){
        cout<<"The minimum index of repeating element is"<<" "<<minimum;
    }
    else{
        cout<<"Invalid input";
    }

}
int main(){
    cout<<"enter the no of elements";
    cout<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     printfirstrepeating(arr,n);
}