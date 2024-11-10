// 3 digit armstrong number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a 3 Digit number: ";
    cin>>n;
    int dup = n;
    int sum = 0;
    while (n > 0){
        int last_digit = n % 10;
        sum += last_digit * last_digit * last_digit;
        n = n / 10;
    }
    if (sum == dup) cout<<"\nArmstrong number";
    else cout<<"\nNot an Armstrong number";
}