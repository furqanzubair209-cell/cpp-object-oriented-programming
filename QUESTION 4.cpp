#include <iostream>
using namespace std;
class Area {
private:
    int length, width, area;
public:
    static int count;
    Area(int l, int w) 
	{
        length = l;
        width = w;
        area = length * width;
        count++;
    }
    void display() {
        cout << "Area: " << area << ", Count: " << count << endl;
    }
};
int Area::count = 0;
int main()
 {
    Area a1(8, 5);
    a1.display();
    Area a2(6, 9);
    a2.display();
    Area a3(5, 10);
    a3.display();
    return 0;
}
