/*MeroMathsSolver is a group project. */
#include<stdio.h>
#include<conio.h>
#include<string.h>
static int path;
static int admin=0;
/*Function Declaration part*/

void mybox(int, int, int,int);
void myline(int,int,int);
void header(int);
void main_scr();
void center(char str[80],int row);
void login();
void show_path();
void menu();




void show_path()
{
	//char p[30];
	gotoxy(5,5);
	if(path==0)
	{
		//p="LOGIN SCREEN";
		printf("%c%c Login %c",16,16,16);

	}
	else if(path==1)
	{
		//p="LOGIN SCREEN";
		printf("%c%c Login %c Menu %c",16,16,16,16);
	}


	else if(path==2)
	{
		//p="Unknown";
		printf("%c%c Login %c",16,16,16);
	}
	else if(path==3)
	{
		//p="LOGIN SCREEN";
		printf("%c%c Login %c Menu %c",16,16,16,16);
	}
	else if(path==4)
	{
		//p="LOGIN SCREEN";
		printf("%c%c Login %c Menu %c",16,16,16,16);
	}
	else if(path==5)
	{
		//p="LOGIN SCREEN";
		printf("%c%c Login %c Menu %c",16,16,16,16);
	}
	else if(path==6)
	{
		//p="LOGIN SCREEN";
		printf("%c%c Login %c Menu %c",16,16,16,16);
	}


}
/*Functions declared upto here*/


/*Function : Header*/
void header(int n)
{
	//int admin=0;
	clrscr();
	mybox(2,19,20,2);
	center("MERO MATHS SOLVER",2);
	center("NewBie TECH",3);
	//gotoxy(1,6);
	//myline(8,5,72);
	show_path();
	//gotoxy(1,7);
	//myline(8,5,70);
	gotoxy(1,6);
	mybox(1,5,65,17);
	gotoxy(62,2);
	if(n==1)
    {
	printf("Admin:Subash");
    }
    else if(n==2)
    {
	printf("Admin:Bishal");
    }
    else if(n==3)
    {
	printf("Admin:Mahesh");
    }
    else if(n==4)
    {
	printf("Admin:Anish");
    }
    else if(n==0)
    {
	printf("Admin:      ");
    }

	/*giving admin's name*/

	//admin=login();
	//login();

}


void login()
{
	int chk_user=0,i;
	char name[10],password[10],ch;
	//clrscr();
	path=0;
enter_again:
    header(0);
	center("Username:",9);
		gets(name);

	center("Password:",10);
	i=0;
	while(1)
		{
		password[i]=getch();
			if(password[i]==13)
			{
				break;
			}

		printf("*");
		i+=1;
		}
		password[i]='\0';
	/*admin checking part*/
	if((strcmp(name,"subash")==0)&&(strcmp(password,"subash")==0))
		{      // puts(name);
			chk_user=1;
			admin=1;
		}
	else if(strcmp(name,"bishal")==0&&strcmp(password,"bishal")==0)
		{
			chk_user=1;
			admin=2;
		}
		header(admin);
if(chk_user==1)
	{
	center("Loging In",12);
	center("ENTER ANY KEY!",13);
	getch();
	//return user;

	//welcome();
	}
else
	{
	center("Username or Password INCORRECT.",12);
	go:
	center("       Press ->1 to Enter Again",13);
	center("Press ->2 to Quit",14);
	gotoxy(39,13);
		ch=getche();
		if(ch=='1')
			{
			goto enter_again;
			}
		else if(ch=='2')
			{
			center("Thank You!",15);
			getch();
			exit(1);
			}
		else
			{
			goto go;
			}

	}
}













void center(char str[80],int row)
{

	gotoxy((80-strlen(str))/2,row);
	printf("%s",str);
}


void main()
{
	//clrscr();
	//mybox(3,1,25,7);
	//myline(2,20,40);
	//int a=0;
	header(0);
	login();
	menu();
	getch();

	/*

	clrscr();
	printf("THISISCHECKING PART\n");
	printf("%80s","ENDCheckingPART\n");
	for(a=0;a<80;a++)
	{
	printf("%d",1);
	}
	//printf("\n");
	mybox(1,5,65,19);  */
	//getch();
}
void menu()
{
	clrscr();
	path=1;
	header(admin);
	center("Main Options",7);
        //Menu Items Here
        gotoxy(34,8);
            myline(1,1,12);
        gotoxy(10,10);
            printf("1. Solution Of a Triangle");
        gotoxy(45,10);
            printf("2. Matrix and Determinants");
        gotoxy(10,12);
            printf("3. Solving Equations");
        gotoxy(45,12);
            printf("4. Permutations & Combinations");
        gotoxy(10,14);
            printf("5. Vector Solutions");
        gotoxy(45,14);
            printf("6. Conversions");
        gotoxy(10,16);
            printf("7. General Maths");
        gotoxy(45,16);
            printf("8. Magical Maths");
        gotoxy(6,18);
            myline(8,1,70);
        gotoxy(8,20);
            printf("*[L]- Logout");
        gotoxy(8,21);
            printf("*[A]- About Us");
        gotoxy(8,22);
            printf("*[ESC]- EXIT");



}








































































void mybox(int type,int start,int len,int wid)
{
	int i,j,k,a,b,c;
	int tol,tcl,bol,bcl,vl,hl;
	if(type==1)
		{
			tol=218;
			tcl=191;
			bol=192;
			bcl=217;
			vl=179;
			hl=196;
		}
	else if(type==2)
		{
			tol=201;
			tcl=187;
			bol=200;
			bcl=188;
			vl=186;
			hl=205;
		}
	else if(type==3)
		{
			tol=176;
			tcl=176;
			bol=176;
			bcl=176;
			vl=176;
			hl=176;
		}
	else if(type==4)
		{
			tol=177;
			tcl=177;
			bol=177;
			bcl=177;
			vl=177;
			hl=177;
		}
	else if(type==5)
		{
			tol=178;
			tcl=178;
			bol=178;
			bcl=178;
			vl=178;
			hl=178;
		}



	else
		{
			tol=248;
			tcl=248;
			bol=248;
			bcl=248;
			vl=248;
			hl=248;
		}


	//for starting row
	//Printing space before start
	for(i=0;i<start-1;i++)
		{
		printf(" ");
		}
	printf("%c",tol); //print opening L
		//printing line for 'len' times
	for(i=0;i<start+len;i++)
		{
		printf("%c",hl);
		}
	//printing Closing L in the top
	printf("%c",tcl);
	//for the middle lines
	for(j=0;j<wid;j++)
	{
		printf("\n");
		for(i=0;i<start-1;i++)
			{
			printf(" ");
			}
		printf("%c",vl);
		for(i=0;i<start+len;i++)
			{
			printf(" ");
			}
		printf("%c",vl);
	}


	//for ending row
	//Printing space before start
	printf("\n");
	for(i=0;i<start-1;i++)
		{
		printf(" ");
		}
	printf("%c",bol); //print closing L in the left of buttom
		//printing line for 'len' times
	for(i=0;i<start+len;i++)
		{
		printf("%c",hl);
		}
	//printing Closing L in the right of buttom
	printf("%c",bcl); //Your Box is Ready!!
	printf("\n");



}
void myline(int type,int start,int len)
{
	int i;
	int mid;
	if(type==1)
		{
			mid=196;
		}
	else if(type==2)
		{
			mid=205;
		}
	else if(type==3)
		{
			mid=220;
		}
	else if(type==4)
		{
			mid=45;
		}
	else if(type==5)
		{
			mid=254;
		}
	else if(type==6)
		{
			mid=176;
		}
	else if(type==7)
		{
			mid=177;
		}
	else if(type==8)
		{
			mid=45;
		}

	else
		{
			mid=219;
		}
	//printing space
	for(i=0;i<start-1;i++)
		{
			printf(" ");
		}
	//printing line
	for(i=0;i<len;i++)
		{
			printf("%c",mid);
		}

}
