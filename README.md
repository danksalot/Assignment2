# Assignment2
In this project you are going to create a program which will evaluate the performance of a class. This class can have anywhere between 3 and 10 students. Each of the student would be required to take 5 subjects. These are COSC1, COSC2, COSC3, COSC4, and COSC5. This is how your program would work.

Here is an example output.

 

How many students are in class: 5

 

Enter the name of the student 1:S0001

Let us get the score of the student 1 for COSC1: 90

Let us get the score of the student 1 for COSC2: 98

Let us get the score of the student 1 for COSC3: 97

Let us get the score of the student 1 for COSC4: 87

Let us get the score of the student 1 for COSC5: 99

 

Enter the name of the student 2:S0002

Let us get the score of the student 2 for COSC1: 88

Let us get the score of the student 2 for COSC2: 80

Let us get the score of the student 2 for COSC3: 87

Let us get the score of the student 2 for COSC4: 80

Let us get the score of the student 2 for COSC5: 85

 

Enter the name of the student 3:S0003

Let us get the score of the student 3 for COSC1: 78

Let us get the score of the student 3 for COSC2: 79

Let us get the score of the student 3 for COSC3: 78

Let us get the score of the student 3 for COSC4: 80

Let us get the score of the student 3 for COSC5: 78

 

Enter the name of the student 4:S0004

Let us get the score of the student 4 for COSC1: 69

Let us get the score of the student 4 for COSC2: 68

Let us get the score of the student 4 for COSC3: 65

Let us get the score of the student 4 for COSC4: 64

Let us get the score of the student 4 for COSC5: 59

 

Enter the name of the student 5:S0005

Let us get the score of the student 5 for COSC1: 78

Let us get the score of the student 5 for COSC2: 35

Let us get the score of the student 5 for COSC3: 40

Let us get the score of the student 5 for COSC4: 32

Let us get the score of the student 5 for COSC5: 41

 

 

ID
	

COSC1
	

COSC2
	

COSC3
	

COSC4
	

COSC5
	

Total
	

Percent
	

Grade

S0001
	

90
	

98
	

97
	

87
	

99
	

471
	

94
	

A

S0002
	

88
	

80
	

87
	

80
	

85
	

420
	

84
	

B+

S0003
	

78
	

79
	

78
	

80
	

78
	

393
	

79
	

C+

S0004
	

69
	

68
	

65
	

64
	

59
	

325
	

65
	

D

S0005
	

78
	

35
	

40
	

32
	

41
	

226
	

45
	

F

 

 

The student final grade will be decided according to the following matrix:

 

1. If the student's average score is more than 90 and student's score is 90 or greater in each subject he gets an A+.

2. If the student's average score is more than 90 and student's score is less than 90 in any subject he gets an A.

3. If the student's average score is more than 80 and student's score is 80 or greater in each subject he gets a B+.

4. If the student's average score is more than 80 and student's score is less than 80 in any subject he gets a B.

5. If the student's average score is more than 70 and student's score is 70 or greater in each subject he gets a C+.

6. If the student's average score is more than 70 and students score is less than 70 in any subject he gets a C.

7. If the student's average score is more than 60 and student's score is 60 or greater in each subject he gets a D+.

8. If the student's average score is more than 60 and students score is less than 60 in any subject he gets a D.

9. If the student's average score is less than 60 he gets a F.

 

While writing the code you must do the following:

1.       Create a structure which holds the following information:

                        i.   student_id  should be able to store 5 characters;

                       ii.   cosc1_marks should be able to store int;

                     iii.   cosc2_marks should be able to store int;

                       iv.   cosc3_marks should be able to store int;

                        v.   cosc4_marks should be able to store int;

                       vi.   cosc5_marks should be able to store int;

                     vii.   StudentotalScore should be able to store int and is sum of all the marks in 5 subjects.

 

                    viii.   percentage for the total marks obtained;

                                                            ix.      grade  should be able to store 3 charecters;

2.       Create an array to store the information about the number of students which user inputs. This should be done dynamically using ‘new’ operator.

3.       Prompt the user and get the user input for the student id and marks. Make sure the student ID is 5 characters long, starts with ‘S’ following by 4 numbers. Make sure that marks entered are between 0 and 100.

4.       Store all the information in the array of structure declared in step 1 and 2.

5.       Display the information stored in the array.

6.       All the information when displayed should be right aligned
