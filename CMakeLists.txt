cmake_minimum_required(VERSION 3.15)
project(modern_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(Hafta-01-01-Vector Hafta-01/01-vector/main.cpp Hafta-01/01-vector/sinif.cpp Hafta-01/01-vector/sinif.h Hafta-05/04-Early_Binding/main.cpp)

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

add_executable(Hafta-04-06-Multiset Hafta-04/06-Multiset/main.cpp)

add_executable(Hafta-04-07-Stack Hafta-04/07-Stack/main.cpp)

add_executable(Hafta-04-08-Queue Hafta-04/08-Queue/main.cpp)

add_executable(Hafta-04-09-Priority_Queue Hafta-04/09-Priority_Queue/main.cpp)

add_executable(Hafta-04-10-Open_Closed_Principle Hafta-04/10-Open_Closed_Principle/main.cpp)

add_executable(Hafta-05-01-Thread_Safe_Singleton Hafta-05/01-Thread_Safe_Singleton/main.cpp)
find_package (Threads)
target_link_libraries (Hafta-05-01-Thread_Safe_Singleton ${CMAKE_THREAD_LIBS_INIT})

add_executable(Hafta-05-02-Factory Hafta-05/02-Factory/main.cpp)

add_executable(Hafta-05-03-Operators Hafta-05/03-Operators/main.cpp Hafta-05/03-Operators/topluluk.cpp Hafta-05/03-Operators/topluluk.h)

add_executable(Hafta-05-04-Early_Binding Hafta-05/04-Early_Binding/main.cpp)

add_executable(Hafta-05-05-Late_Binding Hafta-05/05-Late_Binding/main.cpp)

add_executable(Hafta-06-01-Object_Pool Hafta-06/01-Object_Pool/main.cpp)
find_package (Threads)
target_link_libraries (Hafta-06-01-Object_Pool ${CMAKE_THREAD_LIBS_INIT})

add_executable(Hafta-06-02-Prototype Hafta-06/02-Prototype/main.cpp)