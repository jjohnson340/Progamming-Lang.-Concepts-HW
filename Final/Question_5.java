boolean flag = false;

for(i = 1; i <= n; i++) {

	//counter to be incsreased by 1 if element if zero
	int count = 0;

	for(j = 1; j <= n; j++) {

		if(x[i][j] == 0)
			count++;
	}
	//if count == number of rows and flag is false,
	//first all-zero row found
	if(count == n && flag == false){
		System.out.println("First all-zero row is:" + i);
		flag = true;
	}
}