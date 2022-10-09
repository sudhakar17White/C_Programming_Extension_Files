#include <stdio.h>

//To find the power of number
int power(int a,int p)
{ 

    int power=1;
    for(int i=1;i<=p;i++)
    {
        
       
        power=a*power;
        
        
    }
    printf("%d-power-%d =%d",a,p,power);

}

//To find square of number

int sq(int a)
{ 

    int sqr=a*a;

    printf("%d",sqr);


}


//To find cube of the number
int cube(int a)
{ 

    int c=a*a*a;

    printf("%d",c);


}

//To find Pi value
int pi(float f)
{ 


    float pi=f*3.141;

    printf("%2f",pi);

}

//To Reverse number
int rev(int a)
{ 

    int temp=0,r;

    while(a>0)
    { 

        r=a%10;

        temp=temp*10+r;

        a=a/10;
        
    }
    printf("%d",temp);



}
//sum of digits
int sumdigit(int a)
{ 
    int c=0,re;
    while(a!=0)
    { 

        re=a%10;

        c=c+re;

        a=a/10;


    }
    printf("%d",c);



}

int eORo(int n)
{ 

    if(n%2==0)
    { 

        printf("%d Even number ",n);


    }
    else
    {

        printf("%d Odd number ",n);


    }
   
    


}
int vowels(int size)
{ 

 
    
    printf("Limit:%d\n",size);

    int i;

    int count=0;

    char ar[size];


    scanf("%s",ar);

    
    
    for(i=0;i<=size;i++)
    {

        if(ar[i]=='a' || ar[i]=='A')
        { 

              count++;  

        }
        else if(ar[i]=='e' || ar[i]=='E')
        { 

              count++;  

        }
        else if(ar[i]=='i' || ar[i]=='I')
        { 

              count++;  

        }
        else if(ar[i]=='o' || ar[i]=='O')
        { 

              count++;  

        }
        else if(ar[i]=='u' || ar[i]=='U')
        { 

              count++;  

        }
        else
        {
            count=count+0;
        }




     

    }
    if(count==1)
    {
    printf("Your word %s has %d Vowel",ar,count);
    }
    else 
    {
        printf("Your word %s has %d Vowels",ar,count);

    }



}
int Ascii(char a)
{ 

    printf("%c - Ascii value%d",a,a);

}
void address()
{

    


}



