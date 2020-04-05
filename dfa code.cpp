//CPP program for DFA accepting string of length 3 and starting at 1, ending at 0 with input (0,1)

#include<iostream>
#include<conio.h>
#define MAX 3

int main()
{	
	char st[MAX];
	
		std::cout << "Enter a character";
		std::cin >> st[0];
		
			if(st[0]!='1')
			{
				std::cout <<"\nString is unacceptable";
				std::cout << "\nString does not start with 1";
				getch();
				return 0;
			}
			
			for (int i = 1; i < MAX - 1; i++)
			{
				std::cout << "\nEnter a character";
				std::cin >> st[i];
			
					if(st[i] == '0' || st[i] == '1')
						continue;
				
					else
					{
						std::cout << "\nString is unacceptable";
						std::cout << "\nString contains character other than 0 and 1\n";
						getch();
						return 0;
					}
		}
		
		std::cout << "\nEnter a character";
		std::cin >> st[MAX-1];
		
			if(st[MAX-1]!='0')
			{
				std::cout << "\nString is unacceptable";
				std::cout << "\nString does not end with 0\n";
				getch();
				return 0; 
			}
			
			for( int i = 0; i < MAX; i++)
			{
				std::cout << st[i];
			}
			
			std::cout << "\nString is acceptable";
			getch();
			return 0;
}
