#include <iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter participants number: ";
     cin>>n;
     double avg, sum=0, score[n];
     for(int i=0; i<n; i++)
     {
         cout<<"Enter participant["<<i+1<<"] score: ";
         cin>>score[i];
         sum = sum+score[i];
         if(score[i]>100 || score[i]<0)
         {
         cout<<"invalid input";
         break;
         }
     }
     avg=sum/n;
     cout<<"Average: "<<avg<<endl;
     double hs=score[0], ls=score[0];
     for(int i=1; i<n; i++)
     {
         if(score[i]>hs)
         {
            hs=score[i];
         }
         else if(score[i]<ls)
         {
             ls=score[i];
         }
     }
     cout<<"Highest score: "<<hs<<endl;
     cout<<"lowest score: "<<ls<<endl;
}


/*#include <iostream>   //shakkhar version
using namespace std;
int main()
{
    int x;
    cout<<"enter the number of students: ";
    cin>>x;
    int score[x];
    int i;
    for(i=0;i<x;i++)
    {
        cout<<"enter the score of student["<<i+1<<"]: ";
        cin>>score[i];
    }
    int total,avg,highest=0,lowest=100;
    for(i=0;i<x;i++)
    {total+=score[i];
     if(score[i]>highest)
     {
         highest=score[i];
     }
     if(score[i]<lowest)
     {
         lowest=score[i];
     }
    }
    avg=total/x;
    cout<<"average score is: "<<avg<<endl;
    cout<<"highest score is: "<<highest<<endl;
    cout<<"lowest score is: "<<lowest<<endl;
}*/
