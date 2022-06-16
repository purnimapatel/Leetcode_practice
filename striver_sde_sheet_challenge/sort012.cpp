void sort012(int *arr, int n)
{
    int srt = 0;
    int end = n-1;
    int ptr = 0;
    while(ptr<=end && ptr<n){
        if(arr[ptr]==2){
            swap(arr[ptr],arr[end]);
            end--;
        }
        else if(arr[ptr]==0){
            swap(arr[ptr], arr[srt]);
            srt++;
            if(srt>=ptr){
                ptr = srt+1;
            }
            
        }
        else{
            ptr++;
        }
    }
}