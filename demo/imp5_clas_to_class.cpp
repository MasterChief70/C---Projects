#include<iostream>
using namespace std;
class Student
{
int rollno;
char name[20];
int marks_eng,marks_hindi;
public:
 void setStudent()
 {
 cout<<"\nEnter Rollno =>";
 cin>>rollno;
 cout<<"\nEnter name =>";
 cin>>name;
 cout<<"\nEnter Marks of English =>";
 cin>>marks_eng;
 cout<<"\nEnter Marks of Hindi =>";
 cin>>marks_hindi;
 }
 void printStudent()
 {
 cout<<"\nNo = "<<rollno<<" Name = "<<name <<" Marks of English = "<<marks_eng<<" Hindi = "<<marks_hindi;
 }
 int getEnglish()
 {
 return marks_eng;
 }
 int getHindi()
 {
 return marks_hindi;
 }
};
class Marks
{
 int total;
public:
 Marks()
 {
 total=0;
 }
 Marks(Student s1)
 {
 total=s1.getEnglish()+s1.getHindi();
 }
 void printTotal()
 {
 cout<<"\nTotal = "<<total;
 }
};
int main()
{
Student s1;
Marks m1;
s1.setStudent();
m1=s1;
m1.printTotal();
return 0;
}

