// danh sach sinh vien 
#include<iostream>
using namespace std;
struct student 
{
	string  name;
	int    age ;
	double gpa;
 };
 // input a student
 void inputstudent (struct student &s)
{
cout << "Name: "; getline(cin, s.name);
cout << "Age: "; cin >> s.age;
cout << "GPA: "; cin >> s.gpa;
}
// print a student 
void printstudent (struct student s)
{
cout << "Name: " << s.name << endl;
cout << "Age: " << s.age << endl;
cout << "GPA: " << s.gpa << endl;
}
// input an array of students
void inputListOfStudent(struct Student list[], int n)
{
  int i;
  for(i = 0; i < n; i++)
{                                                                                                              
    fflush(stdin);
     inputStudent(list[i]);
 }
}
// print an array of students
void printListOfStudent(struct Student list[], int n)
{
     int i;
          for(i = 0; i < n; i++)
    printStudent(list[i]);
}
// find a student by name
int findStudent(struct Student list[], int n, string name)
{
     int i;
     for(i = 0; i < n; i++)
        if(list[i].name == name)
     return i;
return -1;
}

int main()
{
struct Student m[100];
string name;
int k;
inputListOfStudent(m, 5);
printListOfStudent(m, 5);
fflush(stdin);
cout << "Input name for find: "; getline(cin, name);
k = findStudent(m, 5, name);
if (k == -1)
cout << "Not found!";
else
printStudent(m[k]);
}

//a) liet ke cac sinh vien co gpa >=8
 int dem_sv (struct student p[], int n,int x){
      int d=0
        for (i=0,i<n,i++)
           if (p[i].gpa >=x)
           d++ ;
    return d;
}
// them mot sinh vien vo cuoi mang chua n sinh vien 
// dem so nguoi hoc 'Nguyen' trong mang sinh vien 
  int dem_ho (truct _student  p[],int n)
      int d=0 ;
       for (int i=0;i<n;i++)
    if (p[i].name.student (0.6)=="Nguyen")
   d++;
   return d;
  
