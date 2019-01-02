#include<stdio.h>
/*점수를 입력받아 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C 그 이하는 F를 출력하는 프로그램 작성 */

int main(){
	int score;
	printf("점수를 입력하세요");
	scanf("%d", &score);
	if(score>=90 && score <= 100)
	{
		printf("A\n");
	}
	if(score >=80 && score<90)
	{
		printf("B\n");
	}
	if(score >=70 && score<80)
	{
		printf("C\n");
	}
	else
	{
		printf("F\n");
	}
return 0;
}
