#include <iostream>
using namespace std;

void spiral(int arr[3][3])
{
    int i = 0, j, m;

    for (j = 0; j < 3; j++)
    {
        if (j == 2)
        {
            for (i = 0; i < 3; i++)
            {
                cout << " " << arr[i][j];
                if (i == 2)
                {
                    for (j = 1; j >= 0; j--)
                    {
                        cout << " " << arr[i][j];
                        if (j == 0)
                        {
                            for (m = 1; m > 0; m--)
                            {
                                cout << " " << arr[m][j];
                                cout << " " << arr[m][j + 1];
                            }
                        }
                    }
                }
            }
            break;
        }
        cout << " " << arr[i][j];
    }
}
int steps(int arr[3][3])
{
    int i = 0, j=0;
    for (j = 0; j < 3; j++)
    {
        cout<<" "<<arr[i][j];
        if(j == 2)
        {
            i++;
            for (j = 2; j >= 0; j--)
            {
                cout<<" "<<arr[i][j];
                if (j == 0)
                {
                    i++;
                    for (j = 0; j < 3; j++)
                    {
                        cout<<" "<<arr[i][j];
                        if (j == 2)
                        {
                            return 0;
                        }
                        
                    }
                    
                }
            }
            
        }
    }
}

int main()
{
    system("cls");
    int arr[3][3] = {{5, 11, 6}, {7, 8, 12}, {9, 13, 17}};
    
    steps(arr);

    cout<<endl;
    cout<<endl;

    spiral(arr);
    
    
    return 0;
}

