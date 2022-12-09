#include<iostream>
using namespace std;

int main(){
    int N;
    int a = 0;
    int b =0;
    cout << "Enter an integer: ";
    cin >> N;
    while(N!=0){
        if(N%2==0){
            a = a+1;
        }else{
            b = b+1;
        }
        cout << "Enter an integer: ";
        cin >> N;
    }
    cout << "#Even numbers " << "= " << a << "\n";
    cout << "#Odd numbers " << "= " << b;
    return 0;
}