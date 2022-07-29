#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j, cond=0;

    cout << "how many digits = ";
    cin >> n;

    int nums[n];

    for(i=0; i<n; i++)
    {
        cout << "enter digit " << i+1 << " = " ;
        cin >> nums[i];
        cout << "" << endl;
    }


    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(nums[i] == nums[j])
                {
                    cout << "true" <<endl;
                    cond++;
                    break;
                }
        }
    }
    if(cond==0)
        cout << "false" <<endl;



    //for(i=0; i<n; i++)
        //cout << nums[i] << endl;

    return 0;
}

