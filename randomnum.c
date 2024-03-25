int randomnum(int max)
{
	int  min = 0;
	//srand(( unsigned int ) time ( NULL ));
	int random_number = min + rand() % ( max - min +1 );
	return random_number;
}

char randomchar()
{
	int randomnum(int max);
	int m = randomnum(3);
	char sign;
	switch(m){
		case 0: sign = '+';
		break;
		case 1: sign = '-';
		break;
		case 2: sign = '*';
		break;
		case 3: sign = '/';
		break;
		default: printf("Error!\n");
	}
	return sign;
}
