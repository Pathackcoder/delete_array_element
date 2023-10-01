#include<iostream>
using namespace std;
main(){
    int a[10],i,j,n;

    cout<<"This program is designed to delete the data you enter, first you have to"
    "enter some random values and then it will delete those value which you wanna delete.";

    cout<<"enter number of values: ";
    cin>>n;
    cout<<"enter values of "<<n<<" numbers:\n";
    for(i=1;i<=n;i++){
        cin>>a[i];

    }
    for(i=1;i<=n;i++){
        cout<<i<< " place value is: "<<a[i]<<endl;

    }
    cout<<"\n";
    cout<<"enter place which you wanna delete: ";
    cin>>j;
    for(i=1;i<=n;i++){
        if(i<j){
            
        }
        else{
            if(i==j){
                a[i]=a[i+1];
            }
            else{
                a[i]=a[i+1];
            }
        }

    }

    for(i=1;i<=n-1;i++){
        cout<<i<<" value is: "<<a[i]<<endl;
    }


return 0;



}


