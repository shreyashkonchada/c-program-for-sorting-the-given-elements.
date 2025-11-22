#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float r1,r2;
	scanf("%d%d%d",&a,&b,&c);
	float d=b*b-(4*a*c);
	if (d==0){
		printf("equal\n");
		r1=r2=-b/(2*a);
		printf("root1=%.2f\n",r1);
		printf("root2=%.2f\n",r2);	}
	else if (d>0){
		printf("distanct\n");
		r1=(-b+sqrt((d)/2*a));
		r2=(-b-sqrt((d)/2*a));
			printf("root1=%.2f\n",r1);
		printf("root2=%.2f\n",r2);
	}
	else if (d<0){
		printf("imaginary\n");
		printf("root1=%.2f+i%.2f\n",-b/(2.0*a),sqrt((-d)/(2*a)));
		printf("root1=%.2f-i%.2f\n",-b/(2.0*a),sqrt((-d)/(2*a)));
	}
	return 0;
}
