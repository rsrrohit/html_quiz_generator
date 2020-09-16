// largeFont.h

/* This class is the result of project work 
 * done by the following five students at 
 * the end of their C++ course-
 *   Ms. Rachana R. Deolikar
 *   Mr. Tushar M. Chaure
 *   Ms. Snigdha Shahi
 *   Mr. Mohit S. Dani
 *   Ms. Arati P. Choudhari
*/
 
class Alphabets
{
 private:
  int x, y, Y;
  char name[40];
  int p;
  public:
     Alphabets()
     {
      x = 0;
      y = 0;
     }
  
     Alphabets(int x1, int y1, char iname[], int h)
     {
      x = x1;
      y = y1;
      strcpy(name, iname);
      p = h;
      Y = strlen(name);
     } 
    
    void draw(Mywin& w1, COLORREF c = RGB(0,0,0))
    { 
     for(int i=0;i<Y;i++)
     {
      if(name[i] == 'A')
      {//alphabet A  
       w1.line(x, y, (x+(p/3)), (y-p), RGB(0,0,255));
       w1.line((x+(p/3)), (y-p), (x+(2*p/3)), y, RGB(0,0,255));
       w1.line((x+(p/6)), (y-(p/2)), (x+(p/2)), (y-(p/2)), RGB(0,0,255));
       x = x+(2*p/3)+(p/5);
      }
      if(name[i] == 'B')
      {
       //alphabet B
       w1.line(x, y, x, (y-p), RGB(0, 0, 255)); 
       w1.arc(x, (y-(3*p/4)), (2*p/5), p/4, 270, 180, RGB(0, 0, 255));
       w1.arc(x, (y-(p/4)), (2*p/5), p/4, 270, 180, RGB(0, 0, 255));
       x = x+(2*p/5)+(p/5);
      }
      if(name[i] == 'C')
      {
       //alphabet C
       w1.arc(x+(2*p/5), y-(p/2), (2*p/5), (p/2), 75, 210, RGB(0,0,255));  
       x = x+(3*p/5)+(p/5);
      }
      if(name[i] == 'D')
      {
       //alphabet D
       w1.line(x, y, x, y-p, RGB(0, 0, 255));
       w1.arc(x, y-(p/2), p/2, p/2, 270, 180, RGB(0,0,255));
       x = x+(p/2)+(p/5);
      }
      if(name[i] == 'E')
      {
       //alphabet E 
       w1.line(x, y, x, y-p, RGB(0, 0, 255));
       w1.line(x, y, x+(p/2), y, RGB(0, 0, 255));
       w1.line(x, y-p, x+(p/2), y-p, RGB(0, 0, 255)); 
       w1.line(x, y-(p/2), x+(2*p/5), y-(p/2), RGB(0, 0, 255));
       x = x+(p/2)+(p/5);
      }
      if(name[i] == 'F')
      {
       //alphabet F
       w1.line(x, y, x, y-p, RGB(0,0,255));
       w1.line(x, y-p, x+(p/2), y-p, RGB(0, 0, 255));
       w1.line(x, y-(p/2), x+(2*p/5), y-(p/2), RGB(0, 0, 255));
       x = x+(4*p/10)+(p/5);
      }
      if(name[i] == 'G')
      {
       //alphabet G
       w1.arc(x+(3*p/5), y-(p/2), (3*p/5), (p/2), 90, 180, RGB(0, 0, 255));
       w1.line(x+(3*p/5), y, x+(3*p/5), y-(p/2), RGB(0, 0, 255));
       w1.line(x+(3*p/5), y-(p/2), x+(2*p/5), y-(p/2), RGB(0, 0, 255));
       x = x+(3*p/5)+p/5;
      }
      if(name[i] == 'H')
      {
       //alphabet H
       w1.line(x, y, x, y-p, RGB(0, 0, 255));
       w1.line(x+(3*p/5), y, x+(3*p/5), y-p, RGB(0, 0, 255));
       w1.line(x, y-(p/2), x+(3*p/5), y-(p/2), RGB(0, 0, 255));
       x = x+(3*p/5)+(p/5);
      }
      if(name[i] == 'I')
      {
       //alphabet I
       w1.line(x, y-p, x+(3*p/5), y-p, RGB(0, 0, 255));
       w1.line(x, y, x+(3*p/5), y, RGB(0, 0, 255));
       w1.line(x+(3*p/10), y-p, x+(3*p/10), y, RGB(0, 0, 255));
       x = x+(3*p/5)+p/5;
      } 
      if(name[i] == 'J')
      {
       //alphabet J
       w1.line(x, y-p, x+(3*p/5), y-p, RGB(0, 0, 255));
       w1.line(x+(3*p/10), y-p, x+(3*p/10), y-(p/4), RGB(0, 0, 255));
       w1.arc(x+(15*p/100), y-(p/4), (15*p/100), p/4, 200, 160, RGB(0, 0, 255));
       x = x+(p/2)+p/5;
      }
      if(name[i] == 'j')
      {
       //alphabet j
       //w1.line(x, y-(p/2), x+(3*p/10), y-(p/2), RGB(0, 0, 255));
       w1.line(x+(p/5), y-(p/2), x+(p/5), y+(p/5), RGB(0, 0, 255));
       w1.arc(x+(p/10), y+(p/5), (p/10), p/4, 200, 160, RGB(0, 0, 255));
       w1.point(x+(p/5), y-(3*p/5), RGB(0, 0, 255));
       x = x+(p/4)+p/5;
      }
      if(name[i] == 'K')
      {
       //alphabet K
       w1.line(x, y, x, y-p, RGB(0, 0, 255));
       w1.line(x, y-(p/2), x+(3*p/5), y-p, RGB(0, 0, 255));
       w1.line(x, y-(p/2), x+(3*p/5), y, RGB(0, 0, 255));
       x= x+(3*p/5)+p/5;
      } 
      if(name[i] == 'L')
      {
       //alphabet L
       w1.line(x, y, x, y-p, RGB(0, 0, 255));
       w1.line(x, y, x+(3*p/5), y, RGB(0, 0, 255));
       x = x+(3*p/5)+p/5;
      } 
      if(name[i] == 'M')
      {
       //alphabet M
       w1.line(x, y, x, y-p, RGB(0,0,255));
       w1.line(x, y-p, x+(35*p/100), y-(p/2), RGB(0,0,255));
       w1.line(x+(7*p/10), y-p, x+(35*p/100), y-(p/2), RGB(0,0,255));
       w1.line(x+(7*p/10), y-p, x+(7*p/10), y, RGB(0,0,255));
       x = x+(7*p/10) + p/5;
      }
      if(name[i] == 'N')
      {
       //alphabet N
       w1.line(x, y, x, y-p, RGB(0,0,255));
       w1.line(x+(7*p/10), y, x+(7*p/10), y-p,RGB(0,0,255));
       w1.line(x, y-p, x+(7*p/10), y, RGB(0,0,255));
       x = x+(7*p/10)+p/5;
     }
     if(name[i] == 'O')
     {
      //alphabet O
      w1.arc(x+(4*p/10), y-(p/2), (4*p/10), p/2, 0, 360, RGB(0,0,255));
      x = x+(8*p/10)+p/5;
     }
      if(name[i] == 'P')
      {
       //alphabet P
       w1.line(x, y, x, (y-p), RGB(0, 0, 255)); 
       w1.arc(x, (y-(3*p/4)), (2*p/5), p/4, 270, 180, RGB(0, 0, 255));
       x = x+(2*p/5)+(p/5);
      }
      if(name[i] == 'Q')
      {
       //alphabet Q
       w1.arc(x+(4*p/10), y-(p/2), (4*p/10), p/2, 0, 360, RGB(0,0,255));
       w1.line(x+(4*p/10), y-(p/4), x+(8*p/10), y+(15*p/100), RGB(0, 0, 255));
       x = x+(8*p/10)+p/5;
      }
      if(name[i] == 'R')
      {
       //alphabet R
       w1.line(x, y, x, (y-p), RGB(0, 0, 255)); 
       w1.arc(x, (y-(3*p/4)), (2*p/5), p/4, 270, 180, RGB(0, 0, 255));
       w1.line(x, y-(p/2), x+(p/2), y, RGB(0, 0, 255));
       x = x+(p/2)+(p/5);
      }
      if(name[i] == 'S')
      {
       //alphabet S
       w1.line(x, y-(3*p/4), x+(4*p/5), y-(p/4), RGB(0, 0, 255));
       w1.arc(x+(2*p/5), y-(3*p/4), (2*p/5), (3*p/10), 0, 180, RGB(0, 0, 255));
       w1.arc(x+(2*p/5), y-(p/4), (2*p/5), (3*p/10), 180, 180, RGB(0, 0, 255));
       x = x+(4*p/5)+p/5;
      }
      if(name[i] == 'T')
      {
       //alphabet T
       w1.line(x, y-p, x+(3*p/5), y-p, RGB(0, 0, 255));
       //w1.line(x, y, x+(3*p/5), y, RGB(0, 0, 255));
       w1.line(x+(3*p/10), y-p, x+(3*p/10), y, RGB(0, 0, 255));
       x = x+(3*p/5)+p/5;
      }
      if(name[i] == 'U')
      {
       //alphabet U
       w1.line(x, y-(p/5), x, y-p, RGB(0, 0, 255));
       w1.line(x+(6*p/10), y-(p/5), x+(6*p/10), y-p, RGB(0, 0, 255));
       w1.arc(x+(3*p/10), y-(p/5), (3*p/10), (p/5), 180, 180, RGB(0, 0, 255));
       x = x+(6*p/10)+p/5;
      } 
      if(name[i] == 'V')
      {
       //alphabet V
       w1.line(x, y-p, x+(2*p/5), y, RGB(0, 0, 255));
       w1.line(x+(2*p/5), y, x+(4*p/5), y-p, RGB(0, 0, 255));
       x = x+(4*p/5)+p/5;
      }
      if(name[i] == 'W')
      {
       //alphabet W
       w1.line(x, y-p, x+(p/5), y, RGB(0, 0, 255));
       w1.line(x+(p/5), y, x+(2*p/5), y-(p/3), RGB(0, 0, 255));
       w1.line(x+(2*p/5), y-(p/3), x+(3*p/5), y, RGB(0, 0, 255));
       w1.line(x+(3*p/5), y, x+(4*p/5), y-p, RGB(0, 0, 255));
       x = x+(4*p/5)+p/5;
      }
      if(name[i] == 'X')
      {
       //alphabet X
       w1.line(x, y-p, x+(4*p/5), y, RGB(0,0,255));
       w1.line(x+(4*p/5), y-p, x, y, RGB(0,0,255));
       x = x+(4*p/5)+p/5;
      }
      if(name[i] == 'Y')
      {
       //alphabet Y
       w1.line(x, y-p, x+(2*p/5), y-(p/2), RGB(0, 0, 255));
       w1.line(x+(2*p/5), y-(p/2), x+(4*p/5), y-p, RGB(0, 0, 255));
       w1.line(x+(2*p/5), y-(p/2), x+(2*p/5), y, RGB(0, 0, 255));
       x = x+(4*p/5)+p/5;
      } 
      if(name[i] == 'Z')
      {
       //alphabet Z
       w1.line(x, y-p, x+(4*p/5), y-p, RGB(0, 0, 255));
       w1.line(x+(4*p/5), y-p, x, y, RGB(0, 0, 255));
       w1.line(x, y, x+(4*p/5), y, RGB(0, 0, 255));
       x = x+(4*p/5)+p/5;
      }
 
      if(name[i] == ' ')
      {
       x = x +(2*p/3);
      }
     
     if(name[i] == '/')
     {
      w1.line(x, y, x+(7*p/10), y-p, RGB(0, 0, 255));
      
      x = x+(7*p/10)+p/5;
     }
     if(name[i] == '<')
     {
      w1.line(x, y-p/3, x+p/2, y-(2*p/3), RGB(0, 0, 255));
      w1.line(x, y-p/3, x+p/2, y, RGB(0, 0, 255));
      x = x+p/2+p/5;
     }

     if(name[i] == '>')
     {
      w1.line(x, y-(2*p/3), x+p/2, y-p/3, RGB(0, 0, 255));
      w1.line(x+p/2, y-p/3, x, y, RGB(0, 0, 255));
      x = x+p/2+p/5;
     }
     if(name[i] == '^')
     {
      w1.line(x, y-(2*p/3), x+p/3, y-p, RGB(0, 0, 255));
      w1.line(x+p/3, y-p, x+(2*p/3), y-(2*p/3),RGB(0, 0, 255));
      x = x+(2*p/3)+p/5;
     }
     if(name[i] == '#')
     {
      w1.line(x, y, x+p/3, y-p, RGB(0, 0, 255));
      w1.line(x+p/3, y, x+(2*p/3), y-p, RGB(0, 0, 255));
      w1.line(x, y-(p/3), x+(2*p/3), y-(p/3), RGB(0, 0, 255));
      w1.line(x, y-(2*p/3), x+(2*p/3), y-(2*p/3), RGB(0, 0, 255));
      x = x+(2*p/3)+p/5;
     }
     if(name[i] == '.')
     {
      w1.filledEllipse(x+(75*p/1000), y-(75*p/1000), (75*p/1000), (75*p/1000), RGB(0, 0, 255));
      x = x+p/4+p/5;
     } 
     if(name[i] == ',')
     {
      w1.filledEllipse(x+(75*p/1000), y-(75*p/1000), (75*p/1000), (75*p/1000), RGB(0, 0, 255));
      w1.line(x+(15*p/100), y-(75*p/1000), x, y+p/5, RGB(0, 0, 255));
      x = x+p/4+p/5;
     } 
     if(name[i] == '\'')
     {
      w1.filledEllipse(x+(75*p/1000), y-(850*p/1000), (75*p/1000), (75*p/1000), RGB(0, 0, 255));
      w1.line(x+(15*p/100), y-(850*p/1000), x, y-(3*p/4), RGB(0, 0, 255));
      x = x+p/4+p/5;
     } 
     if(name[i] == '"')
     {
      w1.filledEllipse(x+(75*p/1000), y-(850*p/1000), (75*p/1000), (75*p/1000), RGB(0, 0, 255));
      w1.line(x+(15*p/100), y-(850*p/1000), x, y-(3*p/4), RGB(0, 0, 255));
      w1.filledEllipse(x+(235*p/1000), y-(850*p/1000), (75*p/1000), (75*p/1000), RGB(0, 0, 255));
      w1.line(x+(310*p/1000), y-(850*p/1000), x+(160*p/1000), y-(3*p/4), RGB(0, 0, 255));
      x = x+p/4+p/5;
     } 
     if( name[i]=='a')
     {
      w1.line(x+p/2+p/4,y-p/4,x+p/2+p/4,y,c);
      w1.circle(x+p/2,y-p/4,p/4,c);
      x=x+p/4+p/2+p/5;
     }
     if(name[i]=='b')
     {
      w1.line(x,y,x,y-p,c);
      w1.arc(x,y-p/4,4*p/10,p/4,270,180,c);
      x=x+4*p/10+p/5+p/10;
     }
     if(name[i]=='c')
     {
      w1.arc(x+p/5,y-p/4,p/3,p/4,75,210,c);
      x=x+p/4+p/5;
     }
     if(name[i]=='d')
     {
      w1.line(x+2*p/5,y,x+2*p/5,y-p,c);
      w1.arc(x+2*p/5,y-p/4,2*p/5,p/4,90,180,c);
      x=x+2*p/5+p/5;
     }
     if(name[i]=='e')
     {        
      w1.arc(x+p/2,y-p/4,p/2,p/4,90,180,c);
      w1.line(x+(p/2),y-(p/4),x+(p/2),y-(p/2),c);
      w1.line(x,y-p/4,x+p/2,y-p/4,c);
      x=x+(p/4)+p/5;
     }
     if(name[i]=='f')
     {
      w1.line(x+(p/2),y,x+(p/2),y-(p*4/5),c);
      w1.line(x+(3*p/10),y-p/2,x+(7*p/10),y-p/2,c);
      w1.arc(x+(7*p/10),y-(3*p/4),(2*p/10),p/4,30,150,c);
      x=x+p/2+(2*p/10)+p/5;
     }
     if(name[i]=='g')
     {
      w1.line(x+p/5+p/4,y-p/4,x+p/5+p/4,y+p/2,c);
      w1.line(x+p/5+p/4,y+p/2,x,y+p/4,c);
      w1.circle(x+p/5,y-p/4,p/4,c);
      x=x+p/5+p/4+p/5;     
     }
     if(name[i]=='h')
     {
      w1.line(x,y,x,y-p,c);
      w1.arc(x+p/16,y,p/4,p/2,0,110,c);
      x=x+p/4+p/5;
     }  
     if(name[i]=='i')
     {
      w1.line(x,y,x,y-(p/2),c);
      w1.point(x,y-(3*p/4),c);
      x=x+p/5;
     }
     if(name[i]=='k')
     {
      w1.line(x,y,x,y-p,c);
      w1.line(x,y-p/2,x+p/4,y,c);
      w1.line(x,y-p/2,x+p/4,y-(p*3/4),c);
      x=x+p/6+p/5;
     }
     if(name[i]=='l')
     {
      w1.line(x+p/4,y,x+p/4,y-p,c);
      x=x+p/4+p/5;
     }
     if(name[i]=='m')
     {
      w1.line(x,y,x,y-(p/2),c);
      w1.line(x+p/4,y,x+p/4,y-(p/3),c);
      w1.line(x+p/2,y,x+p/2,y-(p/3),c);
      w1.arc(x+p/8,y-p/3,p/8,p/8,0,180,c);
      w1.arc(x+p/8+p/4,y-p/3,2*p/15,2*p/15,0,180,c);
      x=x+p/2+p/5;
     }      
     if(name[i]=='n')
     {
      w1.line(x,y,x,y-(p/2),c);
      w1.line(x+p/3,y,x+p/3,y-(p/4),c);
      w1.arc(x+p/6,y-p/4,p/6,2*p/9,0,180,c);
      x=x+p/5+p/5;
     }
     if(name[i]=='o')
     {
      w1.circle(x+p/2,y-p/4,p/4,c);
      x=x+p/4+p/5+p/2;
     }
     if(name[i]=='p')
     {  
      w1.line(x,y-p/2,x,y+p/2,c);
      w1.arc(x,y-p/4,4*p/10,p/4,270,180,c);
      x=x+4*p/10+p/5;
     }
     if(name[i]=='q')
     {  
      w1.line(x+4*p/10,y-p/2,x+4*p/10,y+p/2,c);
      w1.arc(x+2*p/5,y-p/4,2*p/5,p/4,90,180,c);
      x=x+2*p/5+p/5;
     }
     if(name[i]=='r')
     { 
      w1.line(x,y,x,y-(p/2),c);
      w1.arc(x+(2*p/10),y-(2*p/10),(2*p/10),p/4,30,150,c);
      x=x+(2*p/5)+p/5;
     }
     if(name[i] == 's')
     {
      //alphabet s
      w1.line(x, y-(p/2), x+(3*p/5), y-(15*p/100), RGB(0, 0, 255));
      w1.arc(x+(3*p/10), y-(p/2), (3*p/10), (15*p/100), 0, 180, RGB(0, 0, 255));
      w1.arc(x+(3*p/10), y-(15*p/100), (3*p/10), (15*p/100),180, 180, RGB(0, 0, 255));
      x = x+(3*p/5)+p/5;
     }
     if(name[i]=='t')
     {
      w1.line(x,y-p/2,x+(p/2),y-(p/2),c);
      w1.line(x+(p/4),y-p/6,x+(p/4),y-(p),c);
      w1.arc(x+(p/4+p/6),y-(p/6),(p/6),p/6,180,180,c);
      x=x+p/2+p/5;
     }
     if(name[i]=='u')
     {
      w1.line(x,y-p/5,x,y-p/2,c);
      w1.line(x+(2*p/5),y,x+(2*p/5),y-p/2,c);
      w1.arc(x+p/5,y-p/5,p/5,p/5,180,180,c);
      x=x+p/2+p/5;
     }
     if(name[i]=='v')
     {
      w1.line(x+(p/4),y,x,y-p/2,c);
      w1.line(x+(p/4),y,x+p/2,y-p/2,c);
      x=x+p/2+p/5;
     }
     if(name[i]=='w')
     {
      w1.line(x,y-p/2,x+(p/8),y,c);
      w1.line(x+(p/8),y,x+(p*2/8),y-p/6,c);
      w1.line(x+(p*2/8),y-p/6,x+(p*3/8),y,c);
      w1.line(x+(p*3/8),y,x+(p*4/8),y-p/2,c);
      x=x+(4*p/8)+p/5;
     } 
     if(name[i]=='x')
     {
      w1.line(x+p/2,y,x,y-p/2, c);
      w1.line(x+p/2,y-p/2,x,y, c);
      x=x+p/2+p/5;
     }
     if(name[i]=='y')
     {
      w1.line(x,y+p/2,x+p/2,y-p/2, c);
      w1.line(x,y-p/2,x+p/4,y, c);
      x = x+p/2+p/5;
     }
     if(name[i]=='z')
     {
      w1.line(x,y,x+p/2,y, c);
      w1.line(x,y,x+p/2,y-p/2, c);
      w1.line(x,y-p/2,x+p/2,y-p/2, c);
      x=x+p/2+p/5;
     }
     if(name[i]=='1')
     {
      w1.line(x+p/4,y,x+p/4,y-p, c);
      w1.line(x+p/4,y-p,x+p/8,y-(8*p/10), c);
      x=x+p/4+p/5;
     }
     if(name[i]=='2')
     {
      w1.line(x,y,x+p/2,y, c);
      w1.line(x,y,x+p/2,y-(8*p/10), c);
      w1.arc(x+p/4, y-(8*p/10), p/4, p/4, 0, 180, c);
      x=x+p/2+p/5;
     }
     if(name[i]=='+')
     {
      w1.line(x+p/4,y,x+p/4,y-p/2,c);
      w1.line(x,y-(p/4),x+p/2,y-p/4,c);
      x=x+p/2+p/5;
     }
     if(name[i]=='_')
   {
     w1.line(x,y,x+(6*p/10),y,c);
     x=x+(6*p/10)+p/5;
   }
   if(name[i]=='-')
   {
     w1.line(x,y-p/4,x+p/2,y-p/4,c);
     x=x+p/2+p/5;
   }
   if(name[i]=='=')
   {
     w1.line(x,y-p/2,x+p/2,y-p/2,c);
     w1.line(x,y-p/4,x+p/2,y-p/4,c);
     x=x+p/2+p/5;  
   }
   if(name[i]=='(')
   {
     w1.arc(x+p/2,y-p/2,p/2,6*p/10,90,180,c);
     x=x+p/2+p/5;
   }
   if(name[i]==')')
   {
     w1.arc(x,y-p/2,p/2,6*p/10,270,180,c);
     x=x+p/2+p/5;
   }
   if(name[i]=='%')
   {
     w1.line(x,y,x+(8*p/10),y-p,c);
     w1.circle(x+(2*p/10),y-(7*p/10),p/10,c);
     w1.circle(x+(7*p/10),y-(3*p/10),p/10,c);
     x=x+(8*p/10)+p/5;
   }
   if(name[i]=='3')
   {
     w1.arc(x+p/4,y-p/2-p/4,p/4,p/4,280,220,c);
     w1.arc(x+p/4,y-p/4,p/4,p/4,220,230,c);
     x=x+p/2+p/5;
   }
    if(name[i]=='4')
    {
      w1.line(x+p/2,y,x+p/2,y-p,c);
      w1.line(x+p/2,y-p,x,y-p/3,c);
      w1.line(x,y-p/3,x+p/2+p/8,y-p/3,c);
      x=x+p/2+p/8+p/5;
    }
    if(name[i]=='5')
    {
      w1.arc(x+p/8,y-p/3,p/3,p/3,240,230,c);
      w1.line(x,y-p/2-p/8,x,y-p,c);
      w1.line(x,y-p,x+p/2,y-p,c);
      x=x+p/2+p/5;
    }
   
   }
  }
};


// Test this class by following program

/*

#include <iostream>
#include <cmath>
#include "kiteLib.h"
#include "largeFont.h"
using namespace std;

int main()
{
  Mywin w2("Font Library" ,100,100,800,550);
  char ch;
  
  Alphabets insti(300, 320, "K.I.T.E.", 50);
  insti.draw(w2, RGB(0, 0, 205));
 
  w2.winPrint(150,490,"Press ENTER to exit...");
  w2.kiteGetch(ch);
}
 
*/





