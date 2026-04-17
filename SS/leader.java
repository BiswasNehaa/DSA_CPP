class leader{
    public static void main(String[] args) {
        int arr[] = {17,18,7,5,9,3};
        int n = arr.length;
        
        System.out.println(arr[n-1]);
         
        int max= arr[n-1];
        for (int i=n-2; i>=0; i--){
            if (arr[i]>max){
                System.out.println(arr[i]);
                max=arr[i];
            }
        }
    }
}