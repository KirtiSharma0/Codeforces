//there are oysters 1,2,3,4 out of them any one can trouble the stomach after consuming T eats T(1,2) and A(1,3). take the input of string sick and fine and give the output of the oyster number which causes trouble to the users. S1(sick)S1(fine) means for T and S2 is for A

#include <iostream>
using namespace std;
int main(){
    string S1;
    cin>>S1;
    string S2;
    cin>>S2;
    if(S1=="sick" && S2=="sick"){
        cout<<1;
    }
    else if(S1=="sick" && S2=="fine"){
        cout<<2;
    }
    else if(S1=="fine" && S2=="sick"){
        cout<<3;
    }
    else if(S1=="fine" && S2=="fine"){
        cout<<4;
    }
    return 0;
}