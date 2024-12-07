#include<iostream>
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
            void print(){
                for(int i =1,i<=size,i++){
                    cout<<arr[i]<<endl;
                }
                cout<<endl;
            }
        }
}
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
    return 0;
    

}