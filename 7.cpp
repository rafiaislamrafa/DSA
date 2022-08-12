
//minimum in rotated sorted array

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

    int store;

    for(i=0; i<n; i++)
    {
        store = nums[n-1];
        if(store>nums[n-2])
        {
            for(j=n; j>0; j--)
            {
                nums[j] = nums[j-1];
                nums[j-1] = store;
            }
            //cout << "store" << store << endl;
        }
        else
            break;
    }
    for(i=0; i<1; i++)
    {
        store = nums[n-1];
            for(j=n; j>0; j--)
            {
                nums[j] = nums[j-1];
                nums[j-1] = store;
            }
    }

    cout << "minimum = " << store << endl;

    //for(i=0; i<n; i++)
        //cout << nums[i] << endl;

    return 0;
}
