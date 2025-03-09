#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n ;
    cin>>n; 
    int count = 0;
    while (n!=0){
        int z = n%10;
        n = n/10;
         if(z==4 || z==7){
            count++;
         }
        }
        if(count==4 || count==7){
              cout<<"Yes";
        }
        else{
            cout<<"no";
        }
        return 0;
    }
     
    
