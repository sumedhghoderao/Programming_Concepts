program traffic
	implicit none
	
	Character(len = 100)::ch
	print*, "Enter Traffic" 
	read* ,ch 
	select case (ch)
	
	
	case ("red")
	print*, "STOP"
	
	case ("yellow")
	print*, "CAUTION"
	
	case("green")
	print*, "go"
	
	case default
	print*, "ILLEGAL VALUE: ",ch
	
			
	end select

	end program traffic
	
