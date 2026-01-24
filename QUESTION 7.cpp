#include <iostream>
#include <cmath>
using namespace std;
class Calculator 
{
public:
    float VAR1;
    Calculator(float v = 0) 
	{
        VAR1 = v;
    }
    Calculator operator+(Calculator obj)
	 {
        return Calculator(VAR1 + obj.VAR1);
    }
    Calculator operator-(Calculator obj)
	 {
        return Calculator(VAR1 - obj.VAR1);
    }
    Calculator operator*(Calculator obj)
	 {
        return Calculator(VAR1 * obj.VAR1);
    }
    Calculator operator/(Calculator obj)
	 {
        return Calculator(VAR1 / obj.VAR1);
    }

    Calculator operator^(Calculator obj)
	 {
        return Calculator(pow(VAR1, obj.VAR1));
    }
    void display() {
        cout << "Result: " << VAR1 << endl;
    }
};
int main()
 {
    Calculator a(40), b(10);
    (a + b).display();
    (a - b).display();
    (a * b).display();
    (a / b).display();
    (a ^ b).display();
    return 0;
}
