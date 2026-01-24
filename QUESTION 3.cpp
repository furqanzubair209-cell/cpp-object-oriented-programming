#include <iostream>
using namespace std;
class Marks {
public:
    int roll_no;
    string name;
    float marks_physics, marks_chemistry, marks_math;
    void input() 
	{
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Physics Marks: ";
        cin >> marks_physics;
        cout << "Enter Chemistry Marks: ";
        cin >> marks_chemistry;
        cout << "Enter Math Marks: ";
        cin >> marks_math;
    }
};
class student1 : public Marks
 {
public:
    void Cal_marks() 
	{
        float avg = (marks_physics + marks_chemistry + marks_math) / 3;
        cout << "Student1 Average: " << avg << endl;
    }
};
class student2 : public Marks
 {
public:
    void Cal_marks() 
	{
        float avg = (marks_physics + marks_chemistry + marks_math) / 3;
        cout << "Student2 Average: " << avg << endl;
    }
};
int main()
 {
    student1 s1;
    s1.input();
    s1.Cal_marks();
    student2 s2;
    s2.input();
    s2.Cal_marks();
    return 0;
}
