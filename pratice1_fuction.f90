program demo

implicit none

integer ::val,val_square, size=10 
integer :: a(10), aa(10) 
integer :: i

do i = 1, size 
	a(i) = i - 1 
end do

do i = 1, size 
	aa(i) = val_square(a(i))
end do


do i = 1, size 
	print *, aa(i)
end do


end program demo

function val_square(val) 
implicit none
integer ::val,val_square
val_square = val * val 

end function val_square



