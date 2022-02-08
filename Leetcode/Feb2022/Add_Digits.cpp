int addDigits(int num) {
    while(num>=10){// number of digits > 1
       int sum=0;
        while(num){
            sum+=num%10;
            num/=10;
        }
        num=sum; //update num with sum of digits
    }
    return num;
}
