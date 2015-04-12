#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
   vector<int> cow_weight;
   int n;
   ifstream input_file("file.in",ios::in);
   if(!input_file)
    {
        cerr<<endl<<"Failed to open the file.in"<<endl;
        exit(1);
    }
   input_file>>n;
   int tmp,i;
   for(i=0;i<n;i++)
   {
       input_file>>tmp;
       cow_weight.push_back(tmp);
   }
   sort(cow_weight.begin(),cow_weight.end());
   int top_five[5];
   for(i=1;i<=5;i++)
        top_five[i-1]=cow_weight.at(cow_weight.size()-i);
    int sum=0;
    for(i=0;i<5;i++)
        sum+=top_five[i];
    cout<<endl<<sum<<endl<<endl;
   return 0;
}

