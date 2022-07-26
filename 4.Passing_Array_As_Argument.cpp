 #include<iostream>
 using namespace std;
 void fun(int arr[10],int);
 int main()
 {
    int number;
    cout<<"Enter the number of elements: ";
    cin>>number;
     int arr[number];
     cout<<"Enter the elements: "<<endl;
     for(int i=0;i<number;i++)
     {
        cin>>arr[i];
     }
     fun(arr,number);
     return 0;
 }
 void fun(int a[],int n)
 {
    cout<<"The elements are as follows: "<<endl;
    for(int i=0;i<n;i++)
     {
        cout<<a[i]<<endl;
     }
 }

