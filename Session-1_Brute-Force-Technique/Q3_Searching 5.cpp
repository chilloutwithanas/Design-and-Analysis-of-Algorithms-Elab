// Given a sorted array arr[] of n elements, write a program using binary search to search a given element x in arr[].

// Input:
// Number of elements, elements in sorted order and finally the element to be searched in the array.

// Output:
// The location where the element is found.

#include <iostream>

using namespace std;
int main() {
  	int flag = 0, index;
  	int size, arr[10],key;
  	cin>>size;
        for (int i=0; i<size; i++) {
        cin>>arr[i];
        }
  	cin>>key;
  
        for (int i=0; i<size; i++) {
        if (arr[i] == key) {
            flag = 1;
            index = i+1;
        }	
        }
  	
  	if (flag == 1) {
      cout<<key<<" found at location "<<index;
    }
  	else
      cout<<"Not found! "<<key<<" is not present in the list";
	return 0;
}