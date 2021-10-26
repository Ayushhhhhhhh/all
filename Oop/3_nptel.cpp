#include <iostream>
using namespace std;
class Matrix
{
    int i, j, k;
    int a[20][20];

public:
    void getmatrix(int r, int c, int v);
    void getmatrix(int v);
    void displayData(int r, int c);
    void displayData(int v);
    void mult(Matrix mat1, Matrix mat2, int r, int c, int v);
};

void Matrix::getmatrix(int r, int c, int v)
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            a[i][j] = v;
        }
    }
}
void Matrix::getmatrix(int v)
{

    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            a[i][j] = v;
        }
    }
}

void Matrix::displayData(int r, int c)
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void Matrix::mult(Matrix mat1, Matrix mat2, int r, int c, int v)
{
    if (c != v)
    {
        cout << "Matrix  multiplaction Not possible for the given matrices";
    }
    else
    {
        int mul[r][c];
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < v; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < v; k++)
                {
                    mul[i][j] += mat1.a[i][k] * mat2.a[k][j];
                }
                cout << mul[i][j] << "\t";
            }
            cout << endl;
        }
    }
}
void Matrix::displayData(int v)
{
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    Matrix m[3];
    int r, c, v1, v2, v3;
    cout << "Enter No of rows and columns :" << endl;
    cin >> r >> c;

    cout << "Enter the value you want to initialize the 1st matrix: " << endl;
    cin >> v1;
    m[0].getmatrix(r, c, v1);
    cout << "Given Matrix 1 is :" << endl;
    m[0].displayData(r, c);

    cout << "Enter the value you want to initialize the 2nd matrix: " << endl;
    cin >> v2;
    m[1].getmatrix(v2);
    cout << "Given Matrix 2 is :" << endl;
    m[1].displayData(v2);

    cout << "Enter the value you want to initialize the 3nd matrix: " << endl;
    cin >> v3;
    m[2].getmatrix(v3);
    cout << "Given Matrix 3 is :" << endl;
    m[2].displayData(r, c);
    cout << "Multiplication of 1 & 2 matrix :" << endl;

    m[2].mult(m[0], m[1], r, c, v2);

    return 0;
}