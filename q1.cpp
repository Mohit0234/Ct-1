// Name-Mohit Puri
// Roll No-2010990464
// Set No-04
// Question-1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int min=-1;
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    
    set<int> s;
    
    for(int i=n-1;i>=0;i--){
        if(s.find(a[i])!=s.end()){
            min=i;
        }
        else{
            s.insert(a[i]);
        }
    }
  if(min!=-1)
    cout<< "The minimum index of the repeating element is "<<min;
  else
    cout<<"Invalid Input";
    return 0;
}