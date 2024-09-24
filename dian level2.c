#include<stdio.h>


int main() {
	int  b[5], c[5], d[5];
	char a[5],js,kong;
	int c1,c2,c3,c4,c5,d1,d2,d3,d4,d5;
	int i = 0,I=1;
	
	while ( i < 5) 
	{
		
		printf("请输入您所摆放的货物种类、通道、价格、数量：\n");
		scanf("%c%c%d %d %d", &a[i],&js, &b[i],&c[i], &d[i]);
		getchar();//吃掉空格
		if(js=='N'){break;} 
		if(js=='a'&&I<=3){
			I++;
			i--;
			while((kong=getchar())!='\n');
			
			printf("已退回。\n请输入您所摆放的货物种类、通道、价格、数量：\n");
			
			scanf("%c%c%d %d %d", &a[i],&js, &b[i],&c[i], &d[i]);
			getchar();
			
		}
		switch(b[i]){
			case 1:c1=c[i];d1=d[i];break;
			case 2:c2=c[i];d2=d[i];break;
			case 3:c3=c[i];d3=d[i];break;
			case 4:c4=c[i];d4=d[i];break;
			case 5:c5=c[i];d5=d[i];break;
		
		}
		i++;
	} ;
	printf("存放结束\n开始购买:\n");
	i=0;
	int B[5];
	js='1';
	while((kong=getchar())!='\n');
	char hw;
	int D[5],f;
	static int pri=0;
	while(i<5){
		scanf("%c%c%d %d",&hw,&js,&B[i],&D[i]);
		getchar();
		if(js=='N'){break;
		}
		
		
		if(js=='a'&&I<=3){
			I++;
			i--;
			pri-=f;
			while((kong=getchar())!='\n');
			
			printf("已退回。\n");
			
			scanf("%c%c%d %d",&hw,&js,&B[i],&D[i]);
			getchar();
			
		}
		f=0;		
		switch(B[i]){
			case 1:f=c1*D[i];pri+=f;break;
			case 2:f=c2*D[i];pri+=f;break;
			case 3:f=c3*D[i];pri+=f;break;
			case 4:f=c4*D[i];pri+=f;break;
			case 5:f=c5*D[i];pri+=f;break;				
		}
		
		i++;
		
	}
	printf("您购买的货物金额为：%d\n", pri);
	printf("请投币付钱:\n");
	static int g = 0;
	int h;
	do {
		scanf_s("%d", &h);
		g += h;
	} while (g < pri);
	printf("付钱成功！\n");
	int change = g - pri;
	printf("找零%d元", change);
	return 0;
}
//a货物b通道c价格d数量D购买数量

