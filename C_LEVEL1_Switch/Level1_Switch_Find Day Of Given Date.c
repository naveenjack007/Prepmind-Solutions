#include <stdio.h>

int main () {
	int d, m, y, weekday ;
	scanf("%d/%d/%d",&d,&m,&y);
	if(1<=d && d<=31 && 1<=m && m<=12 && 1920<=y && y<=2100)
    {
        weekday  = (d+=m<3?y--:y-2,23*m/9+d+4+y/4-y/100+y/400)%7;
        switch(weekday) {
            case 0:
                printf("Sunday");
			    break;
		    case 1:
                    printf("Monday");
			        break;
		    case 2:
                    printf("Tuesday");
			        break;
		    case 3:
                    printf("Wednesday");
			        break;
		    case 4:
                    printf("Thursday");
			        break;
		    case 5:
                    printf("Friday");
			        break;
		    case 6:
                    printf("Saturday");
                    break;
        }
	}
    else{
        printf("Invalid Date");
    }
	return 0;
}
