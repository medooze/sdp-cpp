del src\abnf\*.cpp
del src\abnf\*.hpp
java -cp c:\usr\aparser\aparse-2.2.jar com.parse2.aparse.Parser -language cpp -destdir src\abnf  -namespace abnf src\abnf\sdp.abnf
