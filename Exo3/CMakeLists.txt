# CMakeList.txt�: projet CMake pour Exo 2, incluez la source et d�finissez
# la logique sp�cifique au projet ici.
#
# Ajoutez une source � l'ex�cutable de ce projet.
add_executable (CMakeTarget3 "Exo 3.cpp"  "Exo 3.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget3 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si n�cessaire.