cxxtest <- function() {
    invisible(.C("X_main", PACKAGE = "cxx"))
}
