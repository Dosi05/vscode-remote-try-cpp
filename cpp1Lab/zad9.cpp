#include <iostream>
using namespace std;

int main(){
    double KvMPrice=7.61, discount=0.18, KvM;
    cin>>KvM;
    double price=KvM*KvMPrice;
    double dis=price*discount;
    price-=dis;
    // zakraglyane do 2 znak
    cout.setf(ios::fixed);
    cout.precision(2);
    // 
    cout<<"The final price is: "<<price<<" lv."<<endl;
    cout<<"The discount is: "<<dis<<" lv."<<endl;
}