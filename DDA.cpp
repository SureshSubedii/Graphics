#include<stdio.h>
#include<graphics.h>
#include<math.h>
 int round(float num);

round(float num){
	return num + 0.5;
}
main(){
	int gd=DETECT,gm; //graphics driver and graphic mode
	initgraph(&gd, &gm, "D:/Program Files/Dev-Cpp/BGI");
	int x1,y1,x2,y2,steps,k;
	float x,y, dy, dx, xincr, yincr;

	
	printf("Enter x1 \n");
	scanf("%d",&x1);
	printf("Enter y1 \n");
	scanf("%d",&y1);


	printf("Enter x2 \n");
	scanf("%d",&x2);
	
	printf("Enter y2 \n");
	scanf("%d",&y2);
	
	steps = abs(dy);
	dx =  x2 - x1;
	dy = y2 - y1;
	
	if(abs(dx) > abs(dy)){
		steps = abs(dx);
	}else
		steps = abs(dy);

	
	xincr = dx/steps;
	yincr = dy/steps;
	
	x = x1;
	y = y1;
	for(k = 1; k <= steps; k++){

		delay(100);
		x += xincr;
		y += yincr;
		putpixel(round(x), round(y), RED);

		
	}

	getch();
	closegraph();
}
