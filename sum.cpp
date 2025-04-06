#include<iostream>
using namespace std;

void sum(int n1, int n2 ,int n3){
    cout<<"Sum : "<< n1+n2;
}


void sum(double n1, double n2){
    cout<<"Sum : "<< n1+n2;
}


int main(){
    sum(3.1,5.7);

}