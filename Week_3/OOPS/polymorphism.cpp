#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Compartment {
public:
    virtual string notice() = 0; // Pure Virtual Function
};


class FirstClass : public Compartment {
public:
    string notice() {
        return "First Class Compartment";
    }
};

class Ladies : public Compartment {
public:
    string notice() {
        return "Ladies Compartment";
    }
};

class General : public Compartment {
public:
    string notice() {
        return "General Compartment";
    }
};

class Luggage : public Compartment {
public:
    string notice() {
        return "Luggage Compartment";
    }
};


class TestCompartment {
public:
    static void test() {
        Compartment* c[10];

        srand(time(0));

        for (int i = 0; i < 10; i++) {
            int r = rand() % 4 + 1;

            if (r == 1)
                c[i] = new FirstClass();
            else if (r == 2)
                c[i] = new Ladies();
            else if (r == 3)
                c[i] = new General();
            else
                c[i] = new Luggage();
        }

        cout << "Compartments:\n";
        for (int i = 0; i < 10; i++) {
            cout << c[i]->notice() << endl;  // Polymorphism
        }

        for (int i = 0; i < 10; i++)
            delete c[i];
    }
};

int main() {
    TestCompartment::test();
    return 0;
}