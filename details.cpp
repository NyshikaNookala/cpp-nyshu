#include<iostream>
 using namespace std;
 int main()
 {
     int year;
     int backlog;
     string branch;
     float per;
     cin>>year>>backlog>>branch>>per;
     if(year==3 and backlog==0 and (branch=="cse" or branch=="it")and per>=70)
     {
     cout<<"details available"<<endl;
     }
     else
     {
         cout<<"not there"<<endl;
     }
 }
//
3 0 cse 80
  details available
  
