.First.lib <- function(lib, pkg) {
    library.dynam("cxx", pkg, lib)
}
