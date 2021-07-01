#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>

string ari(string);

string grade (int);

string ari(string b)
{
 
  int w=0,s=0,k=0;
 for(int i=0;i<strlen(b);i++)
 {
   
   if(b[i]>='0' && b[i]<='9')
    k++;
   else if(b[i]>='a' && b[i]<='z')
    k++;
   else if(b[i]>='A' && b[i]<='Z')
    k++;
    
   if(b[i]==' ')
    w++;
   else if(b[i]=='.' || b[i]=='?')
    s++;
    else if(b[i]=='!')
    s++;
   
 }
   
  float add = (4.71*(float)(k)/w)+(0.5*((float)(w)/s))-21.43;
  string grade(int add)
{
    
    


  switch(add){
  case  1  : return"Kindergarten";
  
 case 2 :return "First/Second Grade";
 case   3  : return "Third Grade";
  case 4 : return "Fourth Grade";
case     5 : return " Fifth Grade";
 case 6 : return "Sixth Grade";
   case 7  : return "Seventh Grade";
    case  8 : return "Eighth Grade";
    case  9 : return "Ninth Grade";
  case  10 : return "Tenth Grade";
   case 11 : return "Eleventh Grade";
 case   12 : return "Twelfth grade";
  case 13  : return "College student";
  case  14: return "Professor";
  
 
    
    }
    }
  b= grade((int)(add)+1);
  
  return b;
}
