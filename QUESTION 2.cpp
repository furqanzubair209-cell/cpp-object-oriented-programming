#include <iostream>
using namespace std;
class Area {
public:
    int length, width;
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
};
class Rectangle : public Area {
public:
    void rec_Area()
	 {
        cout << "Area: " << length * width << endl;
    }
};
class Perimeter : public Area
 {
public:
    void cal_Perimeter() 
	{
        cout << "Perimeter: " << 2 * (length + width) << endl;
    }
};
int main() 
{
    Rectangle r;
    r.input();
    r.rec_Area();
    Perimeter p;
    p.input();
    p.cal_Perimeter();
    return 0;
}
