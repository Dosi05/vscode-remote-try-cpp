#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    double dogFood=2.5, catFood=4;
    int dogP,catP;
    cin>>dogP>>catP;
    double money=dogFood*dogP+catFood*catP;
    cout<< money<<" lv."<<endl;
}