#include <iostream>
using namespace std;

class Complex {
public:
    int real, img;

    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }

    void display() {
        cout << real << "+" << img << "i" << endl;
    }

    void display(string message) {
        cout << message;
        display();
    }

    Complex operator + (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex c3 = c1 + c2;

    c3.display("Sum of Complex Number: ");

    return 0;
}
