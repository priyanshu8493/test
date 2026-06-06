#include <iostream>
using namespace std;

class Pecha {
        public:
        string pecha;
        Pecha() {
            cout << "Pecha constructor called!" << endl;
        }
};


class beji{
        public:
        string beji;
        beji() {
            cout << "beji constructor called!" << endl;
        }
};

int main () {
    cout << "Hello World!" << endl;
    return 0;
}