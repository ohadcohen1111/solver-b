#include <iostream>
#include <complex>
#include <string>

using namespace std;

namespace solver {

    class RealVariable
    {
        private:
            double _a, _b, _c;

        public:
        //constructor
            RealVariable();
            RealVariable(double c);
            RealVariable(double a, double b, double c);

        //getters
                 
        //operators   
            RealVariable operator+ (const RealVariable& realVar) const;
            friend RealVariable operator+ (double x, const RealVariable& realVar);
           
           
            RealVariable operator- (const RealVariable& x) const;
            friend RealVariable operator- (double x, const RealVariable& realVar);

            friend RealVariable operator* (double x, RealVariable y );

            RealVariable operator^ (int x);

            RealVariable operator== (RealVariable x);
            RealVariable operator== (int x);

            RealVariable operator/ (int x);



    };

     class ComplexVariable
    {
        private:
            double c_re;
            double c_im;


        public:

        //constructor
            ComplexVariable (const double& re= 0.0, const double& im= 0.0)
              : c_re(re), c_im(im){}
            
        //getters
            double getReal() const
            {
		        return c_re;
	        }

	        double getImage() const 
            {
		        return c_im;
	        }

        //operators   
            // ComplexVariable operator* (int x);
            // ComplexVariable operator* (double x);
            friend ComplexVariable operator* (int x, ComplexVariable y);


            ComplexVariable operator- (int x);
            ComplexVariable operator- (ComplexVariable x);

            ComplexVariable operator+ (ComplexVariable x);
            ComplexVariable operator+ (complex<double> x);
            ComplexVariable operator+ (int x);
            friend ComplexVariable operator+ (int x, ComplexVariable y);

            ComplexVariable operator/ (int x);

            ComplexVariable operator^ (int x);

            // ComplexVariable operator() (int x);

            ComplexVariable operator== (ComplexVariable x);
            ComplexVariable operator== (int x);

            //complex<double> solve(bool x);
    };

        complex<double> solve(ComplexVariable x);
        double solve(RealVariable x);




}