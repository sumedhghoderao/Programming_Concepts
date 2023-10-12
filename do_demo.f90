program do_demo
implicit none

integer ( KIND =8) :: i , factorial , n =6
factorial = n
do i = n -1 ,1 , -1

factorial = factorial * i

end do

write (* , '( i4 ,a , i15 ) ') n , ' != ' , factorial

end program do_demo
