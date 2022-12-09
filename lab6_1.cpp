#include<iostream>
using namespace std;

int main(){
    int E=0;
    int O=0;
    int A=1;
    while(A!=0){
        cout << "Enter an integer: ";
        cin >> A;
    if(A%2==0){
        E=E+1;
    }else{
        O=O+1;
    }}
    cout << "#Even numbers = "<<E-1<<endl;
    cout << "#Odd numbers = "<<O<<endl;
    return 0;
}
