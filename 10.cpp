//container with most water

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, i, j, k, prod, take, prevprod = -99999;

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
        for(j=i+1; j<n; j++)
        {
            take = j-i;

            if(nums[i]>nums[j])
                prod = take * nums[j];
            else
                prod = take * nums[i];

            if(prod> prevprod)
                prevprod = prod;
        }
    }

    cout << "max area = " << prevprod << endl;

    //for(i=0; i<n; i++)
        //cout << nums[i] << endl;

    return 0;
}
