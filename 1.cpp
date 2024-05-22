#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class integer 
{
  private:
    int num;
  public:
    integer(int n) : num(n) {}
    integer() : num(0) {}
    int get() { return num; }
    integer operator+(integer other);
    integer operator=(integer other);
    ~integer() {}
};

integer integer::operator+(integer other)
{
  num = num + other.get();
  return *this;
}

integer integer::operator=(integer other)
{
  num = other.get();
  return *this;
}

int main ()
{
  integer a(3),b(5),c;
  c = a+b;
  cout << a.get() << endl;
  cout << b.get() << endl;
  cout << c.get() << endl;
  cout << a.get() << endl; 
  return 0;
}