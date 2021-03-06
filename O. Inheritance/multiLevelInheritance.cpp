// Multi Level Inheritance. A --> B --> C.
#include <iostream>
using namespace std;

class A // base class
{
  public:
    A()
    {
      cout << "This is  A class constructor" << endl;
    }
    ~A()
    {
      cout << "This is  A class destructor" << endl;
    }
};

class B: public A
{
  public:
    B()
    {
      cout << "This is B class constructor" << endl;
    }
    ~B()
    {
      cout << "This is B class destructor" << endl;
    }
};

class C: public B
{
  public:
    C()
    {
      cout << "This is C class constructor" << endl;
    }
    ~C()
    {
      cout << "This is C class destructor" << endl;
    }
};

int main()
{
  C obj;
  return 0;
}
