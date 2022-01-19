#include<bits/stdc++.h>
using namespace std;

double calc(double a, double b, char op){

    switch(op){
           case '+':
                return a+b;
            case '-':
                return a-b;
            case '*':
                return a*b;
            case '/':
                return a/b;
       }

       return -1;

}

int main(){
         //int, short, long, char, float, double, long double, long long
        // bool, string(derived datatype (an inbuilt class of string has all the files used for this datatype))

       double a, b, result;
       char op;

       cin>>a>>op>>b;

       result = calc(a,b,op);

       cout<<a<<" "<<op<<" "<<b<<":- "<<result<<endl;

    return 0;
}