#include<iostream>
int main() {
	setlocale(LC_ALL, "rus");
	//Home work 10.1
	std::cout << "\n\n\t\tHome work 10.1\n\n";
	int n,min,min1;
	std::cout<<"Enter " << 1 << " number -> ";
	std::cin >> n;
	min = n;
	 min1=n;
	for (int i = 2; i <= 3; i++) {
		std::cout << "Enter " << i << " number -> ";
		std::cin >> n;
		if (n <= min)
			n = min;
		else  min = min1;
	}
		
	std::cout <<"Min is " << min;


		//Home work 10.2
		std::cout << "\n\n\t\tHome work 10.2\n\n";
		std::cout << "Enter namber -> ";
		unsigned int n1,m,mak;
		
		std::cin >> n1;
		for(int i=0;i<n1;i++){
			if (i == 0) {
				std::cout << "Enter number -> ";
				std::cin >> m;
				mak = m;
			}
			std::cout<< "Enter number -> ";
			std::cin >> m;
			if (mak > m)
				std::cout << "Previous more "<<std::endl;
			else if (mak<m)
				std::cout << "Previous less " << std::endl;
			else
				std::cout << "Previous equal " << std::endl;
		}
		
		
		//Home work 10.2
		std::cout << "\n\n\t\tHome work 10.3\n\n";
		int a, b,c;
		std::cout << "Enter namber A -> ";
		std::cin >> a;
		std::cout << "Enter namber B -> ";
		std::cin >> b;
		c = a;
		if (b == 0)
			std::cout << "A ^ B" << " = 1";
		else if (b > 0) {
			for (int i = 1; i <= b; i++) {
				c =c*a;
			}
			std::cout << "A ^ B" << " = " << c;

		}
		else if(b==1)
			std::cout << "A ^ B" << a;
		else std::cout << "Error!!!";
	return 0;
}