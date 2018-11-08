#include <iostream>
using namespace std;
void mario (int);
int main() {
  int height;
  cout<<"請輸入三角形的高:";
  cin>>height;
  mario (height);
}

 void mario (int height)
{
  int i,j,k,e;
  if(0<height&&height<9){
    for(i=0;i<height+1;i++)
    {
      for(k=height;k>i;k--)
      {cout<<" ";}
      for(j=0;j<i;j++)
      {cout<<"#";}
      cout<<"\t";
      for(e=0;e<i;e++)
      {cout<<"#";}
      cout<<"\n";
    }
  }
  else{cout<<"數值超出範圍";}
}
