// Finding Sum and Average of elements
#include <iostream.h>
#include <conio.h>

int main()
{
clrscr();
const int matches=3;
float score[matches];	// Array declared by using a constant variable
float avgScore=0, totalScore =0;
 for(int i=0; i<matches;i++)
 {
   cout <<"Enter score made in Match" << i+1 << " :";
   cin >> score[i];
   totalScore += score[i];
 }
avgScore = totalScore/matches;
cout<< "\n Total score= "<<totalScore <<"\n";
cout << "Average score = " << avgScore << "\n";
getch();
return 0;
}
