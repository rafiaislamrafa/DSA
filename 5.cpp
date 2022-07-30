#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j;

    cout << "how many digits = ";
    cin >> n;
    cout << "" <<endl;

    int nums[n];

    for(i=0; i<n; i++)
    {
        cout << "enter digit " << i+1 << " = " ;
        cin >> nums[i];
    }

    int take = -99999;

    for(i=0; i<n; i++)
    {
        int sum=0;
        for(j=i; j<n; j++)
        {
            sum = sum + nums[j];
            if(sum > take)
                    take = sum;
            else
                continue;
        }
    }
    cout << take;

    //for(i=0; i<n; i++)
        //cout << nums[i] << endl;

    return 0;
}
