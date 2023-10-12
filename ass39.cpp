#include<iostream>
using namespace std;
class Complex {
    public:
        int real;
        int imaginary;

    public:
        // Default constructor
        Complex() {
            real = 0;
            imaginary = 0;
        }

        // Parameterized constructor
        Complex(int r, int i) {
            real = r;
            imaginary = i;
        }

        // Getter functions
        int getReal() {
            return real;
        }

        int getImaginary() {
            return imaginary;
        }

        // Setter functions
        void setReal(int r) {
            real = r;
        }

        void setImaginary(int i) {
            imaginary = i;
        }

        // Display function
        void display() {
            cout << real << " + " << imaginary << "i" << endl;
        }
};


int main() {
    Complex c1;  // Using the default constructor
    c1.display();  // Output: 0 + 0i

    Complex c2(3, 5);  // Using the parameterized constructor
    c2.display();  // Output: 3 + 5i

    c2.setReal(2);  // Changing the real part using the setter function
    c2.setImaginary(4);  // Changing the imaginary part using the setter function
    cout << "Real part: " << c2.getReal() << endl;  // Output: Real part: 2
    cout << "Imaginary part: " << c2.getImaginary() << endl;  // Output: Imaginary part: 4

    return 0;
}
