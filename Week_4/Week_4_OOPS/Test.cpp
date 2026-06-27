#include <iostream>
using namespace std;

class Test {
public:
    virtual int square(int x) = 0;
};

class Arithmetic : public Test {
public:
    int square(int x) override {
        return x * x;
    }
};

int main() {
    Arithmetic obj;
    cout << "Square = " << obj.square(5);
    return 0;
}