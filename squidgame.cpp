//participants start with n player and at the end only k players survive. the prize pool inc as the number of players eleimninated.Each eliminatedpalyer will give 10,00o money. task is to calvulate the total amount

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Participants in starting = ";
    cin>>n;
    int k;
    cout<<"Participants in ending = ";
    cin>>k;
    int p = 10000;
    int final;
    final = (n-k)*p;
    cout<<final;
    return 0 ;
}