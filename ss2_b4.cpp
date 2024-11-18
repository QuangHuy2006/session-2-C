#include <stdio.h>
int main(){
    
    long long chieurong, chieudai; 
    scanf("%lld", &chieurong);
    scanf("%lld", &chieudai);
    long long chu_vi,dientich;
    chu_vi=(chieudai+chieurong)*2;
    dientich=chieudai*chieurong;
    printf("\n%lld", chu_vi);
    printf("\n%lld", dientich);
	return 0;
}