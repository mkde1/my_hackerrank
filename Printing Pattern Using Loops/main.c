#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n=0;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int i=0, j=0,m=0,sayac1=0;//i for rows, j for columns, m changes with the row counter called "sayac1", the row counter "sayac1"
    if(n>=1){//n should be between 1 or 1000(equal to)
        if(n<=1000){
            for(i=0;i<((2*n)-1);i++){			//loop for rows
                for(j=0;j<((2*n)-1);j++){		//loop for columns
                	if(i<n){					//rows belown "n"
                		if(j<n){				//columns belown "n"			
                			if(sayac1>m){
                				printf("%d ",n-m);
                				m++;
                			}
                			else{
                				printf("%d ",n-m);
                			}
                		}
                		else{					//columns above or equal to "n"
                			if(((2*n)-2-j)<sayac1){
                				m--;
                				printf("%d ",n-m);
                			}
                			else{
                				printf("%d ",n-m);
                			}
                		}
                	}
					else{						//rows above or equal to "n"
						if(j<n){				//columns below "n"
                			if(sayac1>m){
                				printf("%d ",n-m);
                				m++;
                			}
                			else{
                				printf("%d ",n-m);
                			}
                		}
                		else{					//columns above or equal to "n"
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
            printf("\n");//prints new line after each row	
			if(i<n-1){
				sayac1++;//row counter increases
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
