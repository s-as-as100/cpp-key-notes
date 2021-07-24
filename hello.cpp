#include <iostream>
#include <string>
using namespace std;

// function created first what type of data is return !!12
// then make funcitona accordingly ?

int add(int a, int b)
{
    int c;
    c = a + b;

    return c;
}

// i want jbhi ek object bane employee type ka ek function run  ho jaye 
class Employee {

    public: 
    string name;
    int salary;
    int roll;
  

    Employee(string name, int salary, int sp, int roll) {
        // to initialize the objects
        this-> name = name;
        this-> salary = salary;
        this-> secretPassword = sp;
        this-> roll = roll;
    }

    void printDetails() {
        cout << " the name of employee is " << this->name << "and salary is " << this->salary << " dollaars" << endl;
    }

    void secret() {
        cout << " the secret password is " << this->secretPassword <<endl;
    }
   

    void rollNo() {
        cout << " this is my roll no " << this-> roll << endl; 
    }

    private:
    int secretPassword; 


    // public:     //  name anyone has used used ouside the class
    // private:    // no outside access
    // protected:  // just like private u can accessible from subclass 
    // 


    // public method can access the private 

};
int main()
{
    int a, b;
    // int a,b,sum;
    // cout << "enter first number" << endl;
    // cin>>a;
    // cout <<" enter 2nd number " << endl;
    // cin>>b;
    // cout << " sum is " << a+b <<endl;
    // cout << " sum is " << a-b <<endl;
    // cout << " sum is " << a*b <<endl;

    // // type casting
    // cout << " sum is " << (float) a/b <<endl;

    // int age;

    // cout << " enter your age" << endl;
    // cin>> age;
    // // if not true this conditon excutre next line otherwiose it stop
    // // if using if condtion is check again and again
    // if(age>=150 || age <1) {
    //     cout<< "invalid age" << endl;
    // }

    // else if(age >=18)  {
    //   cout << " you can vote"<<endl;

    // }

    // else {
    //     cout << " you cannot vote" <<endl;
    // }

    //     switch (age)
    //     {
    //     case 12:
    //         cout << " you are 12 year olds";
    //         break; // using to exectue code after this statements
    //     case 23:
    //         cout << " you are 23 year olds";
    //         break;

    //     default:
    //         cout<< " you are neither 12 nd 23 year olds";
    //         break;
    //     }

    // loops
    // int index = 0;
    // while (index <30)
    // {
    //    cout << " we are index number is " << endl;
    //    index = index + 1;
    // }
    // the diffrencw betwenn do and whi;e loop is do while loop execute atleast one

    // do
    // {
    //  cout << " we are index number is " << endl;
    //  index = index + 1;

    // } while ( index  <30);

    // for (int i = 0; i <= 34; i++)
    // {
    //     cout << " the value of i is "<< i <<endl;
    // }

    //    cout << "enter first number" << endl;
    //     cin>>a;
    //     cout <<" enter 2nd number " << endl;
    //     cin>>b;

    //     cout << " sum is " << add(a,b) << endl;

    // 1 d array
    //   int arr[] = {1,2,3};

    //   int marks[6];

    //   for (int i = 0; i < 6; i++)
    //   {
    //       /* code */
    //       cout <<" enter the marks" <<i << "th student" << endl;
    //       cin>> marks[i];
    //   }
    //    for (int i = 0; i < 6; i++)
    //   {
    //       /* code */
    //       cout <<"Marks of " <<i << "th student is" << marks[i] <<endl;

    //   }

    // int array2d[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<< " the value at" << i<<" ," <<j<< " is" << array2d[i][j] <<endl;
    //     }
    // }

    // type casting convert into float
    // int z = 232;
    
    // cout << (float) z << endl;


    // return 0;

// string is new data types ;  

//    string name = "mohd" ;

//    cout<<" the name is" <<name <<endl;
//    cout<< " lenght of the name is" << name.length()<< endl;
//    cout<<" display charactuer starting index to character show " << name.substr(0,2)<< endl;

Employee har("harry constructor",12,32,23);
// har.name = " mohd";
// har.salary = 120;
har.printDetails();
har.secret();
har.rollNo();
// har.secretPassword;  // u cannot access like this ..


}

// data types
// int a , b, c ; no of bytes according to architecture
// var are case sensitive  // strart with letter or _
// camelCase;

// short a ;
// int b;
// long c ;
// long lond d;

// float score  = 54.2;
// double ""
// long double ""
// u can using const if u fixed the value ::

// user input how ?

// array similar type of data types is called array ?
// int arr[34]  // 34 is size of array



// pointer is special data types to store address of variable 

// int a=34;
// int *ptra ;  to store the address of a;  // 32
// ptra = &a; // addess dsiplay 0x46s
//&a  is also same dsiplay address 0x2345
// * is defrenceing operator ek pointer ko



// c++ is object oriented programming language !!
// make class and object way nd way of programming 


