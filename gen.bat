del src\*.cpp
java -cp c:\usr\aparser\aparse-2.2.jar com.parse2.aparse.Parser -language cpp -destdir src\abnf  -namespace abnf -visitors Visitor src\abnf\sdp.abnf
copy Terminal$NumericValue.java src\org\murillo\abnf\