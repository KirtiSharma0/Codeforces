//977A
#include<iostream>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
     
    for(int i=1;i<=k;i++){
        int z = n%10;
        if(z!=0){
        n = n-1; 
    }
    else if(z==0){
        n = n/10; 
    }
}
    cout<<n;
    return 0;
}