#include<iostream>
using namespace std;

struct Phone
{
    string AreaCode, Exchange, Number;
    void FinalNUm(){
        cout<<"("<<AreaCode <<") "<<Exchange <<"-"<<Number<<endl;  
    }
};

int main(){
    Phone Yours , My;
    Yours.AreaCode = "123";
    Yours.Exchange = "321";
    Yours.Number = "531";
    cout<<"Your Number is ";
    Yours.FinalNUm();

    My.AreaCode = "031";
    My.Exchange = "487";
    My.Number = "713";
    cout<<"My Number is ";
    My.FinalNUm();
}
