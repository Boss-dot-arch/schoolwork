#include <iostream>
#include <string>
using namespace std;
struct Person{
    private:
    string name;
    string address;
    public:
    string get_name()const{
        return name;
    }
    string get_address()const{
        return address;
    }
    Person(const string &s,const string &a):name(s),address(a){ }
    Person()=default;
    friend istream &read(istream &,Person &);
    friend ostream &print(ostream &,Person &);

};   
istream &read(istream &is,Person &p){//
    is>>p.name>>p.address;
    return is;
}
ostream &print(ostream &os,Person &p){
    os<<p.name<<p.address;
    return os;
}


int main(){

}