program vector_addition
    implicit none
    integer, parameter :: size = 40
    integer :: a(size), aa(size)
    integer :: i

    
    do i = 1, size
        a(i) = i
    end do

    
    do i = 1, size
        aa(i) = a(i) * a(i)
    end do

    
    do i = 1, size
        print *, aa(i)
    end do

end program vector_addition
