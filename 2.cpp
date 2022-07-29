
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j, smol= 99999, big=00000, posi, posj, output;

    cout << "how many digits = ";
    cin >> n;
    cout << "" <<endl;

    int nums[n];

    for(i=0; i<n; i++)
    {
        cout << "enter digit " << i+1 << " = " ;
        cin >> nums[i];
    }

    for(i=0; i<n; i++)
    {
        if(nums[i]<smol)
            {
                smol = nums[i];
                posi = i;
            }

    }
    //cout << posx;

    for(j=posi; j<n; j++)
    {
        if(nums[j]>big)
        {
            big = nums[j];
            posj = j;

        }
    }
    //cout << posy;

    output = nums[posj] - nums[posi];

    cout << output << endl;

    //for(i=0; i<n; i++)
        //cout << nums[i] << endl;

    return 0;
}
