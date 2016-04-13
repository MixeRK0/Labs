#include<stdio.h>
#include<conio.h>
#include<limits.h>

void main()
{
	char CMax, CMin, CVal, LMax2C, LMin2C, LVal2C;
	short int CMax2ShInt, CMin2ShInt, CVal2ShInt, LMax2ShInt, LMin2ShInt, LVal2ShInt;
	int CMax2Int, CMin2Int, CVal2Int, LMax2Int, LMin2Int, LVal2Int, IntMax, IntMin;
	long CMax2Long, CMin2Long, CVal2Long, LMax, LMin, LVal;

	unsigned char uCMax, uCMin, uCVal, uLMax2C, uLMin2C, uLVal2C;
	unsigned short int uCMax2ShInt, uCMin2ShInt, uCVal2ShInt, uLMax2ShInt, uLMin2ShInt, uLVal2ShInt;
	unsigned int uCMax2Int, uCMin2Int, uCVal2Int, uLMax2Int, uLMin2Int, uLVal2Int, uIntMax, uIntMin;
	unsigned long uCMax2Long, uCMin2Long, uCVal2Long, uLMax, uLMin, uLVal;

	clrscr();

	CMax2Long = CMax2Int = CMax2ShInt = CMax = CHAR_MAX;
	CMin2Long = CMin2Int = CMin2ShInt = CMin = CHAR_MIN;
	CVal2Long = CVal2Int = CVal2ShInt = CVal = -23;
	printf("Max:signed char=%d signed short int=%hd signed int=%d sign.long=%ld\n", CMax, CMax2ShInt, CMax2Int, CMax2Long);
	printf("Min:signed char=%d signed short int=%hd signed int=%d sign.long=%ld\n", CMin, CMin2ShInt, CMin2Int, CMin2Long);
	printf("Pr.:signed char=%d signed short int=%hd signed int=%d sign.long=%ld\n", CVal, CVal2ShInt, CVal2Int, CVal2Long);

	uCMax2Long = uCMax2Int = uCMax2ShInt = uCMax = uCHAR_MAX;
	uCMin2Long = uCMin2Int = uCMin2ShInt = uCMin = 0;
	uCVal2Long = uCVal2Int = uCVal2ShInt = uCVal = 223;
	printf("Max:unsign.char=%u unsign.short int=%hu unsigned int=%u unsign.long=%lu\n", uCMax, uCMax2ShInt, uCMax2Int, uCMax2Long);
	printf("Min:unsign.char=%u unsign.short int=%hu unsigned int=%u unsign.long=%lu\n", uCMin, uCMin2ShInt, uCMin2Int, uCMin2Long);
	printf("Pr.:unsign.char=%u unsign.short int=%hu unsigned int=%u unsign.long=%lu\n", uCVal, uCVal2ShInt, uCVal2Int, uCVal2Long);

	uLMax2C = uLMax2ShInt = uLMax2Int = uLMax = LONG_MAX;
	uLMin2C = uLMin2ShInt = uLMin2Int = uLMin = 0;
	uLVal2C = uLVal2ShInt = uLVal2Int = uLVal = 3000000000;
	printf("Max:unsig.long=%lu unsign.int=%u unsign.short=%hu unsign.char=%u\n", uLMax, uLMax2Int, uLMax2ShInt, uLMax2C);
	printf("Min:unsig.long=%lu unsign.int=%u unsign.short=%hu unsign.char=%u\n", uLMin, uLMin2Int, uLMin2ShInt, uLMin2C);
	printf("Pr.:unsig.long=%lu unsign.int=%u unsign.short=%hu unsign.char=%u\n", uLVal, uLVal2Int, uLVal2ShInt, uLVal2C);

	LMax2C = LMax2ShInt = LMax2Int = LMax = LONG_MAX;
	LMin2C = LMin2ShInt = LMin2Int = LMin = LONG_MIN;
	LVal2C = LVal2ShInt = LVal2Int = LVal = -71233;
	printf("Max:signed long=%ld signed int=%d sign.short int=%hd signed char=%d\n", LMax, LMax2Int, LMax2ShInt, LMax2C);
	printf("Min:signed long=%ld signed int=%d sign.short int=%hd signed char=%d\n", LMin, LMin2Int, LMin2ShInt, LMin2C);
	printf("Pr.:signed long=%ld signed int=%d sign.short int=%hd signed char=%d\n", LVal, LVal2Int, LMax2ShInt, LVal2C);

	getch();

	IntMax = INT_MAX;
	IntMin = INT_MIN;
	uIntMax = UINT_MAX;
	
	printf("\nSigned int MAX=%d  Signed int MAX+1=%d", IntMax, IntMax + 1);
	printf("\nUnsigned int MAX=%u  Unsigned int MAX+1=%d", uIntMax, uIntMax + 1);
	printf("\nSigned int MIN=%d  Signed int MIN-1=%d", IntMin, IntMin - 1);
	printf("\nUnsigned int MIN=%u  Unsigned int MIN-1=%u", uIntMin, uIntMin - 1);
	getch();
}
