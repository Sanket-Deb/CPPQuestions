#include<iostream>
using namespace std;

int main(){
    int n,arr[1000];
    cout<<"Enter the value for n"<<'\n';
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<"Enter the "<<i<<"th element - ";
        cin>>arr[i];
    }
    cout<<"The required reversed array is as follows - "<<'\n';
    for(int i=n;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
  return 0;
}