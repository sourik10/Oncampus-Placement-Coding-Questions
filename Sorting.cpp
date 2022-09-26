//sorting algorithms

//bubble sort,time O(n^2),space O(1)
void bubbleSort(int ar[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(ar[j]>ar[j+1]){
                int tmp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=tmp;
            }
        }
    }
}

//selection sort,time O(n*n),space O(1)
void selectionSort(int ar[],int n){
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[mini]) mini=j;
        }
        swap(ar[mini],ar[i]);
       // int tmp=ar[mini];
        //ar[mini]=ar[i];
        //ar[i]=tmp;
    }
}

//insertion sort
