#include "casadi_eigen_codegen/CasadiEigenCodeGenerator.hpp"


int main(){

    // Variables
    SX x = SX::sym("x", 3, 2);
    SX y = SX::sym("y");
    SX z = SX::sym("z", 3, 69);

    // Simple function
    Function f("f", {x, y, z}, {sqrt(y)-1, sin(x)-y, z});

    // Generate C-code
    Dict opts;
    opts["with_header"] = true;
    opts["cpp"] = true;
    CasadiFunctionEigenCodeGen cg("myfunction",SOURCE_DIR"/codegenEigen",opts);

    cg.add_casadi_function(f);

    cg.generate_with_eigen();

    // Test the generated function with TestUseEigenFunction.cpp

    return 0;
}