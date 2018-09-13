#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if((a>=b)&&(a%b==0))
        return a;
    else
        gcd(a,(b%a));
}
int main(int argc, char **argv)
{
    int number_1;
    int number_2;
    cout<<"ARE READY TO CHECK THE GCD OF TWO NUMBERS"<<endl;
    cout <<"PLEASE ENTER YOUR FIRST NUMBER"<<endl;
    cin>>number_1;
    cout <<"PLEASE ENTER YOUR SECOND NUMBER"<<endl;
    cin>>number_2;
    gcd(number_1,number_2);

    cout <<"GCD = "<<gcd(number_1,number_2)<<endl;
    return 0;
}
