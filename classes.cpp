#include <cstdlib>
#include <iostream>

using namespace std;

class MyClass{

    public:
        MyClass(); // constructor declaration
        ~MyClass(); // destructor declaration

        int i;
        float f;

        void setJ(int value);
        int getJ();

        void setG(float value);
        float getG();

    private:
        
        int j;
        float g;
};

MyClass::MyClass(){
    cout << "Entering constructor" << endl;
    j=0;
    g=0;
}

MyClass::~MyClass(){
    cout << "Entering destructor" << endl;
}

inline void MyClass::setJ(int value){
    j = value;
}
inline int MyClass::getJ(){
    return j;
}

void MyClass::setG(float value){
    g=value;
}

float MyClass::getG(){
    return g;
}

int main(int argc,char *argv[]){
    MyClass anInstance;
    anInstance.i=10;
    anInstance.f=4.56;
    anInstance.setJ(-20);
    anInstance.setG(10.10);
    cout << "i = " << anInstance.i << endl;
    cout << "f = " << anInstance.f << endl;
    cout << "j = " << anInstance.getJ() << endl;
    cout << "g = " << anInstance.getG() << endl;
    //system("pause");
    return (EXIT_SUCCESS);
}
