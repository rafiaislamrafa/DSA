
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j, target, sum=0;

    cout << "how many digits = ";
    cin >> n;

    int nums[n];

    for(i=0; i<n; i++)
    {
        cout << "enter digit " << i+1 << " = " ;
        cin >> nums[i];
        cout << "" << endl;
    }

    cout << "target = ";
    cin >> target;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            sum = nums[i] + nums[i+j];
            if(sum == target)
                {
                    cout << i << "," << j;
                    break;
                }
            else
                continue;
        }
    }

    //for(i=0; i<n; i++)
        //cout << nums[i] << endl;

    return 0;
}
