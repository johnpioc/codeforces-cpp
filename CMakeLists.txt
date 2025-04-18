cmake_minimum_required(VERSION 3.29)
project(codeforces_cpp)

set(CMAKE_CXX_STANDARD 17)

# Problem Set
add_executable(Football96A problem-set/Football96A.cpp)
add_executable(Dragons230A problem-set/Dragons230A.cpp)
add_executable(SkibidusAndSigma2065D problem-set/SkibidusAndSigma2065D.cpp)

# Contest Round 1009 Div 3
add_executable(DrawASquare2074A contests/round1009div3/DrawASquare2074A.cpp)
add_executable(TheThirdSide2074B contests/round1009div3/TheThirdSide2074B.cpp)
add_executable(XORAndTriangle2074C contests/round1009div3/XORAndTriangle2074C.cpp)

# Contest Round 1016 Div 3
add_executable(IdealGenerator2093A contests/round1016div3/IdealGenerator2093A.cpp)

# Contest Round 1017 Div 4
add_executable(TrippiTroppi2094A contests/round1017div4/TrippiTroppi2094A.cpp)
add_executable(BobrittoBandito2094B contests/round1017div4/BobrittoBandito2094B.cpp)
add_executable(BrrBrrPatapim2094C contests/round1017div4/BrrBrrPatapim2094C.cpp)
add_executable(TeamTraining2091B problem-set/TeamTraining2091B.cpp)

# Gym: Topic Stream Mashup Graphs
add_executable(NewYearTransportation gym/topic-stream-mashup-graphs/NewYearTransportation.cpp)
add_executable(Rumor gym/topic-stream-mashup-graphs/Rumor.cpp)
add_executable(NewsDistribution gym/topic-stream-mashup-graphs/NewsDistribution.cpp)
