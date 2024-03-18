// Array-To store the similar type of multiple data
//Garbage value
// #include<iostream>
// using namespace std;

// int main (){
//     int num[15];
//     cout<<"Value at the 0th index"<<num[5]<<endl;//garbage value
//     return 0;
// // }

//Garbage value
// #include<iostream>
// using namespace std;

// int main (){
//     int a[20];
//     cout<<a[8687]<<endl;
//     return 0;
// // }
//accessing an element in the array
// #include<iostream>
// using namespace std;

// int main (){
//     int second[3]={1,2,3};
//     cout<<second[2]<<endl;
//     return 0;
// }
//Printing all zeroes in the array 
// #include<iostream>
// using namespace std;

// int main (){
//     int a[10]={0};
//     int n=10;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// //not possible
// int main (){
//     int a[10]={1};
//     int n=10;
//     for(int i=0;i<n;i++)
//     cout<<a[i]<<endl;
//     return 0;
// }
//Array with functions
// #include<iostream>
// using namespace std;
// void printarray(int arr[],int size){
//     cout<<"Printing start"<<endl;
//     for(int i=0;i<size;i++)
//     cout<<arr[i]<<" ";
//     cout<<"Printing done"<<endl;
// }

// int main (){
//     int a[10]={1,2,3,4,5};
//     printarray(a,10);
//     int b[15]={24,22,24,224,51,4};
//     printarray(b,15);
//     return 0;
// }
//Size of an array
// #include<iostream>
// using namespace std;

// int main (){
//     int a[15]={1,2,3,3};
//     cout<<sizeof(a)/sizeof(int)<<endl;
//     return 0;
// }
// Array of char
// #include<iostream>
// using namespace std;

// int main (){
//     char ch[5]={'a','b','c','p'};
//     cout<<ch[3]<<endl;
//     return 0;
// // }
// #include<iostream>
// using namespace std;

// int main (){
//     char ch[5]={'a','b','c','d','e'};
//     for(int i=0;i<5;i++)
//     cout<<ch[i]<<endl;
//     return 0;
// }
//To print the maximum and the minimum value of the array
// #include<bits/stdc++.h>
// using namespace std;
// int getmax(int a[],int size){
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++)
//     maxi=max(a[i],maxi);
//     return maxi;
// }

// int getmin(int a[],int size){
//     int mini=INT_MAX;
//     for(int i=0;i<size;i++)
//     mini=min(a[i],mini);
//     return mini;
// }


// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     cin>>a[i];
//     cout<<getmax(a,n)<<" "<<getmin(a,n)<<endl;
//     return 0;
// }
//Updating the value of an array
// #include<iostream>
// using namespace std;
// int update(int a[],int size){
//     a[0]=120;
//     cout<<"Inside the update function"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Outside the update function"<<endl;
// }

// int main (){
//     int a[10]={1,2,3,4,5};
//     update(a,10);
//     cout<<"Inside the main function"<<endl;
//     for(int i=0;i<10;i++){
//       cout<<a[i]<<" ";//value is updated as we have sent the address of the array
//     }
//     cout<<endl;
//     cout<<"Main function ended"<<endl;
//     return 0;
// }
// Print the sum of all elements in the array
// #include<iostream>
// using namespace std;

// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     int sum=0;
//     for(int i=0;i<n;i++)
//     cin>>a[i];
//     for(int i=0;i<n;i++){
//       sum+=a[i];
//     }
//     cout<<sum<<endl;
//     return 0;
//}
//Linear search
// #include<iostream>
// using namespace std;
// bool search(int a[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(a[i]==key)
//         return 1;
//     }
//     return 0;
// }

// int main (){
//     int a[10]={2,3,4,5,6,563,3,36,2};
//     cout<<"Enter the boil you want to search for"<<endl;
//     int key;
//     cin>>key;
//     bool found=search(a,10,key);
//     if(found)
//     cout<<"Key is present "<<endl;
//     else
//     cout<<"Key is absent "<<endl;
//     return 0;
// }
//Reverse array
// #include<iostream>
// using namespace std;
// void reverse(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main (){
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     int b[10]={10,9,8,7,6,5,4,3,2,1};
//     reverse(a,10);
//     reverse(b,10);
//     print(a,10);
//     print(b,10);
//     return 0;
// }
