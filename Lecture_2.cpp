// # include <iostream>
// using namespace std;
// int main(){
//     int a=4;
//     cout<<a;
//     cout<<endl;
//     int y=7;
//     cout<<y;
// }
// #include<iostream>
// using namespace std;
// void duplicate(int arr[],int n){
//     for(int i=0;i<n;i++){

//     }
// }
// int main() {
//     int arr[]={2,3,4,5,6,2,5};

// }
// To find duplicate entries
// #include <iostream>

// using namespace std;

// void Duplicate(int arr[], int n)
// {
// for (int i = 0; i < n; i++)
// {
// for (int j = i + 1; j < n; j++)
// {
// if (arr[i] == arr[j])
// {
// cout << arr[i] << endl;
// break;
// }
// }
// }
// }

// int main()
// {
// int arr[] = {2, 7, 6, 5, 7, 9, 2, 11, 5};
// int n = sizeof(arr) / sizeof(arr[0]);
// cout<<"Duplicate entries are: "<<endl;
// Duplicate(arr, n);

// return 0;
// }

// Reverse an array using swapping
// void reverese(int arr[], int i, int j)
// {
// while (i < j)
// {
// int temp = arr[start];
// arr[start] = arr[end];
// arr[end] = temp;
// i++;
// j--;
// }
// }
// int main()
// {
// int arr[] = {1, 2, 3, 4, 5, 6};

// int n = sizeof(arr) / sizeof(arr[0]);
// for (int i = 0; i < size; i++){
// cout << arr[i] << " ";
// }
// reverese(arr, 0, n-1);

// cout << "Reversed array is" << endl;
// for (int i = 0; i < size; i++){
// cout << arr[i] << " ";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// void rev(int* arr,int size){
// int i=0;
// int j=size-1;
// while(i<=j){
// swap(arr[i],arr[j]);
// i++;
// j--;
// }
// for(int i=0;i<size;i++){
// cout<<arr[i];
// }


// }

// int main(){
// int arr[]={1,2,3,4,5,6};
// int size=sizeof(arr)/sizeof(int);
// rev(arr,size);
// }

// #include <iostream>

// using namespace std;

// void reverse(int arr[], int n){
// int i=0;
// int j=n-1;
// while(i<=j){
// int temp = arr[i];
// arr[i] = arr[j];
// arr[j] = temp;
// i++,j--;
// }
// for(int x=0;x<n;x++){
// cout<<arr[x]<<" ";
// }
// }

// int main()
// {
// int n;
// cout<<"enter the size of array: ";
// cin>>n;
// int arr[n];
// cout<<"enter the values: ";
// for(int x=0;x<n;x++){
// cin>>arr[x];
// }
// reverse(arr, n);

// return 0;
// }
// Change the array 
// #include <bits/stdc++.h>

// int main()
// {
// int arr[] = { 0,1,1,0,1,0 };
// int n = sizeof(arr) / sizeof(arr[0]);
// int j = 0;
// for (int i = 0; i < n; i++) {
// if (arr[i] != 0) {
// swap(arr[j], arr[i]);
// j++;
// }
// }
// for (int i = n-1; i>=0; i--) {
// cout << arr[i] << " ";
// }

// return 0;
// }
#include<iostream>
using namespace std;

void sort(int arr[], int size){
int i = 0;
int j = size-1;
while(i<size)
{
if (arr[i]==0)
{
i++;
}
else if(arr[j]==1){
j--;
}
else{
swap(arr[i],arr[j]);
}
}
for (int i = 0; i < size; i++)
{
cout<<arr[i]<<" ";
}
}

int main(){
int arr[]= {0,1,1,0,1,0};
int size = sizeof(arr)/sizeof(int);

sort(arr, size);
}
