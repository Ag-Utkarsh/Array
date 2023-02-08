#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n],revarr[n];
    cout<<"Enter values in array"<<endl;
    for(int idx=0;idx<n;idx++){
        cin>>arr[idx];
        revarr[n-idx-1]=arr[idx];
    }
    cout<<"Array in reverse order is:"<<endl;
    for(int ele:revarr)
        cout<<ele<<" ";
    cout<<endl;
    return 0;    
}