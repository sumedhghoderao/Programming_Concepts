program if_else
	implicit none
	
	integer::x
	character::GRADE
	
	print*, "Enter marks" ; read* ,x 
	if(x<50)then
	GRADE ='F'
	print*, "GRADE IS ",GRADE
	
	else if (x>=50 .and. x<60) then
	GRADE = 'D'
	print*, "GRADE IS ",GRADE
	
	else if (x>=60 .and. x<70) then
	GRADE = 'C'
	print*, "GRADE IS ",GRADE
	
	else if (x>=70 .and. x<80) then
	GRADE = 'B'
	print*, "GRADE IS ",GRADE
	
	else if (x>=80 .and. x<=100) then
	GRADE = 'A'
	print*, "GRADE IS ",GRADE

	else
		print*, "Enter valid marks"
			
	end if

	end program if_else
	
