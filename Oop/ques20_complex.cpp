#include<iostream>

using namespace std;

class complex

{
private:
int real,imag;
public:
void setdata()
{
cout<<"Enter real and imaginary part:\n";
cin>>real>>imag;
}

friend complex sum(complex,complex);
void display();
};

void complex::display()
{
cout<<"The sum of complex num is :\n"<<real<<"+i"<<imag;
}
complex sum(complex a,complex b)
{
complex t;
t.real=a.real+b.real;
t.imag=a.imag+b.imag;
return t;
}

int main()
{
complex a,b,c;
a.setdata();
b.setdata();

c=sum(a,b);
c.display();

return 0;

}
