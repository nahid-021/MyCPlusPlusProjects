#include <iostream>
using namespace std;
int main()
{
    int i;
    double score[5];
	char grade;
	for(i=1; i<=5; i++)
    {
	cout << "Enter score (1-100)"<<i<<endl;
	cin >> score[i];
    }
    for(i=1; i<=5; i++)
    {
    cout <<"Scores: "<<score[i]<<endl;
    }
	switch (score[5]/10)
	{
	case 10:
	case 9:
		grade = 'A+';
		break;
	case 8:
		grade = 'A';
		break;
	case 7:
		grade = 'B+';
		break;
	case 6:
		grade = 'B';
		break;
	case 5:
		grade = 'D';
		break;
	default:
		grade = 'F';
	}
}
