#include<iostream>
using namespace std;
int main(){
    int size;
    cot<<"enter size"<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter a value"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Array"<<endl;
      for(int i=0;i<size;i++){
        cout>>a[i];
    }
    cout<<"incertion"<<endl;
 int ele;
 cout<<"enter incertionelemwnt"<<endl;
 cin>>ele;
 int po;
 cout<<"enter position"<<endl;
 cin>>po;
for(int i=size;i>=po;i--){
    a[i]=a[i-1];
    a[i]=ele;
    size++;
}
cout<<"array"<<endl;
for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
return 0;
}