#include<iostream>
#include<fstream>
#include<string>
#include <cstdlib>
//#include <Commctrl.h>
#include <windows.h>
using namespace std;

enum { ID_LABEL = 1,ID_IMAGE,ID_EDIT,ID_LIST,ID_BUTTON,ID_COMBO, ID_BUTTON2, ID_BUTTON3, ID_BUTTON4, ID_EDITTEXT, ID_EDITTEXT1 };
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

	char ques[90],name[20], a1[30], a2[30], a3[30], a4[30];
	int n_que, l, c_ans;
	Database data[50];
  

	HDC hdc, hdc1;
	HWND button, button2, button3, button4, edit1, edit2;
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
		if(a){	
	case WM_SIZE:
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
			break;
		}
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
				if(!GetWindowText( edit1, buf, 100))
				{
					wsprintf(str, L"Error code: %d", GetLastError());
					MessageBox(hwnd, str, L"Error", MB_OK);
					break;
				}
				
				
			break;
		}
		break;
	
	case WM_APP:
		
		FillRect(hdc1, &lprc , (HBRUSH)GetStockObject( WHITE_BRUSH));
		
		
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