#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;

    //k = cost of 1st banana
    //n = amount he had
    //w = no. banana wants to buy
    int sum = 0;
     
     for(int i=1 ; i<=w ;i++){
        sum = sum+i*k;
     }
     
    if(n>=sum){
        cout<<0; //no borrowing
    }
    else if(n<sum){
        cout<<sum-n; //borrowed amount
    }
 
    return 0;
}