#include <iostream>
using namespace std;
int t;
int main()
{
    cin>>t;
    while(t>0)
    {
        int nofcells;
        cin>>nofcells;
        int arr[nofcells];
        for(int i=0; i<nofcells;i++)
        {
            int num;
            cin>>num;
            arr[i]=num;
        }
        while(nofcells>=1)
        {
            cout<<arr[nofcells-1]<<" ";
            nofcells--;
        }
        cout<<endl;
        t--;
    }
    return 0;
}
