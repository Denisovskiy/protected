#include "Source.h"
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int key;
    int n = 0;
    int* a = NULL;
    do
    {
        key = input_key();
        switch (key)
        {
        case 1:
           
            My_Program(a, n);
      
            break;
        case 2:
            Test(a, n);
            break;
        case 3:
        {
            cout << "�����" << endl;
        }
        break;
        default:
            cout<<"�� ����� ���-�� �� ��" << endl;
            break;
        }
    }
     while (key != 3);
    system("pause");
}