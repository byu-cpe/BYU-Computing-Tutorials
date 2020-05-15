Makefile Lecture
----------------

In this lecture I walk through how a Makefile works, starting with a very simple example, and building up to a more complex, generic makefile.  The code is the split calculator code from the compiler lecture, so it makes sense to position this lecture after that one.

Phase 1: Make (ex1 directory)
-----------------------------
In this part of the lecture I start by creating a very simple 'Makefile', which is copied from makefiles/mk1.  I then walk through the steps of modifying this 'Makefile' to the one in makefiles/mk2, then mk3, and so on.  Last time I showed them mk6 first, and showed how cryptic it was, and then talked about how we will walk through the steps to understanding this.

    mk1: The simplest makefile where we discuss makefile "recipes" (targets).  Build and clean only.

    mk2: I introduce variables.

    mk3: We split up the compilation/linker steps, and introduce chained dependencies.  I do a bunch of demos of deleting files and rebuilding targets.  The linux 'touch' command is very helpful here.

    mk4: We introduce Makefile automatic variables ($@ and $<)   (All along the way I stress that programmers are lazy and we want to make thing as short as possible.  Helps explain the horrible automatic variable names)

    mk5: Introduce patterns

    mk6: Makefile functions, and making the makefile more generic.


Phase 2: CMake (ex2 directory)
------------------------------
Discuss how we can use CMake to create our makefiles for us.  

    CMakeLists.txt: Configuration file for CMake.  All we need to do is:
        - Specify version of CMake we are using
        - Create a variable MyCSources that contain all .c files
        - add_executable named calc

    Run "cmake ." (. points to current directory, location of CMakeLists.txt)

    A makefile is created, that will take care of everything for us (handles header dependencies, etc.).

    Just run 'make' to build.  (It even prints in nice colors for us).


ex3 Contains a more advanced cmake example:    
    - It demonstrates:
        - Placing all build files in a build directory.
        - Subdirectories
        - Libraries

    mkdir build
    cd build
    cmake ..
    make
