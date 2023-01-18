#include <stdio.h>
/*
 * 1.Description
            输入一个整型数，存入变量i，通过子函数change把主函数的变量i除2，
            然后打印i，例如如果输入的为10，打印出5，如果输入的为7，打印出3
    Input
        一个整型数
    Output
        对应整型数除2后的商
 * */
//void change(char *p){
//    *p/=2;
//}
//int main() {
//    int i;
//    scanf("%d",&i);
//    change(&i);
//    printf("%d\n",i);
//    return 0;
//}

/*
 * 2.Description
    输入一个整型数，然后申请对应大小空间内存，
    然后读取一个字符串，字符串的输入长度小于最初输入的整型数大小，最后输出输入的字符串即可（无需考虑输入的字符串过长，超过了内存大小）；
        注意下面问题：
        char *p;
        scanf("%d",&n);
        p=malloc(n);
        scanf("%c",&c);//注意在scanf和gets中间使用scanf("%c",&c),去除换行
        gets(p);
        注意：OJ不支持fflush(stdin)清空标准输入缓冲区操作
    Input
        一个整型数和一个字符串，例如
        10
        hello
    Output
        输出输入的字符串，上面输入的是hello，那么输出hello
 * */
#include <stdlib.h>
int main(){
    int size;//代表申请空间的大小
    char *p;
    char c[100];
    scanf("%d",&size);//读取
    p=(char*)malloc(size);//申请size个字节大小的空间，强制类型转换为char*
    scanf("%c",&c); //清除标准输入缓冲区中的\n
    gets(c);//可以使用fgets(p,n,stdin);gets被去掉是因为不安全，会访问越界
    puts(c);
    return 0;
}
