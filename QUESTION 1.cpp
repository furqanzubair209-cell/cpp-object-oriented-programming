#include <iostream>
using namespace std;

class Addition 
{
private:
    int* num1;
    int* num2;
public:
    Addition() 
	{
        num1 = new int;
        num2 = new int;
    }
    void in_data()
	 {
        cout << "Enter num1: ";
        cin >> *num1;
        cout << "Enter num2: ";
        cin >> *num2;
    }
    void cal_sum() 
	{
        cout << "Sum: " << (*num1 + *num2) << endl;
    }
    ~Addition() 
	{
        delete num1;
        delete num2;
        cout << "This is destructor" << endl;
    }
};
int main()
 {
    Addition obj;
    obj.in_data();
    obj.cal_sum();
    return 0;
}
