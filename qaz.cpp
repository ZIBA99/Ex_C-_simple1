/*#include <iostream>

using namespace  std;

int main()
{
    int sum=0, i=0;
    for(i=1;i<10;i++){
        sum += i;
    }
    cout << "?"<< sum << endl;

    return 0;
}*/


/*
#include <iostream>

using namespace  std;

int main()
{
    int num = 10;
    int &ref = num;

    cout<<"num = "<<num<<endl;
    cout<<"ref = "<<ref<<endl;

    ref = 100;

    cout<<"num = "<<num<<endl;
    cout<<"ref = "<<ref<<endl;

    cout<<"&num = "<<&num<<endl;
    cout<<"&ref = "<<&ref<<endl;
    //cout<<"안녕"<<endl;

    return 0;
}*/

/*
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);  // UTF-8 콘솔 설정
    cout << u8"qwe" << endl;
    return 0;
}*/

#include<iostream>

using namespace std;

int main()
{
    int n =1234;
    double d =1.231;

    auto autoVar1 = d;
    auto autoVar2 = n;
    auto autoVar3 = n+d;
    autoVar3 = 1.234;

    cout << autoVar1 << endl;
    cout << autoVar2 << endl;
    cout << autoVar3 << endl;

    return 0;
}
