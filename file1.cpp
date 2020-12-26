#include<iostream >
using namespace std;
class BASE_A {//基类 A
public: BASE_A() { cout << "This is BASEA class!\n"; }
};

class BASE_B {//基类 B
public: BASE_B() { cout << "This is BASEB class!\n"; }
};

class DERIVEA : public BASE_B, virtual public BASE_A {//构造Drive_A:继承A，虚继承B
public: DERIVEA() { cout << "This is DERIVEA class!\n"; }
};

class DERIVEB : public BASE_B, virtual public BASE_A {//构造Drive_B:继承A，虚继承B
public: DERIVEB() { cout << "This is DERIVEB class!\n"; }
};

class TOPDERIV : public DERIVEA, virtual public DERIVEB {//构造Top_Deriv：继承Drive_A，虚继承Drive_B
public: TOPDERIV() { cout << "This is TOPDERIV class!\n"; }
};

int main()
{
    TOPDERIV topobj;
    //构造Top需要先构造虚基类 DERIVEB -> 构造 DERIVEB 需要构造虚基类基类 Base_A 再构造公共基类 Base_B
    //因此先输出：1-BASEA 与 2-BASEB
    //现在公共基类 DERIVEB 被构造完成，开始构造虚基类 DERIVEA 输出3-DERIVEB
    //构造 DERIVEA 需要构造虚基类基类 Base_A 再构造公共基类 Base_B
    //因为Base_A为虚拟继承，已经被构造完成 所以只需要构造 Base_B 输出4-BASEB
    //此时虚基类 DERIVEA 被构造完成 输出5-DERIVEA
    //所有基类都被构造完成：输出6-TOPDERIV
    //输出：
    //This is BASEA class!  
    //This is BASEB class!  
    //This is DERIVEB class!
    //This is BASEB class!
    //This is DERIVEA class!
    return 0;
}
