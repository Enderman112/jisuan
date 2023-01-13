//
// Created by 徐耀石 on 2022/12/4.
// 各种功能区

#import "jisuan.h"
#import <iostream>
#import <cmath>
using namespace std;

void yyec(){
    float a,b,c,x1,x2,fenmu,gen,gennei;
    cout<<"请输入a,b,c"<<endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    gennei = pow(b,2)-4*a*c;
    gen= sqrt(gennei); /*求右侧*/
    fenmu=2*a;
    if (gennei > 0){
        x1 = -b + gen / fenmu;
        x2 = -b - gen / fenmu;
        cout << "有不同实数根" << endl;
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    }
    else if (gennei == 0){
        x1 = -b + gen / fenmu;
        cout << "有相同实数根" << endl;
        cout << "x1=x2=" << x1<<endl;
    }
    else {
        cout << "无实数根" << endl;
    }
    cout<<"计算完成，返回选择页面"<<endl;
}

void gen(){
    float x,gen,jieguo;
    cout<<"请输入x"<<endl;
    cout<<"x=";cin>>x;
    cout<<"请输入几次方根"<<endl;
    cout<<"几次根"<<endl;cin>>gen;
    jieguo = pow(x,1.0/gen);
    cout<<"结果="<<jieguo<<endl;
    cout<<"计算完成，返回选择页面"<<endl;
}

void cifang(){
    float a,x,y;
    cout<<"请输入底数"<<endl;
    cout<<"a=";cin>>a;
    cout<<"请输入指数"<<endl;
    cout<<"x=";cin>>x;
    y = pow(a,x);
    cout<<"结果="<<y<<endl;
    cout<<"计算完成，返回选择页面"<<endl;
}

//输出输入的数的范围内所有质数
void zhishu(){
    int a,b;
    cout<<"请输入范围"<<endl;
    cout<<"min=";cin>>a;
    cout<<"max=";cin>>b;
    for (int i = a; i <= b; i++){
        int j = 2;
        for (; j < i; j++){
            if (i % j == 0){
                break;
            }
        }
        if (j == i){
            cout<<i<<endl;
        }
    }
    cout<<"计算完成，返回选择页面"<<endl;
}

//判断一个数是奇数还是偶数
void panduanjiou(){
    int a;
    cout<<"请输入一个数"<<endl;
    cout<<"a=";cin>>a;
    if (a % 2 == 0){
        cout<<"偶数"<<endl;
    }
    else{
        cout<<"奇数"<<endl;
    }
    cout<<"计算完成，返回选择页面"<<endl;
}

void jioushuchu(){
    int a,b;
    cout<<"请输入范围"<<endl;
    cout<<"min=";cin>>a;
    cout<<"max=";cin>>b;
    auto i = a;
    cout << "偶数：";
    for (i=a; i<=b; i++){
        if (i % 2 == 0) {
            cout << i ;
            cout <<" ";
        }
    }
    cout << endl;
    cout << "奇数：";
    for (i=a; i<=b; i++){
        if (i % 2 != 0) {
            cout << i ;
            cout << " ";
        }
    }
    cout << endl;
    cout<<"计算完成，返回选择页面"<<endl;

}

