cmake_minimum_required(VERSION 3.15)
project(modern_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(Hafta-01-01-Vector Hafta-01/01-vector/main.cpp Hafta-01/01-vector/sinif.cpp Hafta-01/01-vector/sinif.h)

add_executable(Hafta-01-02-Chat Hafta-01/02-Chat/main.cpp Hafta-01/02-Chat/chat_sinif.cpp Hafta-01/02-Chat/chat_sinif.h)

add_executable(Hafta-01-03-Animals Hafta-01/03-Animals/main.cpp Hafta-01/03-Animals/Animal.cpp Hafta-01/03-Animals/Animal.h Hafta-01/03-Animals/Cat.cpp Hafta-01/03-Animals/Cat.h Hafta-01/03-Animals/Dog.cpp Hafta-01/03-Animals/Dog.h)

add_executable(Hafta-02-01-Virtual_Functions Hafta-02/01-Virtual_Functions/main.cpp Hafta-02/01-Virtual_Functions/insan.cpp Hafta-02/01-Virtual_Functions/insan.h)

add_executable(Hafta-02-02-Pure_Virtual_Functions Hafta-02/02-Pure_Virtual_Functions/main.cpp Hafta-02/02-Pure_Virtual_Functions/insan.cpp Hafta-02/02-Pure_Virtual_Functions/insan.h)

add_executable(Hafta-02-03-Abstract Hafta-02/03-Abstract/main.cpp Hafta-02/03-Abstract/sinif.cpp Hafta-02/03-Abstract/sinif.h)

add_executable(Hafta-02-04-Templates Hafta-02/04-Templates/main.cpp)

add_executable(Hafta-02-05-Move_Semantics Hafta-02/05-Move_Semantics/main.cpp Hafta-02/05-Move_Semantics/ornek.cpp)

add_executable(Hafta-02-06-Shared_Pointer Hafta-02/06-Shared_Pointer/main.cpp)

add_executable(Hafta-03-01-Map Hafta-03/01-Map/main.cpp)

add_executable(Hafta-03-02-Single_Responsibility_Princeple Hafta-03/02-Single_Responsibility_Principle/main.cpp Hafta-03/02-Single_Responsibility_Principle/gunluk.cpp Hafta-03/02-Single_Responsibility_Principle/gunluk.h Hafta-03/02-Single_Responsibility_Principle/kaydedici.cpp Hafta-03/02-Single_Responsibility_Principle/kaydedici.h)

add_executable(Hafta-04-01-Array Hafta-04/01-Array/main.cpp)

add_executable(Hafta-04-02-Deque Hafta-04/02-Deque/main.cpp)

add_executable(Hafta-04-03-List Hafta-04/03-List/main.cpp)

add_executable(Hafta-04-04-Multimap Hafta-04/04-Multimap/main.cpp)

add_executable(Hafta-04-05-Set Hafta-04/05-Set/main.cpp)
