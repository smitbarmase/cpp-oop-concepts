//Addition of two complex numbers
#include<iostream>
using namespace std;

class complex
{
  int r;
  int i;
  public:
    void input();
    void addition(complex, complex);
    void output();
};

void complex::input()
{
  cout<<"Enter real part: ";
  cin>>r;
  cout<<"Enter imaginary part: ";
  cin>>i;
  cout<<endl;
}

void complex::addition(complex c1, complex c2)
{
  r = c1.r + c2.r;
  i = c1.i + c2.i;
}

void complex::output()
{
  cout<<r<<" + "<<i<<"i"<<endl;
}

int main()
{
  complex c1, c2, c3;

  cout<<"Enter 1st complex number"<<endl;
  c1.input();

  cout<<"Enter 2nd complex number"<<endl;
  c2.input();

  cout<<"Addtion of complex number is: ";
  c3.addition(c1, c2);
  c3.output();
  return 0;
}
