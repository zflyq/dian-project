#include<stdio.h>
int main() {
	int  b = 0, c = 0, d = 0;
	char a;
	printf("请输入您所摆放的货物种类、通道、价格、数量\n");
	scanf("%c", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	printf("%d:", b);
	int i;
	for ( i = 1; i <= d; i++) {
	printf("%c\t", a);
	};
	printf("%d\n", c);
	
	static int j = 0;
	do{
		int  e = 0, f = e * c; 
		printf("请选择你购买的货物数量：\t");
		scanf ("%d", &e);
		//while (scanf("%d", &e)) {
			//while (getchar() != '\n');
			//printf("输入错误，请输入整数：\n");
		//}//可以排除错误输入
		j += e;
		if (j <= d) {
			f = c * e;
			printf("您购买的货物金额为：%d\n", f);
			printf("请投币付钱:");
			static int g = 0;
			int h;
			do {
				scanf_s("%d", &h);
				g += h;
			} while (g < f);
			printf("付钱成功！");
			int change = g - f;
			printf("找零%d元", change);
		}else{ printf("商品不足"); }
		
	} while (j <= d);
	return 0;
}
