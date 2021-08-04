#include<stdio.h>
int main()
{
    int arr[5];
   	int ans;
   	int n;
    int i,k;
    int c=0;
    
    printf("\n 5 number =  ");
    for(i = 0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("\n  n =   ");
     scanf("%d", &n);
     
    for(k = 0; k<5; k++){
    	
    	for(i=k+1; i<5; i++){
    		
    		ans=arr[k]*arr[i];
//    		printf("%d",ans);
    		if(ans==n){
    			c++;
			}
    		
		}
	}
     
        printf("\nAns : %d",c) ;
      

  
    return 0;
}
