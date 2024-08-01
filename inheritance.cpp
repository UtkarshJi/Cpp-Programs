#include<iostream>
using namespace std;
class parent{
    public:
    void disp(){
        cout<<"I am an isosceles triangle"<<endl;
    }
    void disp2(){
        cout<<"I am a triangle";
    }
};
class child:public parent{
    public:
    void disp3(){
        cout<<"I am an equilateral triangle"<<endl;
    }
};
int main(){
    child obj;
    obj.disp3();
    obj.disp();
    obj.disp2();

return 0;
}