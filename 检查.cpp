#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
struct point{
    double x;
    double y;
};
bool on(point p,point p1,point p2){
    if(p.x>=min(p1.x,p2.x)&&p.x<=max(p1.x,p2.x)&&p.y>=min(p1.y,p2.y)&&p.y<=max(p1.y,p2.y))return true;
    else return false;
}
void ans(point p1,point p2,point p3,point p4){
    double d1=(p1.x-p2.x)*(p1.y-p3.y)-(p1.y-p2.y)*(p1.x-p3.x);//p1p2 p3
    double d2=(p1.x-p2.x)*(p1.y-p4.y)-(p1.y-p2.y)*(p1.x-p4.x);//p1p2 p4
    double d3=(p3.x-p4.x)*(p3.y-p1.y)-(p3.y-p4.y)*(p3.x-p1.x);//p3p4 p1
    double d4=(p3.x-p4.x)*(p3.y-p2.y)-(p3.y-p4.y)*(p3.x-p2.x);//p3p4 p2
    if(d1*d2<0&&d3*d4<0){
        cout<<1<<endl;
        return;
    }
    else if(d1==0){
        if (on(p3,p1,p2)){
            cout<<1<<endl;
            return;
        }
    }
    else if(d2==0){
        if (on(p4,p1,p2)){
            cout<<1<<endl;
            return;
        }
    }
    else if(d3==0){
        if (on(p1,p3,p4)){
            cout<<1<<endl;
            return;
        }
    }
    else if(d4==0){
        if (on(p2,p3,p4)){
            cout<<1<<endl;
            return;
        }
    }
    cout<<0<<endl;
    return;
}
int main(){
    point p1,p2,p3,p4;
    int q;
    cin>>q;
    while(q--){
        cin>>p1.x>>p1.y;
        cin>>p2.x>>p2.y;
        cin>>p3.x>>p3.y;
        cin>>p4.x>>p4.y;
        ans(p1,p2,p3,p4);
    }
    return 0;
}
