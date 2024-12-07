#include<iostream>
using namespace std;

int getMax(int num[], int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max)
          max=num[i];
         
    }
     return max;
}
int getMin(int num[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min)
          min=num[i];
    }
    return min;
}
int getSum(int num[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=num[i];
    }
    return sum;  
}
int main(){
    int size;
    cin>> size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"maximum value of arra"<<getMax(num,size)<<endl;
    cout<<"minimum value of arra"<<getMin(num,size)<<endl;
    cout<<"sum of arra"<<getSum(num,size)<<endl;


}   

