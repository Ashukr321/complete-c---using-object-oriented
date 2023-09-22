#include<iostream>
using namespace std;

//create the outer function 
void func(int arr[],int n){
    //create the class 
    #include<algorithm>

    class InnerClass {
        public:
        int arrSum(int ar[],int n){
            int sum = 0;
            for(int i = 0; i<n; i++){
                sum+=ar[i];
            }
            return sum;
        }

        static int max(int ar[],int n){
            int mx = INT_MIN;
            for(int i = 0 ; i<n; i++){
                if (ar[i]>mx)
                {
                    mx = ar[i];
                }

            }
            return mx;
        }
        // static void srt(int arr[]){
        //     return sort(arr);
        // }

        static void printData(int arr[],int n){
            for(int i = 0 ; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    };
    // create the object of the clss
    InnerClass obj;
    //calling the function 
   int data =  obj.arrSum(arr,n);
    cout<<obj.max(arr,n)<<endl;
    cout<<data<<endl;

    // obj.srt(arr);
    obj.printData(arr,n);

};

// main methods start here 
int main(){
    //create the array 
    int arr[]= {3,3,4,52,5,5,3,5,2,4,100};
    //calling the function func and pass arr 
    int n = sizeof(arr)/sizeof(int);
    func(arr,n);
    return 0; 
}