int sockMerchant(int n, int ar_count, int* arr) {
    int temp[100]={0};
    ar_count=0;
    for(int icnt=0;icnt<n;icnt++)
        temp[arr[icnt]-1]++;
    for(int icnt=0;icnt<100;icnt++)
    {
        if(temp[icnt]>0 && temp[icnt]%2==0 )
            ar_count+=(temp[icnt]/2);
        else 
            ar_count+=((temp[icnt]-1)/2);
    }
        
 return ar_count;   
}
//HackerRank Question Sale By Match
