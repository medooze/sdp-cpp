del src\abnf\*.cpp
del src\abnf\*.hpp
java -cp c:\usr\aparser\aparse-2.5.jar com.parse2.aparse.Parser -language cpp -destdir src\abnf -namespace abnf -visitors Visitor src\abnf\sdp.abnf
