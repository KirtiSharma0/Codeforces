#include<iostream>
using namespace std;
int main(){
    int n;;
    cout<<"Enter a value";
    cin>>n;
    int sum = 0;
    while(n!=0){
        int z = n%10;
         n = n/10;
         sum = sum+z;
    }
    cout<<sum;
    return 0;
}