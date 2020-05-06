#include <iostream>
using namespace std;

class Square {
private:
    int S;
public:
    Square () {
        S = 5;
    }
    friend void Display(Square S);
};

class Rectangle {
private:
    int L;
    int B;
public:
    friend void Display(Rectangle R);
    Rectangle() {
        L = 10;
        B = 20;
    }
};

void Display(Square S) {
    cout << "Side: " << S.S << endl;
}

void Display(Rectangle R){
    cout << "Length: " << R.L << endl;
    cout << "Breadth: " << R.B << endl;
}




int main() {
Square square;
Rectangle rectangle;
Display(rectangle);
Display(square);
    return 0;
}