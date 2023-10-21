#include<stdio.h>

int main() {
	int option,option2,point,total;
	int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10;
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11;
	printf("============================ Lets get to the Quizzz... ==========================\n");
	printf("Press 1 to start the quiz\n");
	printf("Press 2 to quit the quiz\n");
	scanf("%d",&option);
	if(option==2) {
		printf("You are exited with the game\n");
	}
	if(option>2 || option<1) {
		printf("Invalid Choice\n");
	}
    if(option==1) {
	    printf("I. Who is the father of C language?\n");
		printf("1. Steve Jobs\n");
		printf("2. James Gosling\n");
		printf("3. Dennis Ritchie\n");
		printf("4. Rasmus Lerdorf\n");
		printf("Enter your choice : ");
	    scanf("%d",&a1);
	    if(a1>0 && a1<5) {
	    	if(a1==3)
	    {
	    	printf("\nCorrect Answer\nExplanation: Dennis Ritchie is the father of C Programming Language.\n");
			printf("C programming language was developed in 1972 at American Telephone & Telegraph Bell Laboratories of USA.\n");
			p1=5;
		}
		else {
			printf("Incorrect Answer\n");
			printf("Go for next one \n");
			p1=0;
		}
		}
		else {
			printf("Invalid Choice\n");
		}
	    
		if(p1==5) {
			printf("You have gained 5 points\n\n");
		}
		else {
			printf("You have gained 0 points\n\n");
		}
		printf("========================================================\n\n");
		printf("II. Which of the following is not a valid C variable name?\n");
        printf("1. int number\n");
        printf("2. float rate\n");
        printf("3. int variable_count\n");
        printf("4. int $main\n");
        printf("Enter your choice: ");
        scanf("%d",&a2);
        
        if(a2>0 && a2<5) {
        	if(a2==4)
	    {
	    	printf("Correct Answer\n");
			printf("Explanation: Since only underscore and no other special character is allowed in a variable name\n");
			printf("it results in an error.\n");
			p2=5;
		}
		else {
			printf("Incorrect Answer\n");
			printf("Go for next one \n");
			p2=0;
		}
		}
		else {
			printf("Invalid Choice\n");
		}
        
		if(p2==5) {
			printf("You have gained 5 points\n\n");
		}
		else {
			printf("You have gained 0 points\n\n");
		}
		
		printf("=========================================================\n\n");
		printf("III. All keywords in C are in ____________\n");
        printf("1. LowerCase letters\n");
        printf("2. UpperCase letters\n");
        printf("3. CamelCase letters\n");
        printf("4. None of the mentioned\n");
        scanf("%d",&a3);
        
        if(a3>0 && a3<5) {
        	if(a3==1)
	    {
	    	printf("Correct Answer\n");
	    	printf("Explanation: None\n");
			p3=5;
		}
		else {
			printf("Incorrect Answer\n");
			printf("Go for next one \n");
			p3=0;
		}
		
		}
		else {
			printf("Invalid Choice\n");
		}
        
		if(p3==5) {
			printf("You have gained 5 points\n\n");
		}
		else {
			printf("You have gained 0 points\n\n");
		}
		printf("=========================================================\n\n");
		printf("IV. Which is valid C expression?\n");
        printf("1. int my_num = 100,000\n");
        printf("2. int my_num = 100000\n");
        printf("3. int my num = 1000\n");
        printf("4. int $my_num = 10000\n");
        printf("Enter your choice: ");
        scanf("%d",&a4);
        
        if(a4>0 && a4<5) {
        	if(a4==2)
	    {
	    	printf("Correct Answer\n");
	    	printf("Explanation: Space, comma and $ cannot be used in a variable name.\n");
			p4=5;
		}
		else {
			printf("Incorrect Answer\n");
			printf("Go for next one \n");
			p4=0;
		}
		}
		else {
			printf("Invalid Choice");
		}
		if(p4==5) {
			printf("You have gained 5 points\n\n");
		}
		else {
			printf("You have gained 0 points\n\n");
		}
		printf("=======================================================\n\n");
		printf("V. Which of the following cannot be a variable name in C?\n");
        printf("1. volatile\n");
        printf("2. true\n");
        printf("3. friend\n");
        printf("4. export\n");
        printf("Enter your choice: ");
        scanf("%d",&a5);
        
        if(a5>0 && a5<5) {
        	 if(a5==1)
	    {
	    	printf("Correct Answer\n");
	    	printf("Explanation: volatile is C keyword.\n");
			p5=5;
		}
		else {
			printf("Incorrect Answer\n");
			printf("Go for next one \n");
			p5=0;
		}
		}
		else {
			printf("Invalid Choice\n");
		}
	    
		if(p5==5) {
			printf("You have gained 5 points\n\n");
		}
		else {
			printf("You have gained 0 points\n\n");
		}
		printf("========================================================\n\n");
		printf("VI.What is short int in C programming?\n");
        printf("1. The basic data type of C\n");
        printf("2. Qualifier\n");
        printf("3. Short is the qualifier and int is the basic data type\n");
        printf("4. All of the mentioned\n");
        printf("Enter your choice: ");
        scanf("%d",&a6);
        
        if(a6>0 && a6<5) {
        	if(a6==3)
	    {
	    	printf("Correct Answer\n");
	    	printf("Explanation: None.\n");
			p6=5;
		}
		else {
			printf("Incorrect Answer\n");
			printf("Go for next one \n");
			p6=0;
		}
		}
		else {
			printf("Invalid Choice\n");
		}
        
		if(p6==5) {
			printf("You have gained 5 points\n\n");
		}
		else {
			printf("You have gained 0 points\n\n");
		}
		printf("====================================================\n\n");
		printf("VII.Which of the following declaration is not supported by C language?\n");
        printf("1. String str;\n");
        printf("2. char *str;\n");
        printf("3. float str = 3e2;\n");
        printf("4. Both String str; and float str = 3e2;\n");
        printf("Enter your choice: ");
        scanf("%d",&a7);
        
        if(a7>0 && a7<5) {
        	if(a7==1)
	    {
	    	printf("Correct Answer\n");
	    	printf("Explanation: It is legal in Java, but not in C language.\n");
			p7=5;
		}
		else {
			printf("Incorrect Answer\n");
			printf("Go for next one \n");
			p7=0;
		}
		}
		else {
			printf("Invalid Choice\n");
		}
        
		if(p7==5) {
			printf("You have gained 5 points\n\n");
		}
		else {
			printf("You have gained 0 points\n\n");
		}
		printf("======================================================\n\n");
		printf("VIII.Which keyword is used to prevent any changes in the variable within a C program?\n");
        printf("1. immutable\n");
        printf("2. mutable\n");
        printf("3. const\n");
        printf("4. volatile\n");
        printf("Enter your choice: ");
        scanf("%d",&a8);
        
        if(a8>0 && a9<5) {
        	if(a8==3)
	    {
	    	printf("Correct Answer\n");
	    	printf("Explanation: const is a keyword constant in C program.\n");
			p8=5;
		}
		else {
			printf("Incorrect Answer\n");
			printf("Go for next one \n");
			p8=0;
		}
		}
		else {
			printf("Invalid Choice\n");
		}
        
		if(p8==5) {
			printf("You have gained 5 points\n\n");
		}
		else {
			printf("You have gained 0 points\n\n");
		}
		printf("================================================\n\n");
		printf("IX.Which of the following typecasting is accepted by C language?\n");
        printf("1. Widening conversions\n");
        printf("2. Narrowing conversions\n");
        printf("3. Widening & Narrowing conversions\n");
        printf("4. None of the mentioned\n");
        printf("Enter your choice: ");
        scanf("%d",&a9);
        
        if(a9>0 && a9<5) {
        	if(a9==3)
	    {
	    	printf("Correct Answer\n");
	    	printf("Explanation: None.\n");
			p9=5;
		}
		else {
			printf("Incorrect Answer\n");
			printf("Go for next one \n");
			p9=0;
		}
		}
		else {
			printf("Invalid Choice\n");
		}
        
		if(p9==5) {
			printf("You have gained 5 points\n\n");
		}
		else {
			printf("You have gained 0 points\n\n");
		}
		printf("====================================================\n\n");
		printf("X.What is an example of iteration in C??\n");
        printf("1. for\n");
        printf("2. while\n");
        printf("3. do-while\n");
        printf("4. all of the mentioned\n");
        printf("Enter your choice: ");
        scanf("%d",&a10);
        
        if(a10>0 && a10<5) {
        	if(a10==4)
	    {
	    	printf("Correct Answer\n");
	    	printf("Explanation: None.\n");
			p10=5;
		}
		else {
			printf("Incorrect Answer\n");
			printf("Go for next one \n");
			p10=0;
		}
		}
		else {
			printf("Invalid Choice\n");
		}
		if(p10==5) {
			printf("You have gained 5 points\n\n");
		}
		else {
			printf("You have gained 0 points\n\n");
		}
		printf("=====================================================\n\n");
		printf("Do you want to end this quiz?\n");
		printf("1. Yes\n");
		printf("2. Ahh Yes!\n");
		printf("3. Surely\n");
		printf("4. Stop the quiz now\n");
		printf("Enter your choice : ");
		scanf("%d",&a11);
		
		if(a11>0 && a11<5) {
			if(a11==1 || a11==2 || a11==3 || a11==4)
		{
			printf("The quiz has ended\n");
			printf("====================================================\n");
		
		total = p1+p2+p3+p4+p5+p6+p7+p8+p9+p10;
		if(total==50) {
			printf("Congrats! Your hardwork paid off.\n");
			printf("Your points are %d",total);
		}
		else if(total>10 && total<=20)
		{
			printf("Needs Improvement\n");
			printf("Your points are %d",total);
		}
		else if(total>20 && total<=30)
		{
			printf("Good!\n");
			printf("Your points are %d",total);
		}
		else if(total>30 && total<=40)
		{
			printf("Excellent!\n");
			printf("Your points are %d",total);
		}
		else if(total>40 && total<50)
		{
			printf("Outstanding \n");
			printf("Your points are %d",total);
		}
		else {
			printf("You seriously need a good teacher!\n");
			printf("Your points are %d",total);
		}
		
		}
		
		}
		else {
			printf("Invalid Choice\n");
		}
			
	}
	return 0;
}

