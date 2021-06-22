#include<iostream>

using namespace std;
int main(){
    int x{};
    int y{};
    cout <<"Enter first point of coordinate of rectancle" <<endl;
    cin>>x;
    cout <<"Enter second point of coordinate of rectancle" <<endl;
    cin>>y;
    if(x<=5 && y<=2.5){
      cout<< "point"<<x <<","<<y << "is in the rectangle"<<endl;
    }
    else
{
    cout << "it is not point of rectangle" << endl;
}
return 0;
}