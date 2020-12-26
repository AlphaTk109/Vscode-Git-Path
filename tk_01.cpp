#include <iostream>
using namespace std;
#include<iostream >
using namespace std;
class BASE_A {
public: BASE_A() { cout << "This is BASEA class!\n"; }
};

class BASE_B {
public: BASE_B() { cout << "This is BASEB class!\n"; }
};

class DERIVEA : public BASE_B, virtual public BASE_A {
public: DERIVEA() { cout << "This is DERIVEA class!\n"; }
};

class DERIVEB : public BASE_B, virtual public BASE_A {
public: DERIVEB() { cout << "This is DERIVEB class!\n"; }
};
class TOPDERIV : public DERIVEA, virtual public DERIVEB {
public: TOPDERIV() { cout << "This is TOPDERIV class!\n"; }
};
int main()
{
    TOPDERIV topobj;
    return 0;
}
