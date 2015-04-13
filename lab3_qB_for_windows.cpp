#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <climits>
#include "Clock.h"

using namespace std;

void insertion_sort(vector<int> & v)
{
    int insert;
    int moveItem;
    for(int next=1;next<v.size();++next)
    {
        insert = v.at(next);
        moveItem = next;
        while((moveItem>0) &&(v.at(moveItem-1) > insert))
        {
            v.at(moveItem) = v.at(moveItem-1);
            --moveItem;
        }
    v.at(moveItem) = insert;
    }
}

int main()
{
    Clock clk;
    int size = 100;
    vector<int> v1,v2;
    srand(time(NULL));
    int i,k;
    for(k=0;k<4;k++)
    {
        size*=10;
        v1.clear();         v2.clear();
        v1.resize(size);    v2.resize(size);
        cout<<k+1<<"."<<endl;
        cout<<"size="<<size<<endl;
        for(i=0; i<size; ++i)
            v1.at(i) = (rand()/(RAND_MAX+1.0))*INT_MAX;
        v2 = v1;
        clk.start();
        sort(v1.begin(), v1.end());
        cout << "sort(): " << clk.getElapsedTime() << " seconds\n";
        cout << "v1/v2 are "<<((v1==v2)?"the same.\n":"different.\n");
        clk.start();
        insertion_sort(v2);
        cout << "insertion_sort(): " <<clk.getElapsedTime() << " seconds\n";
        cout << "v1/v2 are "<<((v1==v2)?"the same.\n":"different.\n")<<endl;
    }
    return 0;
}

