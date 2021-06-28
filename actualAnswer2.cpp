
#include <iostream>
using namespace std;

int maxSum(int*arr,int n){
    int sum = 0;
    int maxS = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
        maxS = max(maxS,sum);
        if(sum<0){
            sum = 0;
        }
    }
    return maxS;
}


int main() {
// 	cout<<"GfG!";
int arr[] = {1,2,-10,-2,5};
cout<< maxSum(arr,5);
	return 0;
}