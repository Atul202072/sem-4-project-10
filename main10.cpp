//program for different types of constructors with operator overloading
#include<iostream>
using namespace std;

class function
{
    private:
    int a;
    int b;
    
    public:
   function()                                       //deafult constructor
   { 
       cout<<"This shows the deafult constructor."<<endl;
   }
   function(int x, int y)                          //parametrised constructor of two arguments
   {                                                //constructor overloading
       a=x; 
       b=y;
       cout<<"This is parametrised construction with value of a:"<<a<<" and b: "<<b<<endl;
   }
   function(function &c)                           //copy constructor
   {
       a=c.a;
       b=c.b;
       cout<<"This is copy constructor with value of a: "<<a<<" and value of b: "<<b<<endl;
    }
    function operator+(function F)               //operator overloading 
    {
        function res;
        res.a = a + F.a;
        res.b = b + F.b;
        return (res);
    }
    void display()                    //display function
    {
        cout<<"The vlaue of a is: "<<a<<" And b is: "<<b;
    }
};

int main()
{
    function C1,C4(5,5),C5;           //creating object of function data type 
    function C2(4,6);
    function C3(C2);                  //using copy constructor
    C5=C2+C4;                        //using operating overloading:function call
    C5.display();                    // function call
    return 0; 
}





