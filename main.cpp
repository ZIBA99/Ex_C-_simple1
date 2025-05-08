#include <iostream>
using namespace std;


int main()
{
    int val1, val2;
    cout<<"1? ";
    cin>>val1;
    cout<<"2? ";
    cin>>val2;
    int result = val1+val2;
    cout<<"sum? "<<result<<endl;
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int i;
    cin >> i;
    cout<<"wwwwwwwwwww";
    cout << i <<endl;
    return 0;
}


#include <iostream>
#include "qwe.h"
#include "qwe2.h"

using namespace std;

int main()
{
    cout << qwe2::x;
    cout << qwe::x << endl;
    return 0;
}



int main()
{
    double i;
    cin >> i;

    cout << fixed << setprecision(1) << i << endl << flush;

    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int num1 =10, num2=4;
    int result;

    result = num1/num2;

    cout<<endl;
    cout << num1 << "/" << num2 << "=" << result << endl;
    cout << "10/4 = 2"<< endl;
    //cout << num1 << "/" << num2 << "=" << result << endl;

    return 0;
}


#include <stdio.h>//ÀÌÇØÇÏ±â!

int main()
{
    char x, y;
    x = -128;
    y = -x;

    if(x==y) printf("1");
    if((x-y)==0) printf("2");
    if((x+y)==2*x) printf("3");
    if(x!=-y) printf("4");

    return 0;
}


#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 5;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}


#include <stdio.h>

int foo()
{
    int i=0, j;
    j = i + 2;
    return j;
}

int main()
{
    for(int i = 0; i<10; i++)
        printf("Resulf #%d : %d\n", i, foo());
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    bool a = true;

    cout << "a= "<<a<<endl;
    a=false;
    cout << "a= "<<a<<endl;
    a=-38;
    cout << "a= "<<a<<endl;
    a=0;
    cout << "a= "<<a<<endl;
    return 0;
}


#include <iostream>

using namespace  std;

int main()
{
    int sum=0, i=0;
    for(i=1;i<10;i++){
        sum += i;
    }
    cout << "1ºÎÅÍ 10±îÁöÀÇ ÇÕ"<< sum << endl;

    return 0;
}
