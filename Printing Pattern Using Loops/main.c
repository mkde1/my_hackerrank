#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n=0;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int i=0, j=0,m=0,sayac1=0;
    if(n>=1){
        if(n<=1000){
            for(i=0;i<((2*n)-1);i++){			//satirlar icin dongu
                for(j=0;j<((2*n)-1);j++){		//sutunlar icin dongu
                	if(i<n){					//i<n degerleri icin
                		if(j<n){				//n degerinden kucuk sutun degerleri icin			
                			if(sayac1>m){
                				printf("%d ",n-m);
                				m++;
                			}
                			else{
                				printf("%d ",n-m);
                			}
                		}
                		else{					//j>=n degerinden buyuk sutun degerleri icin
                			if(((2*n)-2-j)<sayac1){
                				m--;
                				printf("%d ",n-m);
                			}
                			else{
                				printf("%d ",n-m);
                			}
                		}
                	}
					else{						//i>n degerleri icin
						if(j<n){				//n degerinden kucuk sutun degerleri icin
                			if(sayac1>m){
                				printf("%d ",n-m);
                				m++;
                			}
                			else{
                				printf("%d ",n-m);
                			}
                		}
                		else{					//j>=n degerinden buyuk sutun degerleri icin
                			if(((2*n)-2-j)<sayac1){
                				m--;
                				printf("%d ",n-m);
                			}
                			else{
                				printf("%d ",n-m);
                			}
                		}
					}				
                }
            printf("\n");
			if(i<n-1){
				sayac1++;
			}	
			else{
				sayac1--;
			}			
			m=0;		
            }    
        }           
    }
    return 0;
}
