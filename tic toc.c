#include<iostream>
using namespace std;
char marck[3][3]={'1','2','3','4','5','6','7','8','9'};
int i,j,x=0;
char player='X';
int arr[9]={0};
void draw()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<" "<<marck[i][j]<<" ";
		cout<<endl;
	}
}
bool win()
{
	if(marck[0][0]==player&&marck[0][1]==player&&marck[0][2]==player)
		return true;
	if(marck[1][0]==player&&marck[1][1]==player&&marck[1][2]==player)
		return true;
	if(marck[2][0]==player&&marck[2][1]==player&&marck[2][2]==player)
		return true;
	if(marck[0][0]==player&&marck[1][0]==player&&marck[2][0]==player)
		return true;
	if(marck[0][1]==player&&marck[1][1]==player&&marck[2][1]==player)
		return true;
	if(marck[0][2]==player&&marck[1][2]==player&&marck[2][2]==player)
		return true;
	if(marck[0][0]==player&&marck[1][1]==player&&marck[2][2]==player)
		return true;
	if(marck[0][2]==player&&marck[1][1]==player&&marck[2][0]==player)
		return true;
	return false;
}
int searsh(int pos)
{
	for(j=0;j<9;j++)
		if(arr[j]==pos)
			return 1;
	return 0;
}
int input()
{
	int pos;
	cout<<"pleas enter your position :";cin>>pos;
	if(searsh(pos))
	{
		cout<<"it is full place try agayn"<<endl;
		return 0;
	}
	switch (pos)
	{
		case 1:
			marck[0][0]=player;
			break;
		case 2:
			marck[0][1]=player;
			break;
		case 3:
			marck[0][2]=player;
			break;
		case 4:
			marck[1][0]=player;
			break;
		case 5:
			marck[1][1]=player;
			break;
		case 6:
			marck[1][2]=player;
			break;
		case 7:
			marck[2][0]=player;
			break;
		case 8:
			marck[2][1]=player;
			break;
		case 9:
			marck[2][2]=player;
			break;
		default:
			{
			cout<<"sory the numper from 1 to 9"<<endl;
			return 0;
			}
	}
	arr[x]=pos;
	x++;
	return 1;
}
void checkp()
{
	if(player=='X')
		player='O';
	else
		player='X';
}

int main()
{
	draw();
	while (true)
	{
		if(x>=9)
		{
			cout<<"it's drawn"<<endl;
			system("pause");
			return 0;
		}
		if(!input())
			continue;
		draw();
		if(win())
		{
			cout<<"player  "<<player<<"   is win"<<endl;
			break;
		
		}
		checkp();
	}
	system("pause");
	return 0;
}