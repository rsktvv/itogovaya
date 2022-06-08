#include <iostream>
#include "matrix.hpp"
void Output()
{
	std::cout << "Press 0 to exit the programm" << std::endl;
	std::cout << "Press 1 for matrix addition" << std::endl;
	std::cout << "Press 2 for matrix subtraction" << std::endl;
	std::cout << "Press 3 for matrix multiplication" << std::endl;
	std::cout << "Press 4 for using the Gauss method" << std::endl;
	std::cout << "Press 5 for checking the dependence of vectors" << std::endl;
	std::cout << "Press 6 for finding the reverse matrix" << std::endl;
	std::cout << "Press 7 for finding the transposition matrix" << std::endl;
	std::cout << "Press 8 for findint the determinant for 2x2 or 3x3 type matrix" << std::endl;
}

int main()
{
	int p = 0;
	int n, m;
	Output();
	std::cin >> p;

	while (p != 0)
	{
		if ((p > 8) && (p < 0))
		{
			Output();
		}

		if (p == 1)
		{
			std::cout << "The number of lines and columns of matrix A: " << std::endl;
			std::cin >> n >> m;

			Matrix A(n, m);
			std::cout << "Type A matrix: " << std::endl;
			std::cin >> A;

			std::cout << "The number of lines and columns of matrix B: " << std::endl;
			std::cin >> n >> m;

			Matrix B(n, m);
			std::cout << "Type B matrix: " << std::endl;
			std::cin >> B;

			std::cout << '\n';
			std::cout << A + B << std::endl;
			std::cout << '\n';

			Output();
			std::cin >> p;

		}

		if (p == 2)
		{
			std::cout << "The number of lines and columns of matrix A: " << std::endl;
			std::cin >> n >> m;

			Matrix A(n, m);
			std::cout << "Type A matrix: " << std::endl;
			std::cin >> A;

			std::cout << "The number of lines and columns of matrix B: " << std::endl;
			std::cin >> n >> m;

			Matrix B(n, m);
			std::cout << "Type B matrix: " << std::endl;
			std::cin >> B;

			std::cout << '\n';
			std::cout << A - B << std::endl;
			std::cout << '\n';

			Output();
			std::cin >> p;
		}

		if (p == 3)
		{
			std::cout << "The number of lines and columns of matrix A: " << std::endl;
			std::cin >> n >> m;

			Matrix A(n, m);
			std::cout << "Type A matrix: " << std::endl;
			std::cin >> A;

			std::cout << "The number of lines and columns of matrix B: " << std::endl;
			std::cin >> n >> m;

			Matrix B(n, m);
			std::cout << "Type B matrix: " << std::endl;
			std::cin >> B;

			std::cout << '\n';
			std::cout << A * B << std::endl;
			std::cout << '\n';

			Output();
			std::cin >> p;
		}

		if (p == 4)
		{
			std::cout << "The number of equations: " << std::endl;
			std::cin >> n;

			Matrix A(n, n);
			Matrix B(n, 1);

			std::cout << "Type the coefficients: " << std::endl;
			std::cin >> A;

			std::cout << "Type the free terms: " << std::endl;
			std::cin >> B;

			std::cout << '\n';
			A % B;
			std::cout << '\n';

			Output();
			std::cin >> p;
		}

		if (p == 5)
		{
			std::cout << "Type three vectors: " << std::endl;

			Matrix A(3, 3);
			std::cin >> A;

			std::cout << '\n';
			A.linear_dependence();
			std::cout << '\n';

			Output();
			std::cin >> p;
		}

		if (p == 6)
		{
			std::cout << "The number of lines and columns of matrix A: " << std::endl;
			std::cin >> n >> m;

			Matrix A(n, m);
			std::cout << "Type A matrix: " << std::endl;
			std::cin >> A;

			std::cout << '\n';
			std::cout << A.reverse();
			std::cout << '\n';

			Output();
			std::cin >> p;
		}

		if (p == 7)
		{
			std::cout << "The number of lines and columns of matrix A: " << std::endl;
			std::cin >> n >> m;

			Matrix A(n, m);
			std::cout << "Type A matrix: " << std::endl;
			std::cin >> A;

			std::cout << '\n';
			std::cout << A.transposition(); 
			std::cout << '\n';

			Output();
			std::cin >> p;
		}

		if (p == 8)
		{
			std::cout << "The number of lines and columns of matrix A: " << std::endl;
			std::cin >> n >> m;

			Matrix A(n, m);
			std::cout << "Type A matrix: " << std::endl;
			std::cin >> A;

			std::cout << '\n';
			std::cout << A.DET(); 
			std::cout << '\n';

			Output();
			std::cin >> p;
		}
	}
	return 0;
}