#include <stdio.h>

int main(){
    int t,n,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<=n;i++){
            scanf("%d",&a);
            switch (a<=10)
            {
            case 1:
                int count1=0;
                count1++;
                break;
            case 2:
                int count2=0;
                count2++;
                break;
            case 3:
                int count3=0;
                count3++;
                break;
            case 4:
                int count4=0;
                count4++;
                break;
            case 5:
                int count5=0;
                count5++;
                break;
            case 6:
                int count6=0;
                count6++;
                break;
            case 7:
                int count7=0;
                count7++;
                break;
            case 8:
                int count8=0;
                count8++;
                break;
            case 9:
                int count9=0;
                count9++;
                break;
            
            case 10:
                int count10=0;
                count10++;
                break;
            default:
                 int count0=0;
                break;
            }
        }
        
    }
	
	return 0;
}

