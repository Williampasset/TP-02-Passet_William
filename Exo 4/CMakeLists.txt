# CMakeList.txt�: projet CMake pour Exo 2, incluez la source et d�finissez
# la logique sp�cifique au projet ici.
#

# Ajoutez une source � l'ex�cutable de ce projet.
add_executable (CMakeTarget4 "Exo 4.cpp"  "Exo 4.h")


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget4 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si n�cessaire.