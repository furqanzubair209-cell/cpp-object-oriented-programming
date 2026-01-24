#include <iostream>
using namespace std;
class Addition 
{
public:
    int num1, num2;
    void input_sum() 
	{
        cout << "Enter num1 and num2 for addition: ";
        cin >> num1 >> num2;
    }

    void sum() 
	{
        cout << "Sum: " << num1 + num2 << endl;
    }
};
class Subtraction 
{
public:
    int num3, num4;
    void input_sub()
	 {
        cout << "Enter num1 and num2 for subtraction: ";
        cin >> num3 >> num4;
    }
    void sub()
	 {
        cout << "Difference: " << num3 - num4 << endl;
    }
};
class Calculation : public Addition, public Subtraction 
{
public:
    void display() {
        sum();
        sub();
    }
};
int main()
 {
    Calculation c;
    c.input_sum();
    c.input_sub();
    c.display();
    return 0;
}
