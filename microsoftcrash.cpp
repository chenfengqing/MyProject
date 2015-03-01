#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <sys/timeb.h>
#include <time.h>
#define DISPLAYTIME
void test(int [],int);
bool function0(int []);bool function1(int []);bool function2(int []);
bool function3(int []);bool function4(int []);bool function5(int []);
bool function6(int []);bool function7(int []);bool function8(int []);
bool function9(int []);
void parsearr(int []);
#ifdef DISPLAYTIME
void displaytime(){
	struct _timeb timebuffer;
	char *timeline;
	_ftime( &timebuffer );
	timeline = ctime( & ( timebuffer.time ) );
	printf( "The time is %.19s.%hu %s", timeline, timebuffer.millitm, &timeline[20] );
}
#endif
void parsearr(int array[]){
	if((function0(array))&&(function1(array))&&(function2(array))&&(function3(array))&&(function4(array))&&(function5(array))&&(function6(array))&&(function7(array))&&(function8(array))&&(function9(array))){
		for(int i=0;i<10;i++){
			printf( "%d",array[i]);
		}
	}
}
void test(int a[],int k){
	if(k>=0&&k<=9){
		for(int l=1;l<=5;l++){
			a[k]=l;
			test(a,k+1);
		}
	}else{
		parsearr(a);
	}
}
bool function9(int a9 []){
/*10.本题的答案是
a.a b.b c.c d.d e.e
*/
	int i_9=a9[9];
	switch(i_9){
	case 1:
		return (a9[9]==1);
	case 2:
		return (a9[9]==2);
	case 3:
		return (a9[9]==3);
	case 4:
		return (a9[9]==4);
	case 5:
		return (a9[9]==5);
	default:
		return false;
	}
}
bool function8(int a8 []){
/*9.答案是辅音字母的问题个数是
a.一个质数 b.一个阶乘数 c.一个平方数 d.一个立方数 e.5的倍数*/

	int i_8=a8[8];
	int ma=0;
	for(int lma=0;lma<10;lma++){
		if((a8[lma]==2)||(a8[lma]==3)||(a8[lma]==4))ma++;
	}
	switch(i_8){
	case 1:
		return ((ma==2)||(ma==3)||(ma==5)||(ma==7));
	case 2:
		return ((ma==1)||(ma==2)||(ma==6));
	case 3:
		return ((ma==1)||(ma==4)||(ma==9));
	case 4:
		return ((ma==1)||(ma==8));
	case 5:
		return ((ma==5)||(ma==10));
	default:
		return false;
	}
}
bool function7(int a7 []){
/*8.答案是元音字母的问题的个数是
a.2 b.3 c.4 d.5 e.6(a,e是元音)*/

	int i_7=a7[7];
	int ma=0;
	for(int lma=0;lma<10;lma++){
		if((a7[lma]==1)||(a7[lma]==5))ma++;
	}
	switch(i_7){
	case 1:
		return (ma==2);
	case 2:
		return (ma==3);
	case 3:
		return (ma==4);
	case 4:
		return (ma==5);
	case 5:
		return (ma==6);
	default:
		return false;
	}
}
bool function6(int a6 []){
/*7.按字母顺序，本问题答案和下一个问题答案相差几个字母
a.4 b.3 c.2 d.1 e.0(a和b相差一个字母)*/

	int i_6=a6[6];
	switch(i_6){
	case 1:
		return (abs(a6[6]-a6[7])==4) ;
	case 2:
		return (abs(a6[6]-a6[7])==3) ;
	case 3:
		return (abs(a6[6]-a6[7])==2) ;
	case 4:
		return (abs(a6[6]-a6[7])==1) ;
	case 5:
		return (abs(a6[6]-a6[7])==0) ;
	default:
		return false;
	}
}
bool function5(int a5 []){
/*6.答案是a的问题个数和答案是什么的问题个数相同
a.b b.c c.d d.e e.都不是*/

	int i_5=a5[5];
	int ma=0,mb=0,mc=0,md=0,me=0;
	for(int lma=0;lma<10;lma++){
		if(a5[lma]==1)ma++;
		if(a5[lma]==2)mb++;
		if(a5[lma]==3)mc++;
		if(a5[lma]==4)md++;
		if(a5[lma]==5)me++;
	}
	switch(i_5){
	case 1:
		return (ma==mb);
	case 2:
		return (ma==mc);
	case 3:
		return (ma==md);
	case 4:
		return (ma==me);
	case 5:
		return ((ma!=mb)&&(ma!=mc)&&(ma!=md)&&(ma!=me));
	default:
		return false;
	}
}
bool function4(int a4 []){
/*5.本问题答案和哪个问题的相同
a.10 b.9 c.8 d.7 e.6*/

	int i_4=a4[4];
	switch(i_4){
	case 1:
		return (a4[4]==a4[9]);
	case 2:
		return (a4[4]==a4[8]);
	case 3:
		return (a4[4]==a4[7]);
	case 4:
		return (a4[4]==a4[6]);
	case 5:
		return (a4[4]==a4[5]);
	default:
		return false;
	}
}
bool function3(int a3 []){

/*4.答案是a的问题个数是
a.0 b.1 c.2 d.3 e.4*/
	int i_3=a3[3];
	int m=0;
	for(int l=0;l<10;l++){
		if(a3[l]==1)m++;
	}
	switch(i_3){
	case 1:
		return (m==0);
	case 2:
		return (m==1);
	case 3:
		return (m==2);
	case 4:
		return (m==3);
	case 5:
		return (m==4);
	default:
		return false;
	}
}
bool function2(int a2 []){
/*3.本问题答案和哪一个问题答案相同
a.1 b.2 c.4 d.7 e.6*/

	int i_2=a2[2];
	switch(i_2){
	case 1:
		return (a2[0]==a2[2]);
	case 2:
		return (a2[1]==a2[2]);
	case 3:
		return (a2[3]==a2[2]);
	case 4:
		return (a2[6]==a2[2]);
	case 5:
		return (a2[5]==a2[2]);
	default:
		return false;
	}
}
bool function1(int a1 []){
/*2.唯一的连续2个具有相同答案的问题是
a.2,3 b.3,4 c.4,5 d.5,6 e.6,7*/

	int i_1=a1[1];
	switch(i_1){
	case 1:
		return ((a1[0]!=a1[1])&&(a1[1]==a1[2])&&(a1[2]!=a1[3])&&(a1[3]!=a1[4])&&(a1[4]!=a1[5])&&(a1[5]!=a1[6])&&(a1[6]!=a1[7])&&(a1[7]!=a1[8])&&(a1[8]!=a1[9]));
	case 2:
		return ((a1[0]!=a1[1])&&(a1[1]!=a1[2])&&(a1[2]==a1[3])&&(a1[3]!=a1[4])&&(a1[4]!=a1[5])&&(a1[5]!=a1[6])&&(a1[6]!=a1[7])&&(a1[7]!=a1[8])&&(a1[8]!=a1[9]));
	case 3:
		return ((a1[0]!=a1[1])&&(a1[1]!=a1[2])&&(a1[2]!=a1[3])&&(a1[3]==a1[4])&&(a1[4]!=a1[5])&&(a1[5]!=a1[6])&&(a1[6]!=a1[7])&&(a1[7]!=a1[8])&&(a1[8]!=a1[9]));
	case 4:
		return ((a1[0]!=a1[1])&&(a1[1]!=a1[2])&&(a1[2]!=a1[3])&&(a1[3]!=a1[4])&&(a1[4]==a1[5])&&(a1[5]!=a1[6])&&(a1[6]!=a1[7])&&(a1[7]!=a1[8])&&(a1[8]!=a1[9]));
	case 5:
		return ((a1[0]!=a1[1])&&(a1[1]!=a1[2])&&(a1[2]!=a1[3])&&(a1[3]!=a1[4])&&(a1[4]!=a1[5])&&(a1[5]==a1[6])&&(a1[6]!=a1[7])&&(a1[7]!=a1[8])&&(a1[8]!=a1[9]));
	default:
		return false;
	}
}
bool function0(int a0 []){
/*
1.第一个问题是b的问题是哪个
a.2 b.3 c.4 d.5 e.6*/
	int i_0=a0[0];
	switch(i_0){
	case 1:
 		return ((a0[0]!=2)&&(a0[1]==2));
	case 2:
		return ((a0[0]!=2)&&(a0[1]!=2)&&(a0[2]==2));
	case 3:
		return ((a0[0]!=2)&&(a0[1]!=2)&&(a0[2]!=2)&&(a0[3]==2));
	case 4:
		return ((a0[0]!=2)&&(a0[1]!=2)&&(a0[2]!=2)&&(a0[3]!=2)&&(a0[4]==2));
	case 5:
		return ((a0[0]!=2)&&(a0[1]!=2)&&(a0[2]!=2)&&(a0[3]!=2)&&(a0[4]!=2)&&(a0[5]==2));
	default:
		return false;
	}
}
int main(){
#ifdef DISPLAYTIME
		displaytime();
#endif
	int a[10]={0};
	test(a,0);
	printf("\n");
#ifdef DISPLAYTIME
		displaytime();
#endif
	return 0 ;
}
//http://bbs.csdn.net/topics/390572433
