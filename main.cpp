#include <iostream>
using namespace std;

int policz(int a, int b){
    return a*b;
}
int policz2(int a,int b){
    return a+b;
}
int main() {
    cout << "Hello, World!" << endl;
    cout<< "W pierwszym branchu 2*3="<<policz(2,3)<<endl;
    cout<<"W drugim branchu 4+5="<<policz2(4,5)<<endl;
    return 0;
}

