//
// Created by shun on 2023/6/13.
//

#include "../head/revert_string.h"

//return reverted data, array invert
void revert(char* data,int len,char* r_data){
    char* cp_data = r_data;
    memcpy(cp_data,data,len+1);

    char* p1 =&cp_data[len-1];
    char* p = cp_data;
    while (p<p1)
    {
        char temp = *p;
        *p = *p1;
        *p1 = temp;
        p++;
        p1--;
    }

}

long bstoi(const char *ps, int size) {
    /**
     * 二进制转数值
     */
    long n = 0;
    for (int i = 0; i < size; ++i) {
        n = n * 2 + (ps[i] - '0');
    }
    return n;
}

char *itobs(long n, char *ps) {
    /**
     * 数值转二进制
     */
    for (int j = LONG_BIT_COUNT - 1; j >= 0; --j, n >>= 1) {
        ps[j] = (1 & n) + '0';
    }
    ps[LONG_BIT_COUNT] = '\0';
    return ps;
}

char* Int2String(int num,char *str)//10进制
{
    int i = 0;//指示填充str
    if(num<0)//如果num为负数，将num变正
    {
        num = -num;
        str[i++] = '-';
    }
    //转换
    do
    {
        str[i++] = num%10+48;//取num最低位 字符0~9的ASCII码是48~57；简单来说数字0+48=48，ASCII码对应字符'0'
        num /= 10;//去掉最低位
    }while(num);//num不为0继续循环

    str[i] = '\0';

    //确定开始调整的位置
    int j = 0;
    if(str[0]=='-')//如果有负号，负号不用调整
    {
        j = 1;//从第二位开始调整
        ++i;//由于有负号，所以交换的对称轴也要后移1位
    }
    //对称交换
    for(;j<i/2;j++)
    {
        //对称交换两端的值 其实就是省下中间变量交换a+b的值：a=a+b;b=a-b;a=a-b;
        str[j] = str[j] + str[i-1-j];
        str[i-1-j] = str[j] - str[i-1-j];
        str[j] = str[j] - str[i-1-j];
    }

    return str;//返回转换后的值
}

int main()
{
    int number1 = 123456;
    int number2 = -123456;
    char string[16] = {0};
    Int2String(number1,string);
    printf("数字：%d 转换后的字符串为：%s\n",number1,string);
    Int2String(number2,string);
    printf("数字：%d 转换后的字符串为：%s\n",number2,string);
    return 0;
}