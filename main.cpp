/*#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
*/
class C {
private:
    int c;
public:
    C(const int &x) {
        c = x;
    }
    C(const C& x) {
        c = x.c;
    }
    int get() {
        return 2 * c;
    }
    int operator+(C x) {
        return 2 * (c + x.c);
    }
};

/*int main() {
    C c1(7), c2 = 5, c3(c1 + c2);
    cout << c1.get() << ' ' << c2.get() << ' ' << c3.get() << endl;
    return 0;
}*/

