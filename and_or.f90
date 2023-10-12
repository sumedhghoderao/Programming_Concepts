program and_or
	implicit none
	
	logical::input_val1, input_val2, and_val, or_val
	
	print *,'Enter inout val (logical) ...'
	read *, input_val1
	print *, "input_val1= ",input_val1
	
	print *,'Enter inout val (logical) ...'
	read *, input_val2
	print *, "input_val2= ",input_val2
	
	! .and. .or.
	and_val=input_val1 .and. input_val2
	or_val=input_val1 .or. input_val2
	
	print *, "and_val= ", and_val, "or_val= ",or_val
	
end program and_or
