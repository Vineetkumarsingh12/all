class linear{
    public static void main(String[] args){
        int []arr={23,4,3,6,8,2,6,7,3};
        int target=7;
    
        for(int i=0;i<arr.length;i++){
            if(arr[i]==target){
                System.out.println("element found at index "+i);
                break;
            }
        }
     
    }
}