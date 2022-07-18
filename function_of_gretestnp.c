 #include<stdio.h>
 int max_of_four(int a,int b,int c,int d);
 int main(){
    
    int a,b,c,d;
    
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    int ans=max_of_four(a,b,c,d);
    
    printf("%d",ans);

    return 0;

    }
    int max_of_four(int a,int b,int c,int d){
    int max;
    if(a>b)
   max=a>c?a>d?a:d:c>d?c:d;
   else
    max=b>c?b>d?b:d:c>d?c:d;
    return max;
 }