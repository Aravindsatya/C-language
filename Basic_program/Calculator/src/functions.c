//Method for adding two numbers
int addTwoNum(int num1,int num2,int *res) {

        *res = num1+num2;
        return 0;
}

//Method for subtract Two numbers
int subTwoNum(int num1,int num2, int *res) {

        *res = num1 - num2;
        return 0;
}

//Method for division of Two Numbers
int divTwoNum(int num1,int num2,int *res) {

        if(num2 == 0 || num1 == 0) {
		return 1;
        }
        else {
                *res =(int) (num1/num2);
        }
        return 0;
}

//Method for Multiply two Numbers
int mulTwoNum(int num1,int num2,int *res) {

        *res = num1 * num2;
        return 0;
}
