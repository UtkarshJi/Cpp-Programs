#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    char f_name[51];
    char l_name[51];
    int age;
    void disp(){
        cin>>id>>f_name>>l_name>>age;
        cout<<id<<endl;
        cout<<l_name<<","<<f_name<<endl;
        cout<<""<<endl;
        cout<<age<<endl;
        cout<<id<<","<<f_name<<","<<l_name<<","<<age;
    }
};
int main(){
    employee obj;
    obj.disp();
return 0;
}