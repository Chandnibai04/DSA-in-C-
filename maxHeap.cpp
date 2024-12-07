#include<iostream>
#include<queue>
using namespace std;
class heap{
    public:
        int arr[100];
        int size;
        heap(){
            arr[0]=-1;
            size=0;

        }
        void insert(int val){
            size=size+1;
            int index=size;
            arr[index]= val;
            while(index > 1){
                int parent = index/2;
                if(arr[parent]<arr[index]){
                    swap(arr[parent],arr[index]);
                    index=parent;
                }
                else{
                    return ;
                }
            }
            
        }
        void deletefromHeap(){
            if(size==0){
                cout<<"nothing to dlt"<<endl;
                return;
            }
            arr[1]=arr[size];
            size--;

            int i=1;
            while(i<size){
                int leftIndex= 2*i;
                int rightIndex=2*i+1;
                if (leftIndex < size && arr[i]<arr[leftIndex]){
                    swap(arr[i],arr[leftIndex]);
                    i=leftIndex;
                }
                else if(rightIndex < size && arr[i]<arr[rightIndex]){
                    swap(arr[i],arr[rightIndex]);
                    i=rightIndex;
                }
                else{
                    return;
                }
            }

        }
        void print(){
                for(int i =1;i<=size;i++){
                    cout<<arr[i]<<endl;
                }
                cout<<endl;
        }
        void heapify(int arr[],int n, int i){
            int largest =i;
            int left=2*i;
            int right= 2*i+1;
            if(left<n && arr[largest]<arr[left]){
                largest=left;
            }
            if(right<n && arr[largest]<arr[right]){
                largest=right;
            }
            if(largest!=i){
                swap(arr[largest],arr[i]);
                heapify(arr,n, largest);
            }
        }
};
int main(){
    heap h;
    h.insert(14);
    h.insert(24);
    h.insert(12);
    h.insert(11);
    h.insert(25);
    h.insert(8);
    h.insert(35);

    h.print();

    h.deletefromHeap();
    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i =n/2; i>0 ;i--) {
        h.heapify(arr,n,i);
    }
    cout<<"printing the arry now"<<endl;
    for(int i =1;i<=n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    cout<<" using priority queue here"<<endl;
    priority_queue<int> pq;
    pq.push(4);
    pq.push(5);
    pq.push(2);
    pq.push(1);
    pq.push(6);
     cout<<"element at top "<<pq.top()<<endl;
     cout<<"element at size "<<pq.size()<<endl;


     pq.pop();
    cout<<"element at top "<<pq.top()<<endl;
    cout<<"element at size "<<pq.size()<<endl;

    cout<<" min heap start"<<endl;
    priority_queue<int,vector<int>,greater<int> >minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(6);
    minheap.push(1);

    cout<<"element at top "<<minheap.top()<<endl;
     cout<<"element at size "<<minheap.size()<<endl;


     minheap.pop();
    cout<<"element at top "<<minheap.top()<<endl;
    cout<<"element at size "<<minheap.size()<<endl;


    return 0;
    

}