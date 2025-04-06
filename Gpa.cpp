#include<iostream>
#include<iomanip>
using namespace std;
struct Subject
{
    string subjectName;
    string grade;
    int creditHours , totalMarks;
    double GPA;
    Subject(string sName ,int cHrs ,int mks , string grd )
    {
        subjectName = sName ;
        creditHours = cHrs;
        totalMarks = mks ;
        grade = grd;
    }
    void ShowDetails()
    {
        cout<<subjectName <<setw(13)<<creditHours <<setw(18)<<totalMarks <<setw(18)<<grade<<endl;
    }  
};
int main(){
    cout<<"\nSubject "<<setw(22)<<"Credit Hours"<<setw(12) <<"Marks "<<setw(16)<<"Grade"<<endl;
    Subject OOP("OOP    " , 3 , 89 , "A"); // intializing OOP structure by Struct Constructor
    OOP.ShowDetails();
    Subject DS("DS     ", 3 , 87 , "A");
    DS.ShowDetails();
    Subject OOP_Lab("OOP Lab" , 1 , 93 , "A");
    OOP_Lab.ShowDetails();
    cout<<"\n\n";
    double GPA = 4;
    cout<<"GPA : "<<GPA;

    




}