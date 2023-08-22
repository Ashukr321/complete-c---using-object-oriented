namespace myData{

class MyFristClass
{
    public:
    int a;
    void show(){

    };

    static int factorial(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }
    
    static bool isStrong(int x)
    {
        int factSum = 0;

        
        int temp = x;
        while (temp!=0)
        {
            factSum += factorial(temp % 10);
            temp /= 10;
        }

        return (factSum == x);
    }
    
   static int countDigit(int n ){
        int cnt = 0; 
        while (n!=0)
        {

            n= n/10;
            ++cnt;

        }
        return cnt;
        
    }

};
}
