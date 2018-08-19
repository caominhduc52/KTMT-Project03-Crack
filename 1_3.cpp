#include <iostream>
#include <string>
using namespace std;

int main()
{
    string NAME;
    int result = 0;
    cout << "Nhap vao NAME : ";  // NAME không được vượt quá 11 ký tự. 
    getline(cin, NAME);

    for (int i = 0; i < NAME.length(); i++)
    {
        if (NAME[i] < 0x41)
        {
            cout << "character below A";
            return 0;
        }
        else
        {
            if (NAME[i] > 0x5A)
            {
                NAME[i] = NAME[i] - 0x20;
                result += NAME[i];
            }
        }
    }
    result = result ^ 0x5678;
    int serial = result ^ 0x1234;
    cout <<"Serial can nhap la :" << serial <<endl;
    system("pause");
    return 0;
}