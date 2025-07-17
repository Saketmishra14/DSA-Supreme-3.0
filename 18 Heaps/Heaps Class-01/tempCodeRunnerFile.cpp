#include<iostream>
using namespace std;
class Heap{
    public:
    int *arr;
    int n;
    int index;

    Heap(int capacity){
        this->n=capacity;
       arr=new int[capacity];
       index=0;
        // jab bhi insert krna hoga, tab index+1 krke insert krdena
    }
 // STEP 1: insert the element normally into the first empty position inside the array
        // STEP 2: then compare the element with the parent and put the element at the right place

    void Insertval(int val){
        if(index==n-1){
            cout<<"Heap overflow"<<endl;
            return ;
        }
         // space is available
        // STEP 1: 
        index++;
        arr[index]=val;
    // now put value at right position-> by comparing with parent node
    int i=index;
            // STEP 2: HEAPIFY

    while(i>1){
        //index ki jgh i pe kaam krenge ab

        int parentnode=i/2;
        if(arr[i]>arr[parentnode]){
            swap(arr[i],arr[parentnode]);
            i=parentnode;
        }
        else{
            break;
             //parent ki value already badi hai, no need to do anything
        }
    }
    }
    void Print(){
        for(int i=1;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
        // TC : O(logn)

        //deletion process
        int deletefromheap(){
            int ans=arr[1];
            //replacement
            arr[1]=arr[n];
            //delete rightmost element;
            n--;

            int index=0;
            while(index<n){
                int leftindex=2*index;
                int rightindex=2*index+1;

                //find out krna hai sbse bda kon hai
                int largestindex=index;
                //check left child
                if(leftindex<=n && arr[largestindex]<arr[leftindex]){
                    largestindex=leftindex;
                }
                if(rightindex<=n && arr[largestindex]<arr[rightindex]){
                    largestindex=rightindex;
                }
               if(largestindex==index) break;
                else{
                    swap(arr[index],arr[largestindex]);
                    index=largestindex;
                }

            }
            return ans;
        }

};
int main(){
    Heap h(7);
   h.Insertval(20);
   h.Insertval(30);
   h.Insertval(40);
   h.Insertval(50);
   h.Insertval(60);
   h.Insertval(10);
   h.Print();
   int ans=h.deletefromheap();
   cout<<"delete value is -:"<<ans<<endl;
   h.Print();
    return 0;
}