// stream are used to read the outside  data 
#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ofstream ofs ("myfile",ios::trunc);
    ofs<<"ashutosh"<<endl;
    ofs.close();
    return 0;
}