program area_rectangle
	implicit none
	
	integer::h,w,area,perimeter
	
	print *,'Enter h ...'	;	read *, h	;	print *, "h = ", h;
	print *,'Enter w ...'	;	read *, w	;	print *, "w = ", w
	
	call calc_perimeter(w,h,perimeter)
	
	print *, "area = ", area(w,h), "perimeter = ", perimeter
	end program area_rectangle
	
	
	function area(w,h)
	implicit none
	integer::w,h, area
	area = w*h
	end function area
	
	
	subroutine calc_perimeter(w,h,perimeter)
	implicit none
	integer::w,h,perimeter
	perimeter = 2*(w+h)
	end subroutine calc_perimeter 
	
	
