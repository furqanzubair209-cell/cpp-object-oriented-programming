#include <iostream>
using namespace std;
class myclass;
class secondclass 
{
public:
    void change(myclass& obj);
};
class myclass 
{
private:
    int secret = 0;
public:
    friend class secondclass;
    void print()
	 {
        cout << "Secret: " << secret << endl;
    }
};
void secondclass::change(myclass& obj) {
    cout << "Enter new secret value: ";
    cin >> obj.secret;
}
int main() 
{
    myclass obj1;
    secondclass obj2;
    obj1.print();
    obj2.change(obj1);
    obj1.print();
    return 0;
}
