#include <math.h>
//2.1基本数据类型及定义

//2.1.1变量的定义   ：变量类型 变量名 = 初值
//2.1.2变量类型（1Byte = 8Bit）
//整型：int（4Byte） 绝对值10e9以内的数  ‘%d’是int形的输出形式
//     long long（8Byte）在赋值大于2e31-1时要在初值后面加个LL
int a = 1;
//浮点型：float、double（常用） %f是两者的输出形式
//字符型：char  字符常量必须用单引号标注
//       小写字母的ASCII比大写的大32   A：65
//       '\n'：换行符
char b = 'a';
//字符串用“”围住，可以赋值给字符数组 ’%s‘输出
char stringA[25] = "Hello World!";
//布尔型：bool（C++专属、或者#inlcude<stdbool.h>）
//        false：0 、true ：1

//2.1.3强制类型转换
//  格式 ： (新类型名) 变量名
//2.1.4符号常量和const常量
//  常量一旦确定值之后便无法改变
//  #define 标识符 常量 ****末尾不加分号****           P.S. define其实可以定义任意的语句或者片段 #define ADD(a,b) ((a)+(b))
#define pi 3.14
//另一种定义常量的方法： const 数据类型 变量名 = 常量;
const double Gen2 = 1.41;

//2.1.5运算符
// '/':除法运算符 留下的是商 '%':取模运算符 留下的是余数
//自增运算符"++"： i++:先使用i再将i+1  ++i:先将i+1再使用i   自减运算符同理
//条件运算符（ A ？ B : C ）如果A为真执行B A为假则执行C
//e.g.
const int q1 =1 ,q2 = 2;
int c = q1 > q2 ? 1 : 2 ;


//2.2顺序结构
//2.2.1赋值表达式
//    等号的右边可以是一个表达式
int var = 2*3+1;
//    n = n+2 等价于 n+=2  n /= m+1 等价于 n = n/(m+1)

//2.2.2使用scanf和printf输出
//添加头文件 stdio.h
//scanf("格式控制","变量地址")



//2.2.5typedef
//可以给复杂的数据类型起一个别名，这样就可以在使用中用别名来替代原来的写法
typedef long long LL;   //给longlong起个别名 LL
LL var2  = 1212128896868768;

//2.2.6常用Math函数
//fabs(double x)用于对double变量取绝对值
//double var3 = fabs(121.67);
//floor(double x) ceil(double x) 向上或者向下取整
//pow(double r,double p) 返回r^p
//sqrt(double x) 返回算术平方根
//log(double x)  返回以e为底的数         PS换底公式 logaB = logeB/logeA;
//sin/cos/tan/asin/atan/acos(double x)   弧度制
//round(double x) 将x四舍五入返回类型也是x


//2.3选择结构
//2.3.3 switch语句
//switch(表达式){
//    case 常量表达式 1:
//        .....
//        break;
//    case 常量表达式 2:
//        .....
//        break;
//    default:
//}

//2.4循环结构
//while(条件A){}
//do .....while(条件A){}   会先执行一遍do当中的内容再来判断条件A是否为真
//for语句
//      常见格式:for(表达式A; 表达式B; 表达式C)
//      1.在for循环之前先执行A 2.判断表达式B是否成立 3.执行完毕后执行表达式C再回到2
//      常见的特例for(循环变量赋给初值; 循环条件; 循环变量改变)
//      **PS： C语言中在表达式A里不得定义变量 int i= 1是不可行的，但在C++里可行

//2.4.4 break和continue语句
//break : 退出当前循环    continue:结束循环的当前轮回，然后进入下一个轮回

//2.5数组
//一维数组的定义格式如下: 数据类型 数组名[数组大小]   PS 数组大小必须是整数常量，不可以是变量
//如果数组一开始没有赋值，数组中的每个元素都可能是一个随机数，并不一定默认为0





