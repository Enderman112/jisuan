#import <iostream>
#import "jisuan.h"
#import <cmath>


/*本体在这里，选择用*/
int main(){
    int *choose = new int;
    std::cout<<"正在进入"<<std::endl;
    std::cout<<"欢迎使用"<<std::endl;
    //输出一个一到一百之间的整数作为今天幸运值
    std::cout<<"你今天的幸运值是"<<rand()%100+1<<std::endl;
    *choose = rand();
    while(*choose != 0){
        std::cout << "请选择需要的计算方式" << std::endl;
        std::cout << "1.一元二次方程 2.某数的几次方根 3.某数的几次方 4.范围内所有质数 5.判断一个数是奇数还是偶数 6.输出范围内奇偶数 0.退出" << std::endl;
        std::cin >> *choose;
        if (*choose == 1){
            yyec();
        }

        if (*choose == 2){
            gen();
        }

        if (*choose == 3){
            cifang();
        }

        if (*choose == 4){
            zhishu();
        }

        if (*choose == 5){
            panduanjiou();
        }

        if (*choose == 6){
            jioushuchu();
        }

    }
    delete choose;
    std::cout<<"正在退出"<<std::endl;
}

