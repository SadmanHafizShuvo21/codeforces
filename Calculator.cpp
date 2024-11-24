#include <bits/stdc++.h>
using namespace std;

void calculation(float firstNumber,char operatorSymbol,float secondNumber){
    if(operatorSymbol=='+'){
        cout<< firstNumber+secondNumber<<"\n";
    }
    else if(operatorSymbol=='-'){
        cout<< firstNumber+secondNumber<<"\n";
    }
    else if(operatorSymbol=='-'){
        cout<< firstNumber-secondNumber<<"\n";
    }
    else if(operatorSymbol=='*'){
        cout<< firstNumber*secondNumber<<"\n";
    }
    else if(operatorSymbol=='/'){
        if(secondNumber!=0)
        cout<< firstNumber/secondNumber<<"\n";
        else 
        cout<<"Error! Division by zero."<<"\n"; 
    }
}
int main() {
    char operation;
    float num1, num2;
    cout<<"Enter opration in calculator: ";
    cin>>num1>>operation>>num2;
    cout<<"Result of the opration in calculator is: ";
    calculation(num1,operation,num2);
    cout<<"\n";
    return 0;
}
