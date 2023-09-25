# CMakeList.txt : projet CMake pour Exo 2, incluez la source et définissez
# la logique spécifique au projet ici.
#

# Ajoutez une source à l'exécutable de ce projet.
add_executable (CMakeTarget4 "Exo 4.cpp"  "Exo 4.h")


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget4 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.