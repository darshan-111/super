#include<iostream>
using namespace std;
int per(int a, int b){
    int c;
    if (a > b)
    {
        c = 100/a*b;
        return c;
    }
    else{
        c = 100/b*a;
        return c;
    }
    

}
int main(){
    int num1, num2;
    cout<<"please enter num 1 ";
    cin>>num1;
    cout<<"please enter num 2 ";
    cin>>num2;
    int result = per(num1, num2);
    cout<<result;
    cout<<"hello world";
    return 0;
}
