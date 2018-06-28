program encode77

  character msg*37,msg0*37,msg1*37,cerr*1
  character*77 c77

  nargs=iargc()
  do iline=1,999
     if(nargs.eq.1) then
        call getarg(1,msg0)
     else
        read(*,1002,end=999) msg0
1002    format(a37)
     endif
     if(msg0.eq.'                                     ') exit
     msg1=msg0
     call pack77(msg1,i3,n3,c77)
     call unpack77(c77,msg)
     cerr=' '
     if(msg.ne.msg0) cerr='*'
     if(i3.eq.0) write(*,1004) i3,n3,cerr,msg0,msg
1004 format(i1,'.',i1,1x,a1,1x,a37,1x,a37)
     if(i3.ge.1) write(*,1005) i3,cerr,msg0,msg
1005 format(i1,3x,a1,1x,a37,1x,a37)
     if(nargs.eq.1) exit
  enddo

999 end program encode77

include '../chkcall.f90'
include 'pack77.f90'
include 'unpack77.f90'
include 'pack28.f90'
include 'unpack28.f90'
include 'split77.f90'
include 'pack77_01.f90'
include 'pack77_02.f90'
include 'pack77_03.f90'
include 'pack77_1.f90'
include 'pack77_3.f90'
include 'pack77_4.f90'
include 'packtext77.f90'
include 'unpacktext77.f90'
