int reverse(int x){
    long int reversed=0;
    long int temp = x;
    if(x<0){
        temp = temp*(-1);
    }
    while(temp>0){
        long int digits = temp%10;
        reversed = reversed*10 + digits;
        temp /=10;
    }
    if (reversed > 2147483648){
        return 0;
    } 
    else if(x<0){
        return -1*reversed;
    }
    else{
        return reversed;
    }
}