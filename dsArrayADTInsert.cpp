#include<iostream>
// #include<array>


using namespace std;

class Array{
    public:
    int A[20];
    int length;
    int size;
};




void display2(Array arr){
    cout << "elements are: " << endl;
    for(int i=0;i<arr.length;i++){
        cout << arr.A[i] <<" ";
    }
}

void append(Array *arr, int x){
    if(arr->length< arr->size){
        arr->A[arr->length++] = x;
    }
}  // call by address , bcoz we don't want to copy we want these changes to be performed on  an acutual array


void Insert(Array *arr, int index, int x){
    if(index>=0&& index<= arr->length){
        for(int i=arr->length;i>index;i--){
            arr->A[i] = arr->A[i-1];
        }

        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(Array *arr, int index){
    int x = 0;
    if(index>=0 && index< arr->length){
        x = arr->A[index];
        for(int i=0;i<arr->length-1;i++){
            arr->A[i] = arr->A[i+1];
        }

        arr->length--;
        return x;
    }

    return 0;
}

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int LinearSearch(Array *arr, int key){
    for(int i=0;i<arr->length;i++){
        if(key==arr->A[i]){
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
        return -1;
    }

}

int BinarySearch(Array arr, int key){
    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    while(l<=h){
        mid = (l+h)/2;
        if(key == arr.A[mid]){
            return mid;
        }else if(key<arr.A[mid]){
            h = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    return -1;
}

int RBinarysearch(int a[], int l, int h, int key){
    int mid;
    if(l<h){
        mid = (l+h)/2;
        if(key == a[mid]){
            return mid;
        }else if(key < a[mid]){
            return RBinarysearch(a, l, mid-1, key);
        }else{
            return RBinarysearch(a, mid+1, h, key);
        }
    }

    return -1;
}

int Get(Array arr, int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }

    return -1;

}


void Set(Array *arr, int index, int x){
    if(index>=0 && index<arr->length){
        arr->A[index] = x;
    }

}

int Max(Array arr){
    int max = arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
        return max;
    }
}

int Min(Array arr){
    int min = arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]<min){
            min = arr.A[i];
        }
        return min;
    }
}

int sum(Array arr){
    int s = 0;
    for(int i=0;i<arr.length;i++){
        s += arr.A[i];
    }

    return s;
}

float Avg(Array arr){
    return (float)sum(arr)/arr.length;
}


void Reverse(Array *arr){
    int *B;
    int i,j;

    B = new int[arr->length];
    for(int i = arr->length,j=0; i>=0;i--,j++){
        B[j] = arr->A[i];
    }
    for(int i=0;i>arr->length;i++){
        arr->A[i] = B[i];
    }

    delete []B;
}

void Reverse2(Array *arr){
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        swap(&arr->A[i], &arr->A[j]);
    }
}

void InsertSort(Array *arr, int x){
    if(arr->length == arr->size){
        return;
    }

    int i = arr->length-1;
    while(i>=0&& arr-> A[i]>x){
        arr->A[i+1] = arr->A[i];
        i--;
    }

    arr->A[i+1] = x;
    arr->length++;

}
 
bool isSorted(Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i=1]){
            return false;
        }
    }

    return true;
}

void Rearrange(Array *arr){
    int i,j;
    i=0;
    j=arr->length-1;

    while(i<j){
        while(arr->A[i]<0)i++;
        while(arr->A[i]>=0)j--;

        if(i<j)swap(&arr->A[i], &arr->A[j]); 
    }
}

Array* Merge(Array *arr1, Array *arr2){
    int i=0, j=0, k=0;
    Array *arr3 = new Array();

    while(i<arr1->length, arr2->length){
        if(arr1->A[i]<arr2->length){
            arr3->A[k++] = arr1->A[i++];
        }else{
            arr3->A[k++] = arr2->A[j++];
        }
    }

    for(;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }

    for(;j<arr2->length;j++){
        arr3->A[k++] = arr2->A[j];
    }

    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;

}

Array* Union(Array *arr1, Array *arr2){
    int i=0, j=0, k=0;
    Array *arr3 = new Array();

    while(i<arr1->length, arr2->length){
        if(arr1->A[i]<arr2->length){
            arr3->A[k++] = arr1->A[i++];
        }else if(arr2->A[j] < arr1->A[i]){
            arr3->A[k++] = arr2->A[j++];
        }else{
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    for(;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }

    for(;j<arr2->length;j++){
        arr3->A[k++] = arr2->A[j];
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;

}

Array* Intersection(Array *arr1, Array *arr2){
    int i=0, j=0, k=0;
    Array *arr3 = new Array();

    while(i<arr1->length, arr2->length){
        if(arr1->A[i]<arr2->length){
           i++;
        }else if(arr2->A[j] < arr1->A[i]){
           j++;
        }else{
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    
    arr3->length = k;
    arr3->size = 10;

    return arr3;

}

Array* Difference(Array *arr1, Array *arr2){
    int i=0, j=0, k=0;
    Array *arr3 = new Array();

    while(i<arr1->length, arr2->length){
        if(arr1->A[i]<arr2->length){
            arr3->A[k++] = arr1->A[i++];
        }else if(arr2->A[j] < arr1->A[i]){
           j++;
        }else{
            i++;
            j++;
        }
    }

    for(;i<arr1->length;i++){
        arr3->A[k++] = arr1->A[i];
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;

}

int main(){
   
    Array arr = {{1,2,3,4,5},5,20};
    Array arr1 = {{2,6,10,15,25}, 10, 5};
    Array arr2 = {{3,4,7,18,20}, 10, 5};
    Array *arr3;

    arr3 = Merge(&arr1, &arr2);
    

    append(&arr,10);
    display2(arr);
    Insert(&arr, 2, 48);

    display2(arr);

    cout << "===================================" << endl;
    cout << Delete(&arr,2);
    display2(arr);
    cout << LinearSearch(&arr, 2) << endl;
    cout << RBinarysearch(arr.A, 0, arr.length, 9) << endl;
    
    return 0;
}