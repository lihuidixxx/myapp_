void Awritetofile (LinkList headpoint)
{
	FILE* fp;
	Link pt;
	if (( fp = fopen( "Answers.txt", "w" )) == NULL )
	{
		printf("Cannot open the file!\n");
		exit(0);
	}
	pt = headpoint.head->next;
	int i=1;
	while( pt != NULL )
	{
		if(pt->data.fenhao == '\''&& pt->data.key != 0){
			fprintf( fp, "%d.", i );
			fprintf( fp, "%d", pt->data.key );
			fprintf( fp, "%c", pt->data.fenhao );
			fprintf( fp, "%d", pt->data.yushu);
			fprintf( fp, "%c", pt->data.chuhao );
			fprintf( fp, "%d\n", pt->data.chushu);
		}
		else if(pt->data.fenhao == '\''&&pt->data.key == 0)
		{
			fprintf( fp, "%d.", i );
			fprintf( fp, "%d", pt->data.yushu);
			fprintf( fp, "%c", pt->data.chuhao );
			fprintf( fp, "%d\n", pt->data.chushu);
		}
		else{
			fprintf( fp, "%d.", i );
			fprintf( fp, "%d\n", pt->data.key );
		}

		i++;
		pt = pt->next;
	}
	printf("Success!\n");
	fclose(fp);
}

void writetofile (LinkList headpoint)
{
	FILE* fp;
	Link pt;
	if (( fp = fopen( "Exercises.txt", "w" )) == NULL )
	{
		printf("Cannot open the file!\n");
		exit(0);
	}
	pt = headpoint.head->next;
	int i=1;
	while( pt != NULL )
	{
		fprintf( fp, "%d.", i );
		fprintf( fp, "%d", pt->data.onenum );
		fprintf( fp, "%c", pt->data.fuhao );
		fprintf( fp, "%d=\n", pt->data.twonum );
		i++;
		pt = pt->next;
	}
	printf("Success!\n");
	fclose(fp);
}
