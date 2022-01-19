#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){

    if(b==0){
        return(1);
    }
    
    int product = power(a , b/2);
    if(b%2==0)
        return (product*product);
    else
        return(a*product*product);

}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<a<<" to the power "<<b<<" is "<<power(a,b)<<endl;


}