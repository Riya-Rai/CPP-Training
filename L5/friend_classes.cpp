#include<bits/stdc++.h>
using namespace std;

class Citizen{
    int acc_bal;
    string aadhaar;
    public:
    string name;

    Citizen(){}

    Citizen(string n, string a, int ab){
        name=n;
        aadhaar = a;
        acc_bal = ab;
    }

    void introduce(){
        cout<<"Hi!, my name is "<<name<<endl;
    }

    friend class Government;
    friend void hackerman(Citizen* c);
};

class Government{
    public: 
    void tax_raid(Citizen* c){
        cout<<"Tax report :"<<endl;
        cout<<"Name: "<<c->name<<endl;
        cout<<"Aadhaar: "<<c->aadhaar<<endl;
        cout<<"Acc_bal: "<<c->acc_bal<<endl;
    }
};

void hackerman(Citizen* c){
        cout<<"***Mission Impossible Tune Plays***"<<endl;
        cout<<"Name: "<<c->name<<endl;
        cout<<"Aadhaar: "<<c->aadhaar<<endl;
        cout<<"Acc_bal: "<<c->acc_bal<<endl;
}

int main(){
    Citizen* c = new Citizen("Riya" , "123456", 45000);
    c->introduce();

    Government g;
    g.tax_raid(c);

    hackerman(c);

    return 0;
}