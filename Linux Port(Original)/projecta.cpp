#include<iostream>
#include "kiteLib.h"
#include<fstream>
#include<string>
#include "buttonTbox.h"
#include "largeFont.h"
#include <cstdlib>
using namespace std;

class Database
{
  private:
  	string ques, ans1, ans2, ans3, ans4;
	int c_ans;
  public:
  	void setDatabase(string q, string a1, string a2, string a3, string a4, int ans)
	{
	  ques = q;
	  ans1 = a1;
	  ans2 = a2;
	  ans3 = a3;
	  ans4 = a4;
	  c_ans = ans;
	}
	string getQues()
	{
	  return(ques);
	}
   	string getAns1()
	{
	  return(ans1);
	}
   	string getAns2()
	{
	  return(ans2);
	}
   	string getAns3()
	{
	  return(ans3);
	}
   	string getAns4()
	{
	  return(ans4);
	}
	int getCorrect()
	{
	  return(c_ans);
	}
	
};

int main()
{
  char ch;POINT p1;
  bool b;
  Mywin w0("KITE Aptitude Test", 100, 20, 800, 600);
  w0.winPrint(150, 20, "KHIRWADKAR INSTITUTE for TECHNOLOGICAL EXCELLENCE");
  w0.winPrint(300, 50, "KITE Aptitude Test");
  w0.winPrint(325, 80, "A Project By-");
  w0.GetSetForeColor(RGB(0, 0, 255));
  w0.winPrint(100, 100, "Rohit Rokde");
  w0.winPrint(550, 100, "Nikhilesh Gupta");
  w0.winPrint(100,170, "Suneet Raut");
  w0.winPrint(550, 170, "Pallavi Belapurkar");
  w0.winPrint(300, 240, "Priyanka Badwaik");
  w0.GetSetForeColor(RGB(0, 0, 0));
  w0.winPrint(100, 120, "7th sem ETC");
  w0.winPrint(100, 140, "GHRCE");
  w0.winPrint(550, 120, "7th sem EE");
  w0.winPrint(550, 140, "YCCE");
  w0.winPrint(100, 190, "7th sem ETC");
  w0.winPrint(100, 210, "GHRCE");
  w0.winPrint(550, 190, "7th sem EE");
  w0.winPrint(550, 210, "YCCE");
  w0.winPrint(300, 260, "5th sem CT");
  w0.winPrint(300, 280, "YCCE");
  w0.winPrint(350, 350, "Guided By-");
  w0.GetSetForeColor(RGB(255, 0, 0));
  w0.winPrint(325, 370, "Khirwadkar Sir");
  w0.GetSetForeColor(RGB(0, 0, 0));
  w0.winPrint(200, 450, "Press ENTER to continue...");
  w0.kiteGetche(475, 450);
  w0.close();
  
  Mywin w1("KITE Aptitude Test", 100, 20, 600, 500);
  Button b1(w1, 'c', "Create", 145, 300);
  Button b2(w1, 'e', "Edit", 265, 300);
  Button b3(w1, 'q', "Quit", 360, 300);
  Alphabets test_name(100, 200, "Aptitude", 75);
  test_name.draw(w1, RGB(0, 0, 205));
  char ques[60],name[20], a1[30], a2[30], a3[30], a4[30];
  int n_que, l, c_ans;
  Database data[50];
  
  
  while(true)
  {
    p1 = w1.kiteGetch(ch);
    if(b1.is_clicked(w1, p1, ch))
    {
      w1.close();
      Mywin w2("KITE Aptitude Test", 100, 20, 600, 500);
      Alphabets test_name(250, 40, "Aptitude", 25);
      test_name.draw(w2, RGB(0, 0, 205));
      
      Textbox t1(w2, 30, 80, "Enter the name of the test: ", RGB(0, 0, 0), RGB(200, 200, 200), 20);
      Textbox t2(w2, 30, 120, "Number of questions: ", RGB(0, 0, 0), RGB(200, 200, 200), 3);
      t2.erase(w2);
      t1.draw(w2);
      l = w2.strpixlen("Enter the name of the test: ");
      w2.GetSetBackColor(RGB(200, 200, 200));
      w2.kiteGetstr(l + 50, 80, name, 20);
      w2.GetSetBackColor(RGB(255, 255, 255));
      t2.draw(w2);
      t2.getvalue(w2, 1, 50, n_que);
      //Database data[n_que];
      Button b1(w2, 'C', "Continue", 200, 350);
      p1 = w2.kiteGetch(ch);
      while(b1.is_clicked(w2, p1, ch))
      {
        w2.close();
	Mywin w3("KITE Aptitude Test", 100, 20, 800, 500);
        for(int i=0; i < n_que; ++i)
	{
	  Textbox t1(w3, 30, 80, "Question:  ", RGB(0, 0, 0), RGB(200, 200, 200), 60);
       	  Textbox t2(w3, 30, 130, "Option 1. ", RGB(0, 0, 0), RGB(200, 200, 200), 30);
	  Textbox t3(w3, 30, 160, "Option 2. ", RGB(0, 0, 0), RGB(200, 200, 200), 30);
	  Textbox t4(w3, 30, 190, "Option 3. ", RGB(0, 0, 0), RGB(200, 200, 200), 30);
	  Textbox t5(w3, 30, 220, "Option 4. ", RGB(0, 0, 0), RGB(200, 200, 200), 30);
	  Textbox t6(w3, 30, 250, "Correct Option: ", RGB(0, 0, 0), RGB(200, 200, 200), 2);
          w3.filledRectang(0, 0, 600,500, RGB(255, 255, 255));
	  t1.draw(w3);
          w3.GetSetBackColor(RGB(200, 200, 200));
          l = w3.strpixlen("Question:  ");
	  w3.kiteGetstr(l + 20, 80, ques, 60);
          w3.GetSetBackColor(RGB(255, 255, 255));
          t2.draw(w3);
          w3.GetSetBackColor(RGB(200, 200, 200));
          l = w3.strpixlen("Option 1. ");
          w3.kiteGetstr(l + 40, 130, a1, 30);
          w3.GetSetBackColor(RGB(255, 255, 255));
          t3.draw(w3);
          w3.GetSetBackColor(RGB(200, 200, 200));
          l = w3.strpixlen("Option 2. ");
          w3.kiteGetstr(l + 40, 160, a2, 30);
          w3.GetSetBackColor(RGB(255, 255, 255));
          t4.draw(w3);
          w3.GetSetBackColor(RGB(200, 200, 200));
          l = w3.strpixlen("Option 3. ");
          w3.kiteGetstr(l + 40, 190, a3, 30);
          w3.GetSetBackColor(RGB(255, 255, 255));
          t5.draw(w3);
          w3.GetSetBackColor(RGB(200, 200, 200));
          l = w3.strpixlen("Option 4. ");
          w3.kiteGetstr(l + 40, 220, a4, 30);
          w3.GetSetBackColor(RGB(255, 255, 255));
          t6.draw(w3);
          w3.GetSetBackColor(RGB(200, 200, 200));
          t6.getvalue(w3,1, 4, c_ans);
          w3.GetSetBackColor(RGB(255, 255, 255));
  	  data[i].setDatabase(ques, a1, a2, a3, a4, c_ans);
	  
	  Button b1(w3, 'n', "Next", 305, 350);
          p1 = w3.kiteGetch(ch);
	  if(b1.is_clicked(w3, p1, ch))
          ch = ch;
	
	  else
	  {
	    while(b1.is_clicked(w3, p1, ch) != true)
	    {
	      p1 = w3.kiteGetch(ch);
	    }
	  }
	
	
      }
  
//projecta.cpp

	ofstream f1;
	string filename1;
	filename1 = name;
	filename1 = filename1 + ".html";
	f1.open(filename1.c_str());
	if(!f1)
	{
		MessageBox(NULL, "could not open stud.dat file for output!", "fatal error", 0);
		exit(0);	
	}
	f1 << "<html>";
	f1 << endl;
	f1 << "<head><title>";
	f1 << "test";
	f1 << "</title>";
	f1 << endl;
	f1 << "<script language=\"javascript\">";
	f1 << endl;
       	f1 << "function show_result()";
	f1 << endl;
	f1 << "{";
	f1 << endl;
	for(int j=0; j < n_que; j++)
	{
        f1 << "var q";
	f1 << j+1;
	f1 << " = document.getElementsByName(\"rd_";
	f1 << j+1;
	f1 << "\")[";
	int corr_ans;
	corr_ans = data[j].getCorrect();
	corr_ans--;
	f1 << corr_ans;
	f1 << "];";
	f1 << endl;
	}
	f1 << "var marks = 0;";
	f1 << endl;
	for(int k=0; k < n_que; k++)
	{
	f1 << "if(q";
	f1 << k+1;
	f1 << ".checked)";
	f1 << endl;
	f1 << "marks = marks + 1;";
	f1 << endl;
	}
	f1 << "alert(\"You scored \"+marks+\" out of ";
	f1 << n_que;
	f1 << "\");";
	f1 << endl;
	f1 << "}";
	f1 << endl;

	f1 << "</script>";
	f1 << endl;
	f1 << "</head>";
	f1 << endl;
	f1 << "<body bgcolor=\"#ffdd33\">";
	f1 << endl;
	f1 << "<div align=\"center\">";
	f1 << endl;
	f1 << "<form name=\"test\"> ";
	f1 << endl;
	f1 << "<table border=\"1\" name=\"test\" width=\"900\" cellpadding=\"10\" >";
	f1 << endl;
	f1 << "<tr><td colspan=\"2\" align=\"center\" height=\"30\" style=\"font-weight:bold; font-size:35; font-face:Arial; color:#f00;\">";
	f1 << name;
	f1 << "</td></tr>"; 
	f1 << endl;
	for (int i=0; i < n_que; i++)
	{
	f1 << "<tr>";
	f1 << endl;
	f1 << "<td width=\"10\">";
	f1 << i+1;
	f1 << "</td>";
	f1 << endl;
	f1 << "<td width=\"870\">";
	f1 << data[i].getQues();
	f1 << "</td>";
	f1 << endl;
	f1 << "</tr>";
	f1 << endl;
	f1 << "<tr>";
	f1 << endl;
	f1 << "<td><input type=\"radio\" name=\"rd_";
	f1 << i+1;
	f1 << "\" value=\"a\"></td>";
	f1 << endl;
	f1 << "<td>";
	f1 << data[i].getAns1();
	f1 << "</td>";
	f1 << endl;
	f1 <<"</tr>";
	f1 << endl;
	f1 << "<tr>";
	f1 << endl;
	f1 << "<td><input type=\"radio\" name=\"rd_";
	f1 << i+1;
	f1 << "\" value=\"b\"></td>";
	f1 << endl;
	f1 << "<td>";
	f1 << data[i].getAns2();
	f1 << "</td>";
	f1 << endl;
	f1 << "</tr>";
	f1 << endl;
	f1 << "<tr>";
	f1 << endl;
	f1 << "<td><input type=\"radio\" name=\"rd_";
	f1 << i+1;
	f1 << "\" value=\"c\"></td>";
	f1 << endl;
	f1 << "<td>";
	f1 << data[i].getAns3();
	f1 << "</td>";
	f1 << endl;
	f1 << "</tr>";
	f1 << endl;
	f1 << "<tr>";
	f1 << endl;
	f1 << "<td><input type=\"radio\" name=\"rd_";
	f1 << i+1;
	f1 << "\" value=\"d\"></td>";
	f1 << endl;
	f1 << "<td>";
	f1 << data[i].getAns4();
	f1 << "</td>";
	f1 << endl;
	f1 << "</tr>";
	f1 << endl;
	f1 << "<tr><td colspan=\"2\">&nbsp;</td></tr>";
	f1 << endl;
	}
	f1 << "<tr><td colspan=\"2\" align=\"right\"><input type=\"submit\" value=\"submit\" onclick=\"show_result()\" style=\"padding:0 5;\"></td></tr>";
	f1 << endl;
	f1 << "</table>";
	f1 << endl;
	f1 << "</form>";
	f1 << endl;
	f1 << "</div>";
	f1 << endl;
	f1 << "</body>";
	f1 << endl;
	f1 << "</html>";
	f1.close();
     
        w3.filledRectang(0, 0, 800,500, RGB(255, 255, 255));
        Button b3(w3, 'q', "Quit", 400, 350);
	p1 = w3.kiteGetch(ch);
	if(b3.is_clicked(w3, p1, ch))
        {
	//w3.close();    
	exit(1);
	}
    }
    b = true; 
  }  
    
   else if(b2.is_clicked(w1, p1, ch))
    {
     w1.close();
     Mywin w4("Future Devlopment Purpose",100, 20, 600,500);
     w4.winPrint(200, 250,"Reserved for future use...");
     w4.winPrint(100, 450,"Press ENTER to exit...");
     w4.kiteGetche(350, 450);
     exit(1);
    }
    else if(b3.is_clicked(w1, p1, ch))
    {
      w1.filledRectang(0, 0, 600,500, RGB(255, 255, 255));
      w1.winPrint(200, 250, "You clicked quit");
      exit(2);
    }
  }
  if(b == true)
  Mywin w1("KITE Aptitude Test", 100, 20, 600, 500);
  
  w1.winPrint(10, 490, "Press any key to quit...");
  w1.kiteGetche(380, 490);
}
