#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void kb_to_byte(){
    float KB=0.0f;
   double Byte=0.0;
   int ch=0;
   printf("\n1. Convert Kilobytes to bytes\n"); 
   printf("\n2. Convert bytes into Kilobytes\n");
   printf("\nPlease provide your preference:\n");
   scanf("%d",&ch);
   if(ch==1)
   {
       printf("\nEnter Memory in Kilobytes:\n");
       scanf("%f",&KB);
       Byte=KB*1024;
       printf("\nThe memory in bytes is %lf bytes\n",Byte);
        }
   else
   {
       printf("Enter memory in Bytes:");
       scanf("%lf",&Byte);
       KB=Byte/1024;
       printf("\nThe memory in memory in Kilobytes is %lf KB\n",KB);
   }
       
    }
void mb_to_byte(){
    double MB=0.0;
   double Byte=0.0;
   int ch=0;
    printf("\n1. Convert Megabytes to bytes\n"); 
   printf("\n2. Convert bytes into Megabytes\n");
   printf("\nPlease provide your preference:\n");
   scanf("%d",&ch);
   if(ch==1)
   {
       printf("\nEnter Memory in Megabytes:\n");
       scanf("%lf",&MB);
       Byte=pow(1024.0,2.0)*MB;
       printf("The memory in bytes is %lf bytes",Byte);
        }
   else
   {
       printf("\nEnter memory in Bytes:\n");
       scanf("%lf",&Byte);
       MB=(Byte/pow(1024.0,2.0));
       printf("\nThe memory in memory in Megabytes is %lf MB\n",MB );
   }
    
    }
void gb_to_byte(){
    double GB=0.0;
   double Byte=0.0;
    int ch=0;
    printf("\n1. Convert Giga Bytes to bytes\n"); 
   printf("\n2. Convert bytes into Giga bytes\n");
   printf("\nPlease provide your preference:\n");
   scanf("%d",&ch);
    if(ch==1)
    {
        printf("\nEnter Memory in Giga Byte:");
    scanf("%lf",&GB);
    Byte = pow(1024.0,3.0)*GB;
    printf("\nThe Memory in bytes is: %lf Bytes\n", Byte);
        }
        else{
             printf("\nEnter memory in Bytes:\n");
       scanf("%lf",&Byte);
       GB=(Byte/pow(1024,3));
       printf("\nThe memory in memory in Gigabytes is %lf GB\n",GB );
        }
    }
void tb_to_byte(){
    double TB=0.0;
   double Byte=0.0;
    int ch=0;
    printf("\n1. Convert Tera Bytes to bytes\n"); 
   printf("\n2. Convert bytes into Tera bytes\n");
   printf("\nPlease provide your preference:\n");
   scanf("%d",&ch);
    if(ch==1){
     printf("\nEnter Memory in Tera Byte:");
    scanf("%lf",&TB);
    Byte = pow(1024.0,4.0)*TB;
    printf("\nThe Memory in bytes is: %lf Bytes\n", Byte);
    }
   else{
       
        printf("\nEnter memory in Bytes:\n");
       scanf("%lf",&Byte);
       TB=(Byte/pow(1024,4));
       printf("\nThe memory in memory in Terabytes is %lf TB\n",TB );
   } 
}
void pb_to_byte(){
    double PB=0.0;
   double Byte=0.0;
    int ch=0;
    printf("\n1. Convert Peta Bytes to bytes\n"); 
   printf("\n2. Convert bytes into Peta bytes\n");
   printf("\nPlease provide your preference:\n");
   scanf("%d",&ch);
    if(ch==1){
    printf("\nEnter Memory in Peta Byte:");
    scanf("%lf",&PB);
    Byte = pow(1024.0,5.0)*PB;
    printf("\nThe Memory in bytes is: %lf Bytes\n", Byte);
        }
        else{
            printf("\nEnter memory in Bytes:\n");
       scanf("%lf",&Byte);
       PB=(Byte/pow(1024,5));
       printf("\nThe memory in memory in Petabytes is %lf PB\n",PB );
        }
    }
    void memory()
    {   
        int ch=0;
        
        printf("\n1. For Kilobytes to bytes and vice versa ");
        printf("\n2. For Megabytes to bytes and vice versa");
        printf("\n3. For Gigabytes to bytes and vice versa ");
        printf("\n4. For Terabytes to bytes and vice versa ");
        printf("\n5. For Petabyte to bytes and vice versa\n");
        printf("\nEnter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: kb_to_byte();
             break;
            
            case 2: mb_to_byte();
             break;
             
            case 3: gb_to_byte();
             break;
             
            case 4: tb_to_byte();
             break;
            case 5:pb_to_byte();
            break;
            default:
            printf("\nINVALID INPUT !!\n");
             }
    }
    
void msq_cmsq() 
{
    int ch=0;
    double m=0;
    double cm=0;
     printf("1. Convert Metre Square to Centimetre Square\n");
     printf("2. Convert Centimetre Square into Metre Square\n");
     printf("\nPlease provide your preference:\n");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter Area in Metre Square:");
        scanf("%lf",&m);
        cm=10000*m;
        printf("The Area in Centimetre Square is %lf Cm sq\n",cm);
         }
    else{
        printf("Enter Area in Centimetre Square:");
        scanf("%lf",&cm);
        m=cm/10000;
        printf("The Area in Metre Square is %lf m sq\n",m);
        
    }
}
void msq_to_hmsq() {
    int ch=0;
    double m=0;
    double hm=0;
     printf("1. Convert Metre Square to Hectometre Square\n");
     printf("2. Convert  Hectometre Square into Metre Square\n");
     printf("\nPlease provide your preference:\n");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter Area in Metre Square:\n");
        scanf("%lf",&m);
        hm=0.0001*m;
        printf("The Area in Hectometre Square is %lf hm sq\n",hm);
         }
    else{
        printf("Enter Area in Hectometre Square:\n");
        scanf("%lf",&hm);
        m=hm*10000;
        printf("The Area in Metre Square is %lf m sq\n",m);
        
    }
}
void msq_to_sqf() {
    int ch=0;
    double m=0;
    double sqf=0;
     printf("1. Convert Metre Square to Square feet\n");
     printf("2. Convert Square feet into Metre Square\n");
     printf("\nPlease provide your preference:\n");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter Area in Metre Square:");
        scanf("%lf",&m);
        sqf=10.7639*m;
        printf("The Area in Square feet is %lf hm sq\n",sqf);
         }
    else{
        printf("Enter Area in Square feet:\n");
        scanf("%lf",&sqf);
        m=sqf/10.7639;
        printf("The Area in Metre Square is %lf m sq\n",m);
        
    }
}
void area()
{
    int x=0;
    printf("\n1. Convert Metre square into Centimetre square and vice vesra\n");
    printf("\n2. convert Metre square into Hectometre square and vice vesra\n");
    printf("\n3. Convert Metre square into Square Feet and vice vesra\n");
    printf("\nEnter your choice:\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:msq_cmsq();
        break;
        case 2: msq_to_hmsq();
        break;
        case 3: msq_to_sqf();
        break;
        default:
        printf("INVALID INPUT");
    }
}
void celsius_fahren(){
    int ch=0;
    double c= 0.0;
    double f= 0.0;
    printf("1.Convert Celsius to Fahrenheit\n");
     printf("2.Convert Fahrenheit to  Celsius\n ");
      printf("\nPlease provide your preference:\n");
     
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter Temperature in Celsius:\n");
        scanf("%lf",&c);
        f=(c*9/5)+32;
        printf("Temperature in Fahrenheit is:%lf °F\n",f);
    }
    else{
         printf("Enter Temperature in Fahrenheit:\n");
        scanf("%lf",&f);
       c = (32*f-32)*5/9 ;
       printf("Temperature in Celsius is:%lf °C\n",c);
    }
}
void celsius_kelvin(){
    int ch=0;
    double c= 0.0;
    double k= 0.0;
    printf("1.Convert Celsius to Kelvin\n");
     printf("2.Convert kelvin to  Celsius ");
     printf("\nPlease provide your preference:\n");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter Temperature in Celsius:\n");
        scanf("%lf",&c);
      k= (c + 273.15);
  printf("Temperature in Kelvin is:%lf K\n",k);
    }
    else{
         printf("Enter Temperature in Kelvin:\n");
        scanf("%lf",&k);
       c = k -273.15 ;
       printf("Temperature in Celsius is:%lf °C\n",c);
    }
    }
  void temperature(){
      int x=0;
    printf("1. Convert Celsius to Fahrenheit and vice vesra\n");
    printf("\n2. Convert Celsius to Kelvin and vice vesra\n");
    printf("\nEnter your choice:\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:celsius_fahren();
        break;
        case 2:celsius_kelvin();
        break;
        default:
        printf("INVALID INPUT");
    }
      
      
  }
  
void l_ml()
{
    int ch=0;
    double l=0;
    double ml=0;
     printf("1. Convert Liter cube to MilliLiter\n");
     printf("2. Convert MilliLiter into Liter\n");
     printf("\nPlease provide your preference:\n");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter Volume in Liter:");
        scanf("%lf",&l);
        ml=(l/1000)*l;
        printf("The Volume in Milliliter is %lf ml \n",ml);
         }
    else{
        printf("Enter Volume in MilliLiter:\n");
        scanf("%lf",&ml);
        l=1000*ml;
        printf("The Volume liter is %lf liter \n",l);
        
    }
    
}



void l_dl()
{
     int ch=0;
    double l=0;
    double dl=0;
     printf("1. Convert Liter  to deciLiter\n");
     printf("2. Convert deciliter into Liter\n");
     printf("\nPlease provide your preference:\n");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter Volume in Liter:");
        scanf("%lf",&l);
        dl=l/10*l;
        printf("The Volume in deciliter is %lf deciliter \n",dl);
         }
    else{
        printf("Enter Volume in deciLiter:\n");
        scanf("%lf",&dl);
        l=10*dl;
        printf("The Volume in liter is %lf liter \n",l);
        
    }
    
    }
void l_microliter()
{
  int ch=0;
    double l=0;
    double microl=0;
     printf("1. Convert Liter  to microLiter\n");
     printf("2. Convert microliter into Liter\n");
     printf("\nPlease provide your preference:\n");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter Volume in Liter:");
        scanf("%lf",&l);
        microl=l/1000000*l;
        printf("The Volume in microliter is %lf microliter \n",microl);
         }
    else{
        printf("Enter Volume in microLiter:\n");
        scanf("%lf",&microl);
        l=1000000*microl;
        printf("The Volume in liter is %lf liter \n",l);
        
    }  
    
}
void l_deca()
{
    
 int ch=0;
    double l=0;
    double decal=0;
     printf("1. Convert Liter  to decaLiter\n");
     printf("2. Convert decaliter into Liter\n");
     printf("\nPlease provide your preference:\n");
    scanf("%d",&ch);
    if(ch==1){
        printf("Enter Volume in Liter:");
        scanf("%lf",&l);
        decal=10*l;
        printf("The Volume in decaLiter is %lf decaLiter\n",decal);
         }
    else
    {
        printf("Enter Volume in decaLiter:\n");
        scanf("%lf",&decal);
        l=(1/10)*decal;
        printf("The Volume in liter is %lf l cube \n",l);
        
    }     
    
}
 void volume(){
      int x=0;
    printf("1. Convert Liter to milliLiter and vice vesra\n");
    printf("\n2. Convert Liter to deciLiter and vice vesra\n");
    printf("\n3. Convert Liter to  microLiter and vice vesra\n");
    printf("\n4. Convert Liter to decaLiter and vice vesra\n");
    printf("\nEnter your choice:\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:l_ml();
        break;
        case 2:l_dl();
        break;
        case 3:l_microliter();
        break;
        case 4:l_deca();
        break;
        default:
        printf("INVALID INPUT");
    }
      
      
  }
    void kg_to_g()
   {
       int ch=0;
       double kg=0.0;
       double g=0.0;
       printf("1. Convert Kilograms  to grams\n");
     printf("2. Convert Grams into Kilograms\n");
     printf("\nPlease provide your preference:\n");
       scanf("%d",&ch);
       if(ch==1)
       {
           printf("Enter the weight in Kilograms");
           scanf("%lf",&kg);
           g=kg*1000;
           printf("The weight in grams is %lf grams\n",g);}
           else{
                printf("Enter the weight in grams");
           scanf("%lf",&g);
           kg=g/1000;
           printf("The weight in grams is %lf Kilograms\n",kg);
           }
    }
    void g_to_mg()
    {
        int ch=0;
        double mg=0.0;
        double g=0.0;
        printf("1. Convert Grams  to Millgrams\n");
     printf("2. Convert Millgrams into Grams\n");
     printf("\nPlease provide your preference:\n");
       scanf("%d",&ch);
       if(ch==1)
       {
           printf("Enter the weight in Grams");
           scanf("%lf",&g);
           mg=g*1000;
           printf("The weight in milligrams is %lf mg\n",mg);}
           else{
                printf("Enter the weight in Milligrams");
           scanf("%lf",&mg);
           g=mg/1000;
           printf("The weight in grams is %lf g\n",g);
           }
    }
    void grams_to_pnds()
    {
        double g=0.0;
        double pnd=0.0;
        int ch=0;
           printf("1. Convert Grams  to Pounds\n");
     printf("2. Convert Pounds into Grams\n");
     printf("\nPlease provide your preference:\n");
       scanf("%d",&ch);
       if(ch==1)
       {
           printf("Enter the weight in Grams");
           scanf("%lf",&g);
           pnd=453.59*g;
           printf("The weight in Pounds is %lf pounds\n",pnd);}
           else{
                printf("Enter the weight in pounds");
           scanf("%lf",&pnd);
           g=pnd/435.59;
           printf("The weight in Grams is %lf g\n",g);
           }
    }
    

  double g_to_ounce()
{
    int ch=0;
    double onc=0.0;
    double g=0.0;
    printf("1. Convert Grams  to Ounces\n");
     printf("2. Convert Ounces into Grams\n");
     printf("\nPlease provide your preference:\n");
       scanf("%d",&ch);
       if(ch==1)
       {
           printf("Enter the weight in Grams");
           scanf("%lf",&g);
           onc=28.35*g;
           printf("The weight in Ounces is %lf oz\n",onc);}
           else{
                printf("Enter the weight in Ounces");
           scanf("%lf",&onc);
           g=onc/28.35;
           printf("The weight in Grams is %lf g\n",g);
           }
    
}
void weight()
{
    int x=0;
    printf("1. Convert Kilograms into Grams and vice vesra\n");
    printf("\n2. Convert  Grams into Milligrams and vice vesra\n");
    printf("\n3. Convert Grams into Pounds and vice vesra\n");
    printf("\n4. Convert Grams into Ounces and vice vesra\n");
    printf("\nEnter your choice:\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1: kg_to_g();
        break;
        case 2: g_to_mg();
        break;
        case 3:grams_to_pnds();
        break;
        case 4:g_to_ounce();
        break;
        default:
        printf("Invalid Input");
        
     }
    
}
void mm_to_cm()
{
    int ch=0;
    double mm=0.0;
    double cm=0.0;
     printf("1. Convert Centimetres into Millimetres\n");
     printf("2. Convert Millimetres into Centimetres\n");
     printf("\nPlease provide your preference:\n");
       scanf("%d",&ch);
       if(ch==1)
       {
           printf("Enter the Length in Centimetres");
           scanf("%lf",&cm);
           mm=cm*10;
           printf("The length in Millimetres is %lf mm\n",mm);}
           else{
                printf("Enter the Length in Millimetres");
           scanf("%lf",&mm);
           cm=mm/10;
           printf("The Length in Centimetres is %lf cm\n",cm);
           }
    
}
void m_to_km()
{
    int ch=0;
    double m=0.0;
    double km=0.0;
    printf("1. Convert Kilometres into Metres\n");
     printf("2. Convert Metres into Kilometres\n");
     printf("\nPlease provide your preference:\n");
       scanf("%d",&ch);
       if(ch==1)
       {
           printf("Enter the Length in Kilometres");
           scanf("%lf",&km);
           m=km*1000;
           printf("The length in Metres is %lf m\n",m);}
           else{
                printf("Enter the Length in Metres");
           scanf("%lf",&m);
           km=m/1000;
           printf("The Length in Kilometres is %lf km\n",km);
           }
}
void hm_to_cm()
{
    int ch=0;
    double hm=0.0;
    double cm=0.0;
    printf("1. Convert Hectometres into Centimetres\n");
     printf("2. Convert Centimetres into Hectometres\n");
     printf("\nPlease provide your preference:\n");
       scanf("%d",&ch);
       if(ch==1)
       {
           printf("Enter the Length in Hectometres");
           scanf("%lf",&hm);
           cm=hm*1000;
           printf("The length in Centimetres is %lf cm\n",cm);}
           else{
                printf("Enter the Length in Centimetres");
           scanf("%lf",&cm);
           hm=cm/1000;
           printf("The Length in Hectometres is %lf hm\n",hm);
           }
    
}
void dm_to_mm()
{
    int ch=0;
    double dm=0.0;
    double mm=0.0;
    printf("1. Convert Decimetres into Millimetres\n");
     printf("2. Convert Millimetres into Decimetres\n");
     printf("\nPlease provide your preference:\n");
       scanf("%d",&ch);
       if(ch==1)
       {
           printf("Enter the Length in Decimetres");
           scanf("%lf",&dm);
           mm=dm*100;
           printf("The length in Millimetres is %lf mm\n",mm);}
           else{
                printf("Enter the Length in Millimetres");
           scanf("%lf",&mm);
           dm=mm/100;
           printf("The Length in Decimetres is %lf dm\n",dm);
           }
    
}
void length()
{
  int x=0;
   printf("1. Convert Millimetres into Centimetres  and vice vesra\n");
    printf("\n2. Convert  Kilometres into Metres and vice vesra\n");
    printf("\n3. Convert Hectometres into Centimetres and vice vesra\n");
    printf("\n4. Convert Decimetres into Millimetres and vice vesra\n");
    printf("\nEnter your choice:\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:mm_to_cm();
        break;
        case 2:m_to_km();
        break;
        case 3:hm_to_cm();
        break;
        case 4:dm_to_mm();
        break;
        default:
        printf("Invalid Input");
    
    }
}
    
    


    
int main()
{     while(1){
        int ch=0;
    printf("\n1. For Memory conversion\n");
    printf("2. For Area conversion\n");
    printf("3. For Temperature conversion\n");
    printf("4. For Volume conversion\n");
    printf("5. For Length conversion\n");
    printf("6. For Weight conversion \n");
    printf("7. To Quit\n");
    printf("Enter your choice:\n");
    scanf("%d",&ch);
        switch(ch){
            case 1: memory();
            break;
            case 2: area();
            break;
            case 3:temperature();
           break;
           case 4:volume();
           break;
           case 5:length();
           break;
           case 6:weight();
           break;
           case 7: exit(1);
            default:
            printf("INVALID INPUT\n");
            }
        }
   
    return 0;
}
