#include<bits/stdc++.h>
using namespace std;

bool eligibility(int age){
    
    if(age>=18)
        return true;
    else
        return false;
        
}

int main(){
    int age;

    cout<<"Enter the age of Person : ";
    cin>>age;

    cout<<"Eligibile : "<<eligibility(age)<<endl;
}