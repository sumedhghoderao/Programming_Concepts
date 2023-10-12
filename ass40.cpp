#include<iostream>
using namespace std;

class Complex {
private:
double real;
double imaginary;
static int count;

public:
Complex(double r = 0, double i = 0) {
real = r;
imaginary = i;
count++;
}

static int getCount() {
return count;
}
};

int Complex::count = 0;

int main() {
Complex c1(3, 4);
Complex c2(5, 6);
Complex c3(7, 8);

cout << "Total number of objects created: " << Complex::getCount() << endl;

return 0;
}
