#include<iostream>
using namespace std;
class Heap{
    public:
    int *arr;
    int capacity;
    int index;

    Heap(int val){
        this->arr=new int[val];
        this->capacity=val;
         for(int i = 0; i <= capacity; i++) {
         arr[i] = 0;
        }
        index=0;
        //jab bhi mujhe insert krna hoga tb mai index+1 krdunga

    }
    void print(){
        for(int i=0;i<=index;i++){
            
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    void insert(int val){
        if(index==capacity-1){
            cout<<"overflow heap."<<endl;
            return ;
        }

        //agar jagah available hai to 
        
        index++;
        //NOW PUT THE VAL AT RIGHT POSITION
        //by comparing with right node
        arr[index]=val;
        int i=index;
        while(i>1){
            int parentindex=i/2;
            
            if(arr[parentindex]<arr[i]){
                swap(arr[i],arr[parentindex]);
                i=parentindex;
            }
            else{
                //parent already bda hai no need to do anything
                break;
            }
        }
    }
    void deletefromheap(){

        //replacement
        swap(arr[1],arr[index]);
        //size decrease krna hai
        index--;
        //heapify
        heapify(arr,index,1);
    }
//heapify value present a curr index
    void heapify(int arr[],int n,int currindex){
        //her n-> is no. of element present in heap
        int i=currindex;
        int left=i*2;
        int right=i*2+1;

        int largestindex=i;
        //yha pai assume kr rhe hai jo i pai jo value hai wo sbse bdi hai
        //pr ho skta hai bdi value left ya right mai ho
        //check for left
        if(left<n && arr[left]>arr[largestindex]){
            //left mai bdi value mil gyi
            largestindex=left;
        }
        //check for right
        if(right<n && arr[right]>arr[largestindex]){
            //right mia value bdi hai
            largestindex=right;
        }
        //i hi sbse bda hai
        if(largestindex==i){
            return ;
        }
        else{
            //left ya right mai sai koi bda hai
            swap(arr[largestindex],arr[i]);
            i=largestindex;
            //baki recursion sambhal lega
            heapify(arr,n,i);
        }

    

    }
};
int main(){
    Heap h(10);
    h.insert(10);
    h.print();
     h.insert(20);
    h.print();
     h.insert(30);
    h.print();
     h.insert(40);
    h.print();
     h.insert(50);
    h.print();
    h.insert(60);
    h.print();
    h.deletefromheap();
    h.deletefromheap();
    h.deletefromheap();
    h.print();


    return 0;

}