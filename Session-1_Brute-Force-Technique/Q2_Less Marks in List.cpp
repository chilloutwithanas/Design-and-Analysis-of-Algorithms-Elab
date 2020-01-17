// The PDD teacher wants to know number of students got fail mark in CT I 
//if she has a unordered list of marks for 10 students
#include <iostream>
#include <bits/stdc++.h>
#include <utility>

using namespace std;
int main() {
  	int arr[10];
  	int count = 0;
  	char str[10];
  
  	for (int i=0; i<10; i++) {
      cin>>str;
      cin>>arr[i];
      
      if (arr[i]<50) {
      	count+=1;
      }
    }
  
  cout<<"Number of the student got fail marks "<<count;
	return 0;
}