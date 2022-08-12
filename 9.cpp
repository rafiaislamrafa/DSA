//3sum

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j, k;

    cout << "how many digits = ";
    cin >> n;
    cout << "" <<endl;

    int nums[n];

    for(i=0; i<n; i++)
    {
        cout << "enter digit " << i+1 << " = " ;
        cin >> nums[i];
    }


    for(i=0; i<n-2; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            for(k=j+1; k<n; k++)
            {
                if(nums[i]+nums[j]+nums[k]==0 && nums[i]!=nums[j]!=nums[k])
                {
                    cout << nums[i] << " , " << nums[j] << " , " << nums[k] << endl;
                }
            }
        }

    }

    //for(i=0; i<n; i++)
        //cout << nums[i] << endl;

    return 0;
}
