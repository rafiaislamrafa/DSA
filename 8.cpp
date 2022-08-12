
//search in rotated sorted array

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j, target, store, countit=0;

    cout << "how many digits = ";
    cin >> n;
    cout << "" <<endl;

    int nums[n];

    for(i=0; i<n; i++)
    {
        cout << "enter digit " << i+1 << " = " ;
        cin >> nums[i];
    }

    cout << "target = ";
    cin >> target;

    for(i=0; i<n; i++)
    {
        countit++;
        store = nums[n-1];
        if(store != target)
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

    cout << "position = " << n-countit << endl;

    //for(i=0; i<n; i++)
        //cout << nums[i] << endl;

    return 0;
}
