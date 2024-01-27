#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    /*物件類型
    類型      關鍵字     描述
    布林型    bool       True、Flase
    字元型    char       True、Flase
    整數型    int        True、Flase
    浮點型    float      有小數點
    雙福點型  double     更精確的小數點
    無類型    void
    寬字元型  wchar_t    中文
    */

    //範例
    int a,b ;
    int c ;
    float f;

    a = 10;
    b = 20;
    c = a + b;

    cout << "\n" << c << endl;
    f = 70.0/3.0;
    cout << f << endl;

    /*特殊字元

    字元  含意
    \\    \
    \'    '
    \"    "
    \?    ?
    \a    警報鈴聲
    \b    倒退鍵
    \f    換行符號
    \n    換頁符號
    \r    Enter
    \t    水平定位符號
    \v    垂直定位符號

    */

    //範例
    cout << "Helloo\b123\tWorld\n\nC++\n" << endl;


    /*常數(int main()在前)
    不可改變的數值
    */

    /*Ex
    #difine LENGTH 10
    #difine WIDTH 5
    #define NEWLINE '\n'
    */


    /*變數
    可以改變的數值
    若前面加上const則為不可改變
    */

    //Ex

    const int Z = 10;
    cout << Z;
    
    //cout 
    cout << setprecision(3) << 3.123 << endl; //setprecision -> 全部取3位 
	cout << fixed << setprecision(3) << 3.1234 << endl; //fixed -> 小數點後取3位 
	cout << fixed << setprecision(3) << setw(3) << 3.1234 << endl; //setw(3) -> 長度=3 
	cout << fixed << setprecision(3) << setw(10) << 3.1234 << endl; //setw(10) -> 長度=10
	cout << fixed << setprecision(3) << setfill('*') << setw(10) << 3.1234 << endl; //setfill('*') -> 空格放* 


	cout << "\n";
    system("PAUSE");
	return 0;
}

