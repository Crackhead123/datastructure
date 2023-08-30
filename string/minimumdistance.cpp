#include<iostream>
using namespace std;
 

void divide(int number)
{
    int sum;
    while(number!=0)
    {
        int rem=number-((number/10)*10);
        number=number/10;
        sum=number-2*rem;
        if(sum<10)
        {
            break;
        }
    }
    if(sum%7==0)
    {
        cout<<"THE NUMBER IS DIVISIBLE BY 7";
    }
    else
    {
        cout<<"THE NUMBER IS NOT DIVISIBLE BY 7";
    }
}
int main()
{
    int number=7;
    divide(number);
    return 0;
}




/*
int isDivisibleBy7(int number)
{
    if(number<0)
    {
        return isDivisibleBy7(-number);
    }
    if(number==0||number==7)
    {
        return 1;
    }
    if(number<10)
    {
        return 0;
    }

    return isDivisibleBy7(number/10-2*(number-number/10*10));
}
*/