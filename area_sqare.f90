program area_sqare
	implicit none
	
	integer::input_length, input_breadth,area,perimeter
	
	print *,'Enter legth of rectangle ...'
	read *, input_length
	print *, "Length of rectangle",input_length
	
	print *,'Enter breadth of rectangle ...'
	read *, input_breadth
	print *, "Breadth of rectangle= ",input_breadth
	
	
	area = input_length * input_breadth
	perimeter = 2*(input_length + input_breadth)
	
	print *, "area= ", area, "perimeter= ",perimeter
	
end program area_sqare
