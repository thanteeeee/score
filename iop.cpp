#include<iostream>
#include<string>
#include<iomanip>
using namespace std ;
void std_rec(int &nums,int id[10],int q[10],int m[10],int f[10]) ;
void viewall(int &nums,int id[10],int q[10],int m[10],int f[10]) ;
void view_id(int &nums,int id[10],int q[10],int m[10],int f[10]) ;
int main()
{
	int menu,nums ;
	int id[10],q[10],m[10],f[10] ;
	do{
		cout << "=============================\n" ;
		cout << "             MENU            \n" ;
		cout << "=============================\n" ;
		cout << "1.Input student records\n" ;
		cout << "2.Viwe all student records\n" ;
		cout << "3.Show a student by ID\n" ;
		cout << "4.Exit\n" ;
		cout << "Select menu : ";
		cin  >> menu ; 
		if (menu == 4 )
		{
			cout << "Exit program...\n" ;
		}
		else if(menu == 1)
		{
			std_rec(nums,id,q,m,f);
		}
		else if(menu == 2)
		{
			viewall(nums,id,q,m,f);
		}
		else if(menu == 3)
		{
			view_id(nums,id,q,m,f);
		}
	}while(menu != 4) ;
	



	return 0 ;
}
void std_rec(int &nums,int id[10],int q[10],int m[10],int f[10])
{
	cout << "Input Number of student : " ;
	cin  >> nums ;
	for(int n = 0 ; n < nums ; n++)
	{
		cout << "Number " << n+1 << endl ;
		cout << "Input Quiz : " ;
		cin  >> q[n] ;
		cout << "Input Midterm : " ; 
		cin  >> m[n] ;
		cout << "Input Final : " ;
		cin  >> f[n] ;
	}
}
void viewall(int &nums,int id[10],int q[10],int m[10],int f[10])
{
	cout << "------------------------------\n" ;
	cout << "StdID  Quiz  Midterm  Final\n" ;
	cout << "------------------------------\n" ;
	for(int n=0 ; n < nums ; n++)
	{
		cout << nums << setw(9) << q[n] << setw(7) << m[n] << setw(9) << f[n] << endl ; 
	}
	cout << "------------------------------\n" ;
}
void view_id(int &nums,int id[10],int q[10],int m[10],int f[10])
{
	int ID ;
	cout << "Input ID : " ;
	cin  >> ID ;
	for(int n=0 ; n < nums ; n++)
	{
		if(ID == n+1)
		{
		cout << "------------------------------\n" ;
		cout << "StdID  Quiz  Midterm  Final\n" ;
		cout << "------------------------------\n" ;
		for(int n=0 ; n < nums ; n++)
		{
			cout << n+1 << setw(9) << q[n] << setw(7) << m[n] << setw(9) << f[n] << endl ; 
		}
		cout << "------------------------------\n" ;
		}
		else 
		{
			cout << "Your ID is not found\n" ;
			break ;
		}
	}
	

}
