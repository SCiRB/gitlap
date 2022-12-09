#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int number[1000];
    cout << "Enter an integer: ";
    cin >> number[0];
    while (number[i]!=0){
    i++;
    cout << "Enter an integer: ";
    cin >> number[i];
    }
    int NE = 0;
    int NO = 0;
    int n = 0;
    while (n<i){
        if(number[n]!=0){
            if (number[n]%2==0){
                NE = NE+1;
            }
            else{
                NO = NO+1;
            }
        }
    n++;
    }
    cout << "#Even numbers = " << NE << "\n";
    cout << "#Odd numbers = " << NO;
    return 0;
}