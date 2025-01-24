/*Take input from user numbers of subjects name of the subjects and marks then calculate the
cgpa and grade and convert it into 40% then calculate the same process of the finals and convert it into sorry 60 Percent.*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Total course: ";
    cin>>n;
    string arr[n];
    int credit[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Name of course no ["<<i+1<<"]: ";
        cin>>arr[i];
        cout<<"Credit of "<<arr[i]<<": ";
        cin>>credit[i];
    }
    int mark;
    int total_grade=0;
    float grade[n];
    int total_credit;
    for(int i=0; i<n; i++)
    {
        cout<<"Mark of "<<arr[i]<<": ";
        cin>>mark;
        if(mark>=90)
        {
            grade[i]=4.00;
        }
        else if(mark<90 && mark>=85)
        {
            grade[i]=3.75;
        }
        else if(mark<85 && mark>=80)
        {
            grade[i]=3.50;
        }
        else if(mark<80 && mark>=75)
        {
            grade[i]=3.25;
        }
        else if(mark<75 && mark>=70)
        {
            grade[i]=3.00;
        }
        else if(mark<70 && mark>=65)
        {
            grade[i]=2.75;
        }
        else if(mark<65 && mark>=60)
        {
            grade[i]=2.50;
        }
        else if(mark<60 && mark>=50)
        {
            grade[i]=2.00;
        }
        else
        {
            grade[i]=0.00;
        }
        cout<<"grade of "<<arr[i]<<" is: "<<grade[i]<<endl;
        total_grade+=grade[i]*credit[i];
        total_credit+=credit[i];
    }
    float cgpa=0;
    cgpa=total_grade/total_credit;
    cout<<"CGPA: "<<cgpa;
}
