#include<iostream>
using namespace std;

//计算阶乘  递归用法
int  fact (int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    
}

int main()
{
  

    int n = 3;
    cout<<fact(n)<<endl;

    cout<<"hello"<<endl;
    return 0;
}