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

    /*��������
    ����      ����r     �y�z
    ���L��    bool       True�BFlase
    �r����    char       True�BFlase
    ��ƫ�    int        True�BFlase
    �B�I��    float      ���p���I
    �����I��  double     ���T���p���I
    �L����    void
    �e�r����  wchar_t    ����
    */

    //�d��
    int a,b ;
    int c ;
    float f;

    a = 10;
    b = 20;
    c = a + b;

    cout << "\n" << c << endl;
    f = 70.0/3.0;
    cout << f << endl;

    /*�S��r��

    �r��  �t�N
    \\    \
    \'    '
    \"    "
    \?    ?
    \a    ĵ���a�n
    \b    �˰h��
    \f    ����Ÿ�
    \n    �����Ÿ�
    \r    Enter
    \t    �����w��Ÿ�
    \v    �����w��Ÿ�

    */

    //�d��
    cout << "Helloo\b123\tWorld\n\nC++\n" << endl;


    /*�`��(int main()�b�e)
    ���i���ܪ��ƭ�
    */

    /*Ex
    #difine LENGTH 10
    #difine WIDTH 5
    #define NEWLINE '\n'
    */


    /*�ܼ�
    �i�H���ܪ��ƭ�
    �Y�e���[�Wconst�h�����i����
    */

    //Ex

    const int Z = 10;
    cout << Z;
    
    //cout 
    cout << setprecision(3) << 3.123 << endl; //setprecision -> ������3�� 
	cout << fixed << setprecision(3) << 3.1234 << endl; //fixed -> �p���I���3�� 
	cout << fixed << setprecision(3) << setw(3) << 3.1234 << endl; //setw(3) -> ����=3 
	cout << fixed << setprecision(3) << setw(10) << 3.1234 << endl; //setw(10) -> ����=10
	cout << fixed << setprecision(3) << setfill('*') << setw(10) << 3.1234 << endl; //setfill('*') -> �Ů��* 


	cout << "\n";
    system("PAUSE");
	return 0;
}

