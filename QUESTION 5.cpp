#include <iostream>
using namespace std;
class Student {
public:
    int roll_no, sub1, sub2;
    void get()
	 {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Marks for Subject 1: ";
        cin >> sub1;
        cout << "Enter Marks for Subject 2: ";
        cin >> sub2;
    }
};
class Sports {
public:
    int sport_marks;
    void getsm()
	 {
        cout << "Enter Sports Marks: ";
        cin >> sport_marks;
    }
};
class Statement : public Student, public Sports
 {
public:
    void display()
	 {
        int total = sub1 + sub2 + sport_marks;
        float avg = total / 3.0;
        cout << "Total: " << total << ", Average: " << avg << endl;
    }
};
int main()
 {
    Statement s;
    s.get();
    s.getsm();
    s.display();
    return 0;
}
