#include<iostream>
#include<fstream>
#include<string>
#include <cstdlib>
//#include <Commctrl.h>
#include <windows.h>
using namespace std;

enum { ID_LABEL = 1,ID_IMAGE,ID_EDIT,ID_LIST,ID_BUTTON,ID_COMBO, ID_BUTTON2, ID_BUTTON3, ID_BUTTON4, ID_BUTTON5, ID_EDITTEXT, ID_EDITTEXT1, ID_EDITTEXT2, ID_EDITTEXT3, ID_EDITTEXT4, ID_EDITTEXT5, ID_EDITTEXT6 };
HINSTANCE gInstance, hInstance ;

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

	char ques[90],name[20], a1[30], a2[30], a3[30], a4[30], temp[100];
	int n_que, l, c_ans, i;
	int n_que_temp, i_temp;
	Database data[50];
  

	HDC hdc, hdc1;
	HWND button, button2, button3, button4, button5, edit1, edit2, edit3, edit4, edit5, edit6;
	bool a = true, b = true;
	BOOL UsedDefaultChar;
	int x,y;
	WCHAR str[100] , buf[100];
	PAINTSTRUCT lpPaint;
	RECT lprc;
	mbstate_t mbstate;
	
	SIZE pixel_len;


LRESULT CALLBACK myproc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	lprc.bottom = 0;
	lprc.left = 0;
	lprc.right = 700;
	lprc.top = 700;
	int l = 0;
	

	switch(uMsg)
	{
		
	case WM_SIZE:
			if(a){	
			x=LOWORD(lParam);
			y=HIWORD(lParam);
			hdc = GetDC(hwnd);
			TextOut(hdc, 150, 20, L"KHIRWADKAR INSTITUTE for TECHNOLOGICAL EXCELLENCE", wcslen(L"KHIRWADKAR INSTITUTE for TECHNOLOGICAL EXCELLENCE"));
			TextOut(hdc,300, 50, L"KITE Aptitude Test", wcslen(L"KITE Aptitude Test"));
			TextOut(hdc,325, 80, L"A Project By-" ,wcslen(L"A Project By-"));
			TextOut(hdc, 100, 100, L"Rohit Rokde",wcslen(L"Rohit Rokde"));
			TextOut(hdc, 550, 100, L"Nikhilesh Gupta",wcslen(L"Nikhilesh Gupta"));
			TextOut(hdc, 100,170, L"Suneet Raut",wcslen(L"Suneet Raut"));
			TextOut(hdc, 550, 170, L"Pallavi Belapurkar",wcslen(L"Pallavi Belapurkar"));
			TextOut(hdc, 300, 240, L"Priyanka Badwaik",wcslen(L"Priyanka Badwaik"));
			TextOut(hdc, 100, 120, L"7th sem ETC",wcslen(L"7th sem ETC"));
			TextOut(hdc, 100, 140, L"GHRCE",wcslen(L"GHRCE"));
			TextOut(hdc, 550, 120, L"7th sem EE",wcslen(L"7th sem EE"));
			TextOut(hdc, 550, 140, L"YCCE",wcslen(L"YCCE"));
			TextOut(hdc, 100, 190, L"7th sem ETC",wcslen(L"7th sem ETC"));
			TextOut(hdc, 100, 210, L"GHRCE",wcslen(L"GHRCE"));
			TextOut(hdc, 550, 190, L"7th sem EE",wcslen(L"7th sem EE"));
			TextOut(hdc, 550, 210, L"YCCE",wcslen(L"YCCE"));
			TextOut(hdc, 300, 260, L"5th sem CT",wcslen( L"5th sem CT"));
			TextOut(hdc, 300, 280, L"YCCE",wcslen(L"YCCE"));
			TextOut(hdc, 350, 350, L"Guided By-",wcslen(L"Guided By-"));
			TextOut(hdc, 325, 370, L"Khirwadkar Sir",wcslen(L"Khirwadkar Sir"));
			TextOut(hdc, 200, 450, L"Press ENTER to continue...",wcslen( L"Press ENTER to continue..."));
			
			ReleaseDC(hwnd, hdc);
				
			a = false;
			}
		break;

	case WM_CREATE:
				
		
//		CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("Textbox"), TEXT("Text here 12345"), WS_VISIBLE | WS_CHILDWINDOW | WS_BORDER | ES_AUTOHSCROLL, 100, 30, 300, 20, hwnd, (HMENU)ID_EDITTEXT, NULL, NULL);


		break;
	case WM_PAINT:
	
		break;

	case WM_LBUTTONDOWN:
	case WM_RBUTTONDOWN:		
	case WM_CHAR:
		if(b)
		{
			
			hdc1 = GetDC(hwnd);
			FillRect(hdc1, &lprc , (HBRUSH)GetStockObject( WHITE_BRUSH));
			ReleaseDC(hwnd, hdc1);
		
			button = CreateWindow(L"Button",L"Create",
			BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE , 145, 300,100,25,hwnd,(HMENU)ID_BUTTON,hInstance,0);

			button2 = CreateWindow(L"Button",L"Edit",
			BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE ,265, 300,100,25,hwnd,(HMENU)ID_BUTTON2,hInstance,0);

			button3 = CreateWindow(L"Button",L"Quit",
			BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE ,385, 300,100,25,hwnd,(HMENU)ID_BUTTON3,hInstance,0);

			b = false;
		}
		break;

	case WM_COMMAND:

		switch(wParam)
		{
		case ID_BUTTON:
			SendMessage(hwnd, WM_APP, wParam, lParam);
			break;

		case ID_BUTTON2:
			MessageBox( hwnd, L"Reserved for future use", L"Window", MB_OK);
			break;

		case ID_BUTTON3:
			/*	if(!GetWindowText( edit1, buf, 100))
			{
				wsprintf(str, L"%d", GetLastError());
				MessageBox(hwnd, str, L"Window", MB_OK);
			}
			MessageBox(hwnd, buf, L"window button",MB_OK);
				*/
			SendMessage(hwnd, WM_CLOSE, wParam, lParam);
			break;

			case ID_BUTTON4:
				
				if(!GetWindowText( edit1, buf, 100))
				{
					wsprintf(str, L"Error code: %d", GetLastError());
					MessageBox(hwnd, str, L"Error", MB_OK);
					break;
				}

				WideCharToMultiByte( CP_ACP, 0, buf, wcslen(buf)+1, name, wcslen(buf)+1, 0, &UsedDefaultChar);
				/*MultiByteToWideChar(CP_ACP, 0, ques, strlen(ques)+1, str, strlen(ques)+1);
				MessageBox(hwnd, str, L"window button",MB_OK);*/
				if(!GetWindowText( edit2, buf, 100))
				{
					wsprintf(str, L"Error code: %d", GetLastError());
					MessageBox(hwnd, str, L"Error", MB_OK);
					break;
				}
				WideCharToMultiByte( CP_ACP, 0, buf, wcslen(buf)+1, a1, wcslen(buf)+1, 0, &UsedDefaultChar);
				n_que = atoi(a1);

				if( !(n_que > 0 && n_que < 51) )
				{
					MessageBox(hwnd, L"Number of questions should be between 1 to 50.", L"Error", MB_OK);
					break;
				}

				n_que_temp = n_que;
				DestroyWindow(button4);
				DestroyWindow(edit1);
				DestroyWindow(edit2);
				hdc = GetDC( hwnd );
				FillRect(hdc, &lprc , (HBRUSH)GetStockObject( WHITE_BRUSH));
				ReleaseDC(hwnd, hdc);
				button5 = CreateWindow(L"Button",L"Continue",
				BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE ,300, 300,100,25,hwnd,(HMENU)ID_BUTTON5,hInstance,0);
				
				SendMessage( hwnd, WM_APP+1, wParam, lParam);
				
			break;
			case ID_BUTTON5:
				//MessageBox(hwnd, L"B5", L"Win", MB_OK);
				SendMessage(hwnd, WM_APP+2, wParam, lParam);

			break;


		}
		break;
	
	case WM_APP:
		
		
		
		DestroyWindow(button);
		DestroyWindow(button2);
		DestroyWindow(button3);
		
		hdc = GetDC( hwnd );
		FillRect(hdc1, &lprc , (HBRUSH)GetStockObject( WHITE_BRUSH));
		TextOut(hdc, 250, 40, L"Aptitude", wcslen(L"Aptitude"));
		TextOut(hdc, 30, 80, L"Enter the name of the test: ",l = wcslen( L"Enter the name of the test: "));

		GetTextExtentPoint32( hdc, L"Enter the name of the test: ", l, &pixel_len );

		edit1 = CreateWindow( TEXT("EDIT"), buf, WS_VISIBLE | WS_CHILD | WS_BORDER  , pixel_len.cx + 50, 80, 300, 20, hwnd, (HMENU)ID_EDITTEXT,hInstance, 0);
		
		TextOut(hdc, 30, 120, L"Number of questions: ", l = wcslen(L"Number of questions: "));

		GetTextExtentPoint32( hdc, L"Number of questions: ", l, &pixel_len );

		edit2 = CreateWindow( TEXT("EDIT"), buf, WS_VISIBLE | WS_CHILDWINDOW | WS_BORDER | BS_TEXT , pixel_len.cx + 80, 120, 300, 20, hwnd, (HMENU)ID_EDITTEXT1, hInstance, 0);
		
		
		button4 = CreateWindow(L"Button",L"Continue",
		BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE ,300, 300,100,25,hwnd,(HMENU)ID_BUTTON4,hInstance,0);
	
		
		
		ReleaseDC( hwnd, hdc );
		break;

	case WM_APP+1:
			
		  if(n_que_temp)
		  {		
				
				hdc = GetDC( hwnd );
				FillRect(hdc, &lprc , (HBRUSH)GetStockObject( WHITE_BRUSH));
				/*MultiByteToWideChar(CP_ACP, 0, itoa(n_que_temp, a1, 10), strlen(a1)+1, str, strlen(a1)+1);
				MessageBox(hwnd, str, L"Test", MB_OK);
				*/
				strcpy( temp , "Question ");
				strcat(temp, itoa(++i,a1, 10));
				strcat(temp, ".");
				MultiByteToWideChar( CP_ACP, 0, temp, strlen(temp)+1, buf, strlen(temp)+1); 
				TextOut(hdc, 30, 80, buf,wcslen( buf ));
				TextOut(hdc, 30, 130, L"Option 1. ",wcslen( L"Option 1. "));
				TextOut(hdc, 30, 160, L"Option 2. ",wcslen( L"Option 2. "));
				TextOut(hdc, 30, 190, L"Option 3. ",wcslen( L"Option 3. "));
				TextOut(hdc, 30, 220, L"Option 4. ",wcslen( L"Option 4. "));
				TextOut(hdc, 30, 250, L"Correct Option: ",wcslen( L"Correct Option: "));
				edit1 = CreateWindow( TEXT("EDIT"), 0, WS_VISIBLE | WS_CHILD | WS_BORDER  ,  140, 80, 300, 20, hwnd, (HMENU)ID_EDITTEXT1,hInstance, 0);
				edit2 = CreateWindow( TEXT("EDIT"), 0, WS_VISIBLE | WS_CHILD | WS_BORDER  ,  140, 130, 300, 20, hwnd, (HMENU)ID_EDITTEXT2,hInstance, 0);
				edit3 = CreateWindow( TEXT("EDIT"), 0, WS_VISIBLE | WS_CHILD | WS_BORDER  ,  140, 160, 300, 20, hwnd, (HMENU)ID_EDITTEXT3,hInstance, 0);
				edit4 = CreateWindow( TEXT("EDIT"), 0, WS_VISIBLE | WS_CHILD | WS_BORDER  ,  140, 190, 300, 20, hwnd, (HMENU)ID_EDITTEXT4,hInstance, 0);
				edit5 = CreateWindow( TEXT("EDIT"), 0, WS_VISIBLE | WS_CHILD | WS_BORDER  ,  140, 220, 300, 20, hwnd, (HMENU)ID_EDITTEXT5,hInstance, 0);
				edit6 = CreateWindow( TEXT("EDIT"), 0, WS_VISIBLE | WS_CHILD | WS_BORDER  ,  140, 250, 300, 20, hwnd, (HMENU)ID_EDITTEXT6,hInstance, 0);
				

				ReleaseDC( hwnd, hdc );
		  }
		
		
		break;

	case WM_APP+2:
		if(n_que_temp - 1)
		{

			if(!GetWindowText( edit1, buf, 100))
			{
				wsprintf(str, L"Error code: %d", GetLastError());
				MessageBox(hwnd, str, L"Error", MB_OK);
				break;
			}

			WideCharToMultiByte( CP_ACP, 0, buf, wcslen(buf)+1, ques, wcslen(buf)+1, 0, &UsedDefaultChar);

			if(!GetWindowText( edit2, buf, 100))
			{
				wsprintf(str, L"Error code: %d", GetLastError());
				MessageBox(hwnd, str, L"Error", MB_OK);
				break;
			}

			WideCharToMultiByte( CP_ACP, 0, buf, wcslen(buf)+1, a1, wcslen(buf)+1, 0, &UsedDefaultChar);

			if(!GetWindowText( edit3, buf, 100))
			{
				wsprintf(str, L"Error code: %d", GetLastError());
				MessageBox(hwnd, str, L"Error", MB_OK);
				break;
			}

			WideCharToMultiByte( CP_ACP, 0, buf, wcslen(buf)+1, a2, wcslen(buf)+1, 0, &UsedDefaultChar);

			if(!GetWindowText( edit4, buf, 100))
			{
				wsprintf(str, L"Error code: %d", GetLastError());
				MessageBox(hwnd, str, L"Error", MB_OK);
				break;
			}

			WideCharToMultiByte( CP_ACP, 0, buf, wcslen(buf)+1, a3, wcslen(buf)+1, 0, &UsedDefaultChar);

			if(!GetWindowText( edit5, buf, 100))
			{
				wsprintf(str, L"Error code: %d", GetLastError());
				MessageBox(hwnd, str, L"Error", MB_OK);
				break;
			}

			WideCharToMultiByte( CP_ACP, 0, buf, wcslen(buf)+1, a4, wcslen(buf)+1, 0, &UsedDefaultChar);

			if(!GetWindowText( edit6, buf, 100))
			{
				wsprintf(str, L"Error code: %d", GetLastError());
				MessageBox(hwnd, str, L"Error", MB_OK);
				break;
			}

			WideCharToMultiByte( CP_ACP, 0, buf, wcslen(buf)+1, temp, wcslen(buf)+1, 0, &UsedDefaultChar);

			c_ans = atoi(temp);

			if( !(c_ans > 0 && c_ans < 5) )
			{
				MessageBox(hwnd, L"Correct option should be between 1 to 4.", L"Error", MB_OK);
				break;
			}
			
			SetWindowText( edit1, L"");
			SetWindowText( edit2, L"");
			SetWindowText( edit3, L"");
			SetWindowText( edit4, L"");
			SetWindowText( edit5, L"");
			SetWindowText( edit6, L"");

			lprc.left = 30;
			lprc.right = 140;
			lprc.top = 80;
			lprc.bottom = 130;

			hdc = GetDC( hwnd );
			FillRect(hdc, &lprc , (HBRUSH)GetStockObject( WHITE_BRUSH));			
			

			strcpy( temp , "Question ");
			strcat(temp, itoa(++i,a1, 10));
			strcat(temp, ".");
			MultiByteToWideChar( CP_ACP, 0, temp, strlen(temp)+1, buf, strlen(temp)+1); 
			TextOut(hdc, 30, 80, buf,wcslen( buf ));
			
			ReleaseDC( hwnd, hdc );

			SendMessage( hwnd, WM_APP+3, wParam, lParam);

			--n_que_temp;
		}
		else
		{		
			SendMessage( hwnd, WM_APP+3, wParam, lParam);

			hdc = GetDC( hwnd );
			FillRect(hdc, &lprc , (HBRUSH)GetStockObject( WHITE_BRUSH));
			
			DestroyWindow(button5);
			DestroyWindow(edit1);
			DestroyWindow(edit2);
			DestroyWindow(edit3);
			DestroyWindow(edit4);
			DestroyWindow(edit5);
			DestroyWindow(edit6);
			TextOut(hdc, 270, 270, L"HTML file created.",wcslen( L"HTML file created."));
			ReleaseDC( hwnd, hdc );
			
			button3 = CreateWindow(L"Button",L"Quit",
			BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE ,385, 300,100,25,hwnd,(HMENU)ID_BUTTON3,hInstance,0);

		}


		break;
	case WM_APP+3:
			
		break;

	case WM_DESTROY:
		//MessageBox(hwnd,L"window destroyed ",L"window",MB_OK);
		PostQuitMessage(0);
		break;

	case  WM_CLOSE:
		//MessageBox(hwnd, buf, L"window button",MB_OK);
		
		DestroyWindow(hwnd);
		
		break;
	
	
	}
	return DefWindowProc(hwnd,uMsg,wParam,lParam);
}


int APIENTRY WinMain( HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow
)
{

 
	HWND hnd;
	
	
	MSG msg;
	WCHAR szname[]=L"classess",szna[]=L"aaaaa";
	//class 1
	WNDCLASS wndclass;	
	wndclass.cbClsExtra=0;
	wndclass.cbWndExtra=0;
	wndclass.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.hCursor=LoadCursor(NULL,IDC_HAND);
	wndclass.hIcon=LoadIcon(NULL,IDI_APPLICATION);

	wndclass.hInstance=hInstance;
	gInstance=hInstance;
	wndclass.lpfnWndProc=myproc;
	wndclass.lpszClassName=szname;
	//for ques1    wndclass.lpszMenuName=MAKEINTRESOURCE(IDR_MENU1);

	wndclass.lpszMenuName=L"KITE Aptitude Test";
	wndclass.style=CS_VREDRAW|CS_HREDRAW|CS_DBLCLKS;


	if(!RegisterClass(&wndclass))
	{
		MessageBox(NULL,L"NOT REGISTERED",L"REGISTRATION FAILED",MB_OKCANCEL);

	}
	//for question 2
	//hmenu=LoadMenu(hInstance,MAKEINTRESOURCE(IDR_MENU1));
	//hnd=CreateWindow(szname,L"cdac",WS_OVERLAPPEDWINDOW,200,200,400,400,NULL,hmenu,NULL,NULL);
	hnd=CreateWindow(szname,L"KITE Aptitude Test",WS_OVERLAPPEDWINDOW,100,100,800,600,NULL,NULL,NULL,NULL);
	if(hnd==NULL)
	{
		MessageBox(NULL,L"CREATE WINDOW FAILED",L"CREATE FAILED",MB_OK);

	}
	
	ShowWindow(hnd,SW_SHOW);


	UpdateWindow(hnd);



	while(GetMessage(&msg,NULL,0,0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);

	}


  return 0;
}