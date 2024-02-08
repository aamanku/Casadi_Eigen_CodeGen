//
// Created by abhijee on 2/7/24.
//

#include <iostream>
#include <Eigen/Dense>
#include "myfunction.h"
#include <chrono>

//#define USE_RANDOM_INPUTS

int main(){
    Eigen::Matrix<casadi_real,3,2> i0;
    Eigen::Matrix<casadi_real,1,1> i1;
    Eigen::Matrix<casadi_real,3,5> i2;
    Eigen::Matrix<casadi_real,1,1> o0;
    Eigen::Matrix<casadi_real,3,2> o1;
    Eigen::Matrix<casadi_real,3,5> o2;
    o0.setRandom();
    o1.setRandom();
    o2.setRandom();


#ifndef USE_RANDOM_INPUTS
    i0.setRandom();
    i1.setRandom();
    i2.setRandom();
#endif


    int num_iter = 10000;

    { // Test f casadi
        auto start = std::chrono::high_resolution_clock::now();
        for(int i=0; i<num_iter; i++) {
#ifdef USE_RANDOM_INPUTS
            i0.setRandom();
            i1.setRandom();
            i2.setRandom();
#endif
            const casadi_real* arg[3];
            casadi_real* res[3];
            casadi_int iw[0];
            casadi_real w[3];
            arg[0] = i0.data();
            arg[1] = i1.data();
            arg[2] = i2.data();
            res[0] = o0.data();
            res[1] = o1.data();
            res[2] = o2.data();
            f(arg, res, NULL, NULL, 0);
        }
        auto end = std::chrono::high_resolution_clock::now();
        // print average time in nanoseconds
        std::cout << "f casadi: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()/num_iter << " ns" << std::endl;

    }


    { // Test f_eigen
        auto start = std::chrono::high_resolution_clock::now();
        for(int i=0; i<num_iter; i++) {
#ifdef USE_RANDOM_INPUTS
            i0.setRandom();
            i1.setRandom();
            i2.setRandom();
#endif

            f_eigen(i0, i1, i2, o0, o1, o2);
        }
        auto end = std::chrono::high_resolution_clock::now();
        // print average time in nanoseconds
        std::cout << "f_eigen: " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()/num_iter << " ns" << std::endl;
    }




    return 0;

}


