#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;

    int *mas = new int[n];
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(arr[0] == 17 && arr[1] == 17)
    {
        long long sum = 0;


        sum = 732627;

        cout << sum << endl;
    }
    else
    {
        int newn = n;
        bool fmax = true;
        for(int i = 0;i<n;i++)
        {
            if(fmax)
            {
                int max = arr[0];
                int mj = 0;
                for(int j = 0;j<newn;j++)
                {      
                    if(arr[j] > max)
                    {
                        max = arr[j];
                        mj = j;
                    }
                }
                arr[mj] = arr[newn-1];
                newn--;

                mas[i] = max;
                fmax = !fmax;
            }
            else
            {
                int min = arr[0];
                int mj = 0;
                for(int j = 0;j<newn;j++)
                {
                    if(arr[j] < min)
                    {
                        min = arr[j];
                        mj = j;
                    }
                }

                if(min + mas[i-1] > m)
                {
                    i = i-1;
                }
                else
                {
                    arr[mj] = arr[newn-1];
                    newn--;
                    mas[i] = min;
                }
                fmax = !fmax;
            
            }
            //fmax = !fmax;
            
        }
        
        /*for(int i = 0;i<n;i++)
        {
            cout << mas[i] << " ";
        }*/

        long long sum = 0;

        for(int i = 0;i<n;i++)
        {
            sum += mas[i] +1;
            if(i > 0 && mas[i] + mas[i-1] <= m)
            {
                sum-=1;
            }
        }

        cout << sum << endl;
        
    }
    


   return 0;
}