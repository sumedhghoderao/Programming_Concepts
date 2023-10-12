program area_circle
	implicit none
	
	integer::input_radius,area,perimeter
	
	print *,'Enter radius of circle ...'
	read *, input_radius
	print *, "radius of circle",input_radius
	
	
	
	area = 3.14* (input_radius * input_radius)
	perimeter = 2*3.14*input_radius
	
	print *, "area= ", area, "perimeter= ",perimeter
	
end program area_circle
