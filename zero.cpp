#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number : ";
    cin>>x;
    if(x==0){
        cout<<"The number is zero."<<endl;

    }
    else if(x>0){
        cout<<"The number is positive."<<endl;

    }
    else{
        cout<<"The number is negative."<<endl;
    }

    return 0;
}