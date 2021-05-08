///**<  *//** \brief
// *
// * \param
// * \param
// * \return
// */
//
//#include "hotel.h"
//#include<stdio.h>
//int menu(void)
//{
//    int code,status;
//    printf("%s%s\n",STARS,STARS);
//    printf("input the number of desired hotel:\n");
//    printf("1)u\t2)y\n");
//    printf("3)b\t4)g\n");
//    printf("5)y\n");
//    printf("%s%s\n",STARS,STARS);
//    while((status=scanf("%d",&code))!=1||(code<1||code>5))
//    {
//        if(status!=1)
//            scanf("%*s");/*scanf("%*s")表示跳至下一空白字符，这里主要是中间的*字符起的作用。比如：
//
//1
//2
//3
//4
//        int n;
//    scanf("%*d %*d %d",&n);
//    printf("%d",n);
//    return 0;
//如果输入的是1 2 3，那么输出的是3，因为前两个已经忽略啦。
//        */
//
//        printf("enter an integer from 1to5,please\n");
//
//       }
//        return code;
//
//}
//int getnights(void)
//{
//    int nights;
//    printf("how many nights are needed?");
//    while(scanf("%d",&nights)!=1)
//    {
//        scanf("%*s");
//        printf("pleaseinputsuchas2etc\n");
//
//    }
//    return nights;
//}
//void showprice(double rate,int nights)
//{
//    int  n;
//    double total=0.0;
//    double factor=1.0;
//    for(n=1;n<nights;n++,factor *=DISCOUNT)
//        total+=rate*factor;
//    printf("total is :%f\n",total);
//}
//
//
//
//* hotel.c -- hotel management functions */
//
//*#include <stdio.h>
//#include "hotel.h"
//int menu(void)
//{
//    int code, status;
//
//    printf("\n%s%s\n", STARS, STARS);
//    printf("Enter the number of the desired hotel:\n");
//    printf("1) Fairfield Arms           2) Hotel Olympic\n");
//    printf("3) Chertworthy Plaza        4) The Stockton\n");
//    printf("5) quit\n");
//    printf("%s%s\n", STARS, STARS);
//    while ((status = scanf("%d", &code)) != 1  ||
//             (code < 1 || code > 5))
//   {
//        if (status != 1)
//            scanf("%*s");
//        printf("Enter an integer from 1 to 5, please.\n");
//    }
//
//    return code;
//}
//
//int getnights(void)
//{
//    int nights;
//
//    printf("How many nights are needed? ");
//    while (scanf("%d", &nights) != 1)
//    {
//        scanf("%*s");
//        printf("Please enter an integer, such as 2.\n");
//    }
//
//    return nights;
//}
//
//void showprice(double rate, int nights)
//{
//    int n;
//    double total = 0.0;
//    double factor = 1.0;
//
//    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
//        total += rate * factor;
//    printf("The total cost will be $%0.2f.\n", total);
//}
//
//*/
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int a[6][6]={0};
//    for(int i=0;i<6;i++)
//    {
//        a[i][0]=1;
//
//    }
//    a[0][1]=2;
//    for(int j=2;j<6;j++)
//    {
//        a[0][j]=a[0][j-1]+a[0][j-2];
//    }
//    for(int i=1;i<6;i++)
//    {
//        for(int j=1;j<6;j++)
//        {
//            a[i][j]=a[i][j-1]+a[i-1][j]+a[i-1][j-1];
//        }
//    }
//    for(int i=0;i<6;i++)
//    {
//
//     for(int j=0;j<6;j++)
//    {
//    printf("%d\t",a[i][j]);
//    }
//    printf("\n");
//}}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//  	int sum=0;									//计数器
//	for (int i = 400; i <= 499; i++)			//遍历400-499
//	{
//		int b1 = i % 10;						//个位数
//		int b2 = i / 10 % 10;					//十位数
//		int b3 = i / 100;						//百位数
//		if (b1 == 4)sum++;						//每一位数等于4sum=sum+1；
//		if (b2 == 4)sum++;
//		if (b3 == 4)sum++;
//	}
//
//	if (sum == 112)								//判断sum是否等于112
//	{
//		printf("Correctly!!! the number \"4\" it's aways appeared %d times",sum);
//	}
//	else
//	{
//		printf("Incorrectly!!!,totally appeares %d times!!!!",sum);
//	}
//	system("pause");
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
// int a[8][8]={0};
// int sum=0;
// for(int i=0;i<8;i++)
// {
//     for(int j=0;j<8;j++)
//     {
//         if(i==j)
//         {
//             a[i][j]=5;
//         }
//         else if(i>j)
//         {
//             a[i][j]=i*j;
//
//         }
//         else
//         {
//             a[i][j]=i+j;
//         }
//     printf("%d\t",a[i][j]);
//     sum+=a[i][j];
//     }
//    printf("\n");
//
// }
//  printf("%d",sizeof(long int));
// printf("\n所有数字之和：%d",sum);
// //system("pause");
////printf("%d",sizeof(int));
//system("pause");
//return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int d=5000;
//    int temp1;
//    int temp2=temp1*10;
//    int flag=1;
//    for(int i=0;i<9;i++)
//    {temp2=temp2*10000+d;
//        for(int j=0;j<9;j++)
//        {
//            temp2=temp2+j;
//            for(int k=0;k<100;k++)
//            {
//                if(temp1==temp2*k)
//                {
//                    flag=0;
//                    printf("temp1=%d",temp1);
//                    break;
//                }
//            }
//        }
//    }
//    if(flag)
//    {
//        printf("NO DIGITALS\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//
//}
//#include<stdio.h>
//#include<conio.h>
//main(void)
//{
//    int c;
//    int a;
//    a=getchar();
//
//    if (EOF!=a)
//        printf("%c",a);
//
//    while((c=getchar())!='\n')//c接收的值是输入第一个字符后按下的回车换行符'\n',c是不会显示的
//    {
//        if (EOF==a)
//            break;
//        printf("%d",c);
//    }
//    getchar();
//}
//
////
////
////删数字
//#include<stdio.h>
//int main()
//{
//    int size;
//    while(scanf("%d",&size)!=EOF)
//    {
//    int Currentsize=size,count=0,i,k,m;
//    int a[size];
//    for(i=0;i<size;i++)
//        a[i]=i;
//    for(k=0;(k<size)&&(Currentsize!=1);k=(k+1)%size)
//    {
//        if(a[k]!=-1)
//        {
//            if(count>=0&&count<2)
//                count++;
//            else if(count==2)
//            {
//                a[k]=-1;
//                count=0;
//                Currentsize--;
//            }
//
//        }
//    }
//    for(m=0;m<size;m++)
//    {
//        if(a[m]!=-1)
//            printf("%d",m);
//    }
//    printf("\n");
//    }
//    return 0;
//}
//

//

/////
//输入一个字符串，求出该字符串包含的字符集合

//输入描述:
//每组数据输入一个字符串，字符串最大长度为100，且只包含字母，不可能为空串，区分大小写。
//#include <stdio.h>
//int main()
//{
//char str[101];
//while(scanf("%s", &str) != EOF)
//{
//int a[256] = { 0 };
//for (int i=0;str[i]!= '\0'; i++)
//{
//a[str[i]]++;
//if(a[str[i]] == 1)
//printf("%c", str[i]);
//}
//printf("\n");
//}
//return 0;
//}
//第二种方法
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//int i;
//int j;
//char buf[100];
//char putBuf[100];
//
//while(scanf("%s",&buf) != EOF)
//{
//int len = strlen(buf);
//
//for(i = 0; i < len ;i++)
//{
//putBuf[i] = 0;
//}
//
//for(i = 0; i < len; i++)
//{
//for(j = 0; j < len; j++)
//{
//if(buf[i] == putBuf[j])
//{
//break;
//}
//}
//
//if(j == len)
//{
//putBuf[i] = buf[i];
//}
//}
//
//for(i = 0; i < len; i++)
//{
//if(putBuf[i] != 0)
//{
//printf("%c",putBuf[i]);
//}
//}
//
//printf("\n");
//}
//}
//#include<stdio.h>
//#include<stdlib.h>
//float x2,y2;
//void change(int x1,int y1,int vxl,int vxh,int vyl,int vyh,int wxl,int wxh,int wyl,int wyh);
//int main()
//{
//	//初始化
//	int x2,y2;
//	int shuzu[100][100]={0};
//	int a,b,c,d,e,f,g,h,q,w;
//	//
//	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f,&g,&h,&q,&w)!=EOF)
//	{
//        //scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f,&g,&h,&q,&w);
//		change(a,b,c,d,e,f,g,h,q,w);
//		for(int i=0;i<100;i++)
//		for(int j=0;j<100;j++)
//		{
//			if(i==x2&&j==y2)
//			{
//				shuzu[x2][y2]='#';
//				printf("%c",shuzu[x2][y2]);
//			}
//			else{
//			printf("*",shuzu[i][j]);
//			}
//		}
//
//	}
//}
//
//void change(int x1,int y1,int vxl,int vxh,int vyl,int vyh,int wxl,int wxh,int wyl,int wyh)
//{
//	x2=vxl+(x1-wxl)*(vxh-vxl)/(wxh-wxl);
//	y2=vyl+(y1-wyl)*(vyh-vyl)/(wyh-wyl);
//	//return x2,y2;
//    printf("%f,%f",x2,y2);
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//#define ABS(x) ((x)>=0?(x):-(x))//求绝对值函数
//#define error 1//药厂差
//#define aisx 120//摄像头视野中心位置
//#define aisy 160
//int ddx;//摄像头视野中心位置与三角形中心位置偏差，定义为矢量
//int ddy;
//int u;
////x>=0.x<240,y>=0,y<320
////第一次平移
//int pingyi1(int x1,int y1,int x2,int y2,int x3,int y3)
//{
//    //以下程序求、出了等腰三角形的近似中心
//    int a,b,c;
//    int dx,dy;//d为边的中点
//    int du,dv;//du,dv为中心
//    int AB,BC,AC;//各边边长
//    int x12,y12,x22,y22,x32,y32;//用于计算平移后的相应坐标
//    int flaga=0,flagb=0,flagc=0;//pan duan AC,AB,BC哪个为底边
//    AB=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);//AB实际是平方数
//    BC=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
//    AC=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
//    a=AB-BC;
//    b=BC-AC;
//    c=AC-AB;
//    if(ABS(a)<error)
//    {
//        flaga=1;//B为顶点
//    }
//    if(ABS(b)<error)
//    {
//        flagb=1;//C为顶点
//    }
//    if(ABS(c)<error)
//        {
//        flagc=1;//A为顶点
//        }
//    if(flaga==1)
//    {
//        dx=(x3+x1)/2;
//        dy=(y3+y1)/2;
//        du=(dx+x2)/2;
//        dv=(dy+y2)/2;
//    }
//    if(flagb==1)
//    {
//        dx=(x1+x2)/2;
//        dy=(y1+y2)/2;
//        du=(x3+dx)/2;
//        dv=(y3+dy)/2;
//    }
//    if(flagc==1)
//    {
//        dx=(x2+x3)/2;
//        dy=(y2+y3)/2;
//        du=(x1+dx)/2;
//        dv=(y1+dy)/2;
//    }
//    u=2^2;
//    printf("%d,%d,%d",du,dv,u);
//    //
//    //以下进行相对位置计算
////    ddx=ABS(du-aisx);
////    ddy=ABS(dv-aisy);
////    x12=x1+ddx;
////    y12=y1+ddy;
////    x22=x2+ddx;
////    y22=y2+ddy;
////    x32=x3+ddx;
////    y32=y3+ddy;
////    ddx=ABS(aisx-du);
////    ddy=ABS(aisy-dv);
//
//
//
//}
//int main()
//{
//    //此步骤计算下全为整数，且判断出顶点为a
//pingyi1(20,20,10,10,30,10);
//system("pause");
//}
//#include<stdio.h>
//int main()
//{
//int a,b;
//scanf("%d %d",&a,&b);
//int c=0;
//if(a>b)
//    c=a;
//else
//    c=b;
//printf("%d",c);
//return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//static void heap_arrange(int arr[], int cur, int cnt);
//
//static int heap_verify(int arr[], int cnt)
//{
//    int i;
//    for (i = 0; i < cnt / 2; ++i) {
//        int lhs = 2 * i + 1;
//        int rhs = 2 * i + 2;
//
//        if (lhs < cnt && arr[i] > arr[lhs]) {
//            fprintf(stderr, "arr[%d]:%d > arr[%d]:%d\n", i, arr[i], lhs, arr[lhs]);
//            return -1;
//        }
//        if (rhs < cnt && arr[i] > arr[rhs]) {
//            fprintf(stderr, "arr[%d]:%d > arr[%d]:%d\n", i, arr[i], rhs, arr[rhs]);
//            return -1;
//        }
//    }
//    return 0;
//}
//
//static void heap_print(int arr[], int cnt)
//{
//    int layer = 0, num = 0;
//    for (layer = 0; num < cnt; ++layer) {
//        int i = 0;
//        for (i = 0 ; i < (1 << layer) && num < cnt ; ++i)
//            printf("%3d ", arr[num++]);
//        printf("\n");
//    }
//}
//static void heap_sort(int arr[], int cnt)
//{
//    int i;
//
//    printf("origin:\n");
//    heap_print(arr, cnt);
//    //  建堆
//    for (i = cnt / 2 - 1; i >= 0; --i) {
//        heap_arrange(arr, i, cnt);
//    }
//    printf("make heap:\n", i);
//    heap_print(arr, cnt);
//    assert(heap_verify(arr, cnt) == 0);
//    for (i = cnt - 1; i > 0; --i) {
//        int tmp;
//        tmp = arr[0];
//        arr[0] = arr[i];
//        arr[i] = tmp;
//        printf("sort i=%d\n", i);
//        heap_print(arr, cnt);
//        heap_arrange(arr, 0, i);
//        heap_print(arr, cnt);
//        assert(heap_verify(arr, i) == 0);
//    }
//    printf("sorted:\n");
//    heap_print(arr, cnt);
//}
//static int input(int **arr, int *size)
//{
//    int i;
//    int ret;
//
//    ret = fscanf(stdin, "%d\n", size);
//    if (ret != 1)
//        return -1;
//    *arr = (int *)malloc(sizeof(int) * (*size));
//    for (i = 0; i < *size; ++i) {
//        fscanf(stdin, "%d ", &(*arr)[i]);
//    }
//    return 0;
//}
//
//int main(int argc, char *argv[])
//{
//    int *arr = NULL;
//    int cnt = 0;
//    int i;
//
//    if (input(&arr, &cnt) < 0) {
//        fprintf(stderr, "input error\n");
//        return 0;
//    }
//    heap_sort(arr, cnt);
//    return 0;
//}
////  调整为小顶堆
//static void heap_arrange(int arr[], int cur, int cnt)  //调整为小顶堆
//{
//    int heaptop_val = arr[cur]; //堆顶的值
//    while (cur < cnt) {
//        int left = 2 * cur + 1;
//        int right = 2 * cur + 2;
//        int min = -1;
//        int min_val = arr[cur];/////////////////////////////////.
//        if (left < cnt && arr[left] < min_val) { //检查是否比左节点大
//            min = left;
//            min_val = arr[left];
//        }
//        if (right < cnt && arr[right] < min_val) {//检查是否比右节点大
//            min = right;
//        }
//        if (min ==-1)/////////////////////////////////////////////////////////////////
//            break;
//        arr[cur] =arr[left];/////////////////////////////////////////////////////////////////
//        cur = left;////
//    }
//    arr[cur] = heaptop_val;/////
//}
//#include <stdio.h>
//#include <malloc.h>
//
//struct node {
//    int val;
//    struct node *next;
//};
//
//static void list_sort(struct node *head);
//
//struct node *list_create(int arr[], int size)
//{
//    struct node *head = NULL;
//    int i;
//    for (i = size - 1; i >= 0; --i) {
//        struct node *p = (struct node *)malloc(sizeof(struct node));
//
//        p->val = arr[i];
//        p->next = head;
//        head = p;
//    }
//    return head;
//}
//static void list_print(struct node *head)
//{
//    for (; head; head = head->next) {
//        printf("%d", head->val);
//        if (head->next)
//            printf(" ");
//    }
//    printf("\n");
//}
//static void list_free(struct node *head)
//{
//    struct node *next;
//    while (head) {
//        next = head->next;
//        free(head);
//        head = next;
//    }
//}
//static int input(int **arr, int *size)
//{
//    int i;
//    int ret;
//
//    ret = fscanf(stdin, "%d\n", size);
//    if (ret != 1)
//        return -1;
//    *arr = (int *)malloc(sizeof(int) * (*size));
//    for (i = 0; i < *size; ++i) {
//        fscanf(stdin, "%d ", &(*arr)[i]);
//    }
//    return 0;
//}
//
//int main(int argc, char *argv[])
//{
//    struct node *head;
//    int *arr = NULL;
//    int size = 0;
//
//    if (input(&arr, &size) < 0) {
//        fprintf(stderr, "input error\n");
//        return 0;
//    }
//    head = list_create(arr, size);
//    list_sort(head);
//    list_print(head);
//    list_free(head);
//    free(arr);
//    return 0;
//}
//
//static void list_sort(struct node *head)
//{
//    node *pEnd = NULL;//终止指针
//    node *pTemp;//临时存放终止指针
//    node* p1 = new node();
//    p1->pNext = pHead;
//    pHead = p1;
//    node* p2;
//
//    while(pEnd != pHead)
//    {
//        pTemp = pHead;
//        for(p1 = pHead; p1->pNext->pNext != pEnd; p1 = p1->pNext)
//        {
//            if(p1->pNext->data > p1->pNext->pNext->data)
//            {
//                p2 = p1->pNext->pNext;
//                p1->pNext->pNext = p2->pNext;
//                p2->pNext = p1->pNext;
//                p1->pNext = p2;
//                pTemp = p1->pNext->pNext;
//            }
//        }
//        pEnd = pTemp;
//    }
//
//    p1 = pHead;
//    pHead = pHead->pNext;
//    delete p1;
//    p1 = NULL;
//
//
//
//
//
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int i=5,p;
//   // p=++i;
//   p=((++i)+(++i));
//   putchar('A');
//   putchar('\x41');
////p=(++i)+(++i)+(++i);
//printf("\n%d",p);
////printf("\n%f,%f,%f,%f\n",20.7/7/5,20.7/7,100.0/7/5,200.0/7);
//}


