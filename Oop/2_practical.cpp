#include <iostream>
using namespace std;
class Matrix
{
    int **a;
    int row, col, i, j;

public:
    void create()
    {
        cout << "Enter No of rows and columns :" << endl;
        cin >> row >> col;
        a = new int *[row];
        for (int i = 0; i < row; ++i)
        {
            a[i] = new int[col];
        }
    }
    void getData()
    {
        cout << "Enter Element of matrix :" << endl;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void displayData()
    {
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }
    void add(Matrix mat1, Matrix mat2, Matrix sum1)
    {
        for (i = 0; i < row; ++i)
            for (j = 0; j < col; ++j)
                sum1.a[i][j] = mat1.a[i][j] + mat2.a[i][j];
    }
} m1, m2, sum;
int main()
{
    m1.create();
    m1.getData();
    cout << "Given Matrix 1 is :" << endl;

    m1.displayData();
    m2.create();
    m2.getData();
    cout << "Given Matrix 2 is :" << endl;

    m2.displayData();
    cout << "For Sum Matrix :" << endl;
    sum.create();
    sum.add(m1, m2, sum);
    cout << "Sum of matrices :" << endl;
    sum.displayData();

    return 0;
}