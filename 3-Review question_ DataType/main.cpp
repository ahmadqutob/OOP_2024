#include <iostream>

using namespace std;

int main()
{


    /*
    A - Say Hello With C++
    string name;
    cin>>name;
    cout<<"Hello, "<<name;

    */

    /*
    B. Basic Data Types

    int intt;
    long long longg;
    char charr;
    float floatt;
    double doublee;
    cin>> intt>>longg   >> charr >> floatt >>doublee;
    cout<<intt<<endl<<longg<<endl<<charr<<endl<<
    floatt<<endl<<
    doublee;

    */

    /*
    C - Simple Calculator


    int main()
    {

    long long x,y,sum,multi,sub;
    cin >>x >>y;
    sum=x+y; multi=x*y;sub=x-y;
    cout <<x<<" + "<<y <<" = "<<sum <<"\n";
    cout <<x<<" * "<<y<<" = "<<multi<<"\n";
    cout <<x<<" - "<<y<<" = "<<sub<<"\n";



    }

    */


    /*

    D - Difference

    using namespace std;

    int main()
    {
    long long A,B,C,D,X;
    cin>> A >> B >> C >> D;
    X=(A*B) - (C * D);
    cout<<"Difference = " <<X;
    }


    */


    /*
    E. Area of a Circle

      double x,r,area;
    x= 3.141592653;
    cin >> r; //save value inside r
    area = x *r*r;
    cout << fixed << setprecision(9) << area ;


    */

    /*
    F. Digits Summation
    Given two numbers N and M. Print the summation of their last digits.


    long long n,m,myN,myM;

    cin >>n>>m;
    myN=n%10;
    myM=m%10;

    cout << myN + myM ;

    */


    /*
    G. Summation from 1 to N


    Given a number N
    . Print the summation of the numbers that is between 1 and N
    (inclusive).

    {
    long long n,sum;

    cin >> n;
    sum = (n*(n+1))/2 ;

    cout << sum;
    }

    */


    /*

    H. Two numbers
    Given 2 numbers A
    and B
    . Print floor, ceil and round of A/B

    float a,b;

    cin >>a>>b;

    cout <<"floor "<<a<<" / "<<b<<" = "<< floor(a/b) <<"\n";
    cout <<"ceil "<<a<<" / "<<b<<" = "<< ceil(a/b)<<"\n";
     cout <<"round "<<a<<" / "<<b<<" = "<< round(a/b)<<"\n";
    */




    /*

    I. Welcome for you with Conditions

    int a,b;
    cin>> a >> b;
    if(a>=b){
        cout<<"Yes";
    }else{
    cout << "No";
    }


    }



     */
    /*


    {
    J. Multiples
    Given two numbers A and B. Print "Multiples" if A is multiple
     of B or vice versa. Otherwise print "No Multiples".

        long long A,B;
       cin>>A>>B;
        if(A%B==0 or B%A==0){
            cout<<"Multiples";
        }else{
        cout<<"No Multiples";
        };

    }

    */


    /*


    L. The Brothers
    Note: The two persons are brothers if they share the same second name.


     string F1,S1,F2,S2;

      cin>>F1>>S1;
      cin>>F2>>S2;
      if(S1 == S2){
        cout<<"ARE Brothers";
      }else{
        cout<<"NOT";
      }
    }


    /*




    /*

    M. Capital or Small or Digit
    Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

    nt main()
    {
        char x;
        cin>>x;
        if(x >=48 and x<=57){
            cout<<"IS DIGIT";
        }else if(x >=65 and x<=90){
         cout <<"ALPHA"<<endl;
         cout<<"IS CAPITAL";
        }else if(x >=97 and x<=122){
         cout <<"ALPHA"<<endl;
         cout<<"IS SMALL";
        }


    */

    /*
    P. First digit !
    Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
     short x;
        cin>> x;

        if(( x/1000) %2==0 ){
            cout <<"EVEN";
        }else{
        cout<<"ODD";
        }
    }



    */





    /*
    N. Char

    Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter
    . Otherwise print the letter after converting it from uppercase letter to lowercase letter
    char x;
    cin>>x;

    if(int(x) >= 97 and int(x) <= 122){
    cout <<char(int(x) - 32);
    }else if (int(x) >= 65 and int(x) <= 90){
      cout <<char(int(x) + 32);
    }
    }
    */




    /*
    O. Calculator

    A+B
    , A−B
    , A∗B
     and A/B
    .
    int main()
    {
         int a,b;
        char s;
        cin>> a>>s>>b;
        if(s=='+'){
            cout<<a+b;
        }else if(s=='-'){
             cout<<a-b;
        }else if(s=='*'){
             cout<<a*b;
        }else  {
             cout<<a/b;
        }

    }



    */



    /*


    Q. Coordinates of a Point

    Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.

    Note:

    Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
    Print "Origem" If the point is at the origin.
    Print "Eixo X" If the point is over X axis.
    Print "Eixo Y" if the point is over Y axis.

    float x,y;
    cin >> x >> y;
    if (x==0&&y==0)
    cout << "Origem";
    else if (x!=0&&y==0)
    cout << "Eixo X";
    else if (x==0&&y!=0)
    cout << "Eixo Y";
    else if (x>0&&y>0)
    cout << "Q1";
    else if (x<0&&y>0)
    cout<<"Q2";
    else if (x<0&&y<0)
    cout<<"Q3";
    else if (x>0&&y<0)
    cout << "Q4";




    */




    /*


    R. Age in Days

       int n,years,months,days,y,m,d ;
        years=365;
        months=30;
        cin>>n ;

        y = n/years ; // 400 / 365 = 1
        cout<< y<< " years" <<"\n";
         m = (n%years) / 30 ;
        cout << m<<" months"  <<"\n";
         d= (n%years) % 30;
        cout<<d<<" days" ;


    */


    /*

    S. Interval
    Given a number X. Determine in which of the following intervals the number X belongs to:

    [0,25], (25,50], (50,75], (75,100]

    if X belongs to any of the above intervals print "Interval " followed by the interval.
    if X does not belong to any of the above intervals print "Out of Intervals".
    The symbol '(' represents greater than.
    The symbol ')' represents smaller than.
    The symbol '[' represents greater than or equal.
    The symbol ']' represents smaller than or equal.



    */



    /*
    T. Sort Numbers

    Given three numbers A, B, C. Print these numbers in ascending order
    followed by a blank line and then the values in the sequence as they were read.


         if (A <= B && A <= C) {
            if (B <= C) {
               cout << A << endl << B <<  endl << C <<  endl<<  endl;
               cout << A << endl << B <<  endl << C <<  endl<<  endl;
             } else {
                cout << A <<  endl << C << endl << B <<  endl<<  endl;
                cout << A << endl << B <<  endl << C <<  endl<<  endl;
            }
        } else if (B <= A && B <= C) {
            if (A <= C) {
                 cout << B <<  endl << A << endl << C << endl<<  endl;
                 cout << A << endl << B <<  endl << C <<  endl<<  endl;
            } else {
                 cout << B << endl << C <<  endl << A <<   endl<<  endl;
                 cout << A << endl << B <<  endl << C <<  endl<<  endl;
            }
        } else {
            if (A <= B) {
                cout << C <<  endl << A <<  endl << B <<  endl<<  endl;
                cout << A << endl << B <<  endl << C <<  endl<<  endl;
            } else {
               cout << C <<  endl << B <<  endl << A <<  endl<<  endl;
               cout << A << endl << B <<  endl << C <<  endl<<  endl;
            }
        }


    */

}




/*
U. Float or int
Given a number N
. Determine whether N
 is float number or integer number.

nt main()
{
  float n,conv;
  cin>>n;
     if( int(n) - n ==0){
        cout<<"int "<<n;
    }else{
    cout<<"float "<<int(n)<<" "<<setprecision(3)<< (n-int(n));
    }


*/


/*

V. Comparison
Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.




  int a,b;
    char s;
    cin >>a >> s >>b;

    if(s =='>' and a>b  ){
    cout<<"Right";
    }else if (s =='<' and  a < b ){
    cout<<"Right";
    }else if (s =='=' and a == b ){
    cout<<"Right";
    }else{
    cout<<"Wrong";
    }




*/





/*

W. Mathematical Expression
  Given a mathematical expression. The expression will be one of the following expressions:


 int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;

    if(s=='+' ){
        if(a + b == c){
            cout<<"Yes";
        }else{
            cout<<(a+b);
        }
    }else  if(s=='-' ){
        if(a - b == c){
            cout<<"Yes";
        }else{
            cout<<(a-b);
        }
    }else  if(s=='*' ){
        if(a * b == c){
            cout<<"Yes";
        }else{
            cout<<(a*b);
        }
    }
}
*/




}
