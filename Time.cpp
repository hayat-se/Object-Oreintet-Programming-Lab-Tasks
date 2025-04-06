#include<iostream>
using namespace std;

struct Time{
int Hours , Minutes ,Seconds;

void TotalSecond(int h,int m , int s){
    int totalSeconds = (h*3600 )+ (m * 60)  + s;
    cout<<"Total Seconds : "<< totalSeconds;
}
};

int main(){
    Time t1;
    cout<<"Enter Hours : ";
    cin>>t1.Hours;
    cout<<"Enter Minutes : ";
    cin>>t1.Minutes;
    cout<<"Enter Seconds : ";
    cin>>t1.Seconds;
    t1.TotalSecond(t1.Hours , t1.Minutes , t1.Seconds);
}