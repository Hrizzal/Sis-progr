using namespace std;

class Matrix
{
public:
    int arr[3][3];

    void plus(int one[3][3], int two[3][3])
    {
        for (int x = 0; x < 3; x++) 
        {
            for (int y = 0; y < 3; y++) 
            {
                arr[x][y] = one[x][y] + two[x][y];
                cout << arr[x][y] << " ";

            }
        }
    }
    void multiply(int one[3][3], int two[3][3])
    {
        for (int x = 0; x < 3; x++)
        {
            for (int y = 0; y < 3; y++)
            {
                arr[x][y] = one[x][0] * two[0][y] + one[x][1] * two[1][y] + one[x][2] * two[2][y];
                cout << arr[x][y] << endl;
            }
        }
    }
    void detr(int one[3][3], int two[3][3])
    {
        int arr = one[0][0] * one[1][1] * one[2][2] + one[2][0] * one[0][1] * one[1][2] + one[1][0] * one[2][1] * one[0][2] - one[2][0] * one[1][1] * one[0][2] - one[0][0] * one[2][1] * one[1][2] - one[1][0] * one[0][1] * one[2][2];
        cout << arr;
    }
};

int main()
{
    int n;
    setlocale(0, "");
   
    int arrOne[3][3]{ {1, 2, 3},{4, 5, 6},{7, 8, 9} };
    int arrTwo[3][3]{ {1, 2, 3},{4, 5, 6},{7, 8, 9} };
    cout << "Выберите действие:" << endl << "1) Сложение" << endl << "2) Умножение" << endl << "3) Детерминант" << endl;
    cin >> n;
   cout << endl;
    if (n == 1)
    {
        Matrix One;
        One.plus(arrOne, arrTwo);
    }
    if (n == 2)
    {
        Matrix One;
        One.multiply(arrOne, arrTwo);
    }
    if (n == 3)
    {
        Matrix One;
        One.detr(arrOne, arrTwo);
    }
}
