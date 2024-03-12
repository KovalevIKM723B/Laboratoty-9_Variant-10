#include <iostream>
using namespace std;
const int row = 5;
const int col = 5;
int main()
{
    int a[row][col], max = 0, posi=0, posj=0, temp=0;
    if (row != col || row % 2 == 0 || col % 2 == 0)
    {
        cout << "Error, the matrix is ​​not square or its diagonals do not intersect";
    }
    else
    {
        int avrow = round(row / 2), avcol = round(col / 2);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                a[i][j] = rand() % 50;
                if (a[i][j] > max)
                {
                    max = a[i][j];
                    posi = i;
                    posj = j;
                }
            }
        }
        cout << "Current matrix\n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << a[i][j] << '\t';
            }
            cout << endl;
        }
        cout << "New matrix\n";
        temp = a[avrow][avcol];
        a[avrow][avcol] = max;
        a[posi][posj] = temp;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << a[i][j] << '\t';
            }
            cout << endl;
        }
    }
}


