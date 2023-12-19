#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    for(int i=0; i<arr.length; i++){
        cout<<arr.A[i]<<' ';
    }
    cout<<endl;
}

void Append(struct Array *arr, int x){
    if(arr->length < arr->size){
        arr->A[arr->length++] = x;
    }
}

int Insert(Array *arr, int index, int x){
    if(index<=arr->length && index>=0){
        for(int i=arr->length; i>index; i--){
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

void Delete(Array *arr, int index){
    if(index>=0 && index<=arr->length){
        for(int i=index; i<arr->length-1; i++){
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
}

void insert(Array* arr,int x){
    int i=arr->length-1;
    while(i>=0 && x<arr->A[i]){
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

struct Array* merge(Array* arr1,Array* arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 = new struct Array;
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i] < arr2->A[j]){
            arr3->A[k++]=arr1->A[i++];
        }
        else{
            arr3->A[k++]=arr2->A[j++];
        }
    }
    if(arr1->length > arr2->length){
        for(;i<arr1->length;i++){
            arr3->A[k++]=arr1->A[i];
        }
    }
    else{
        for(;j<arr2->length;j++){
            arr3->A[k++]=arr2->A[j];
        }
    }
    arr3->length = arr1->length + arr2->length;
    return arr3;
}

int main(){
    struct Array arr1 = {{2,4,7,9},10,4};
    // Append(&arr,7);
    // Insert(&arr,5,7);
    // Display(arr);
    // Delete(&arr,3);
    // Display(arr);

    // insert(&arr,3);
    // Display(arr);

    struct Array arr2 = {{1,3,5,6,8,10,12},10,7};
    struct Array *arr = merge(&arr1,&arr2);
    Display(*arr);
}