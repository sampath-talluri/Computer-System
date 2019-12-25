#ifndef FUNC_H
#define FUNC_H




double kamp_to_amp(double kamp)	{ return kamp * 1000; }	// converting kiloampher to ampher

double amp_to_kamp(double amp)	{ return amp / 1000; }	// converting amp to kiloampher


double kamp_to_mamp(double kamp)	{ return kamp * 1000000; }	//converting kiloampher to millampher

double mamp_to_kamp(double mamp)	{ return mamp / 1000000; }	//converting millampher to kiloampher


double amp_to_mamp(double amp)	{ return amp * 1000; }	//converting ampher to millampher

double mamp_to_amp(double mamp)	{ return mamp / 1000; }	//converting millampher to ampher


double hr_to_min(double hr)	{ return hr * 60; }		//converting hours to minutes

double min_to_hr(double min)	{ return min / 60; }		//converting minutes to hours


double min_to_sec(double min)	{ return min * 60; }		//converting minutes to seconds

double sec_to_min(double sec)	{ return sec / 60; }		//converting seconds to minutes

double hr_to_sec(double hr)	{ return hr * 3600; }		//converting hours to seconds

double sec_to_hr(double sec)	{ return sec / 3600; }	// converting seconds to hours


double km_to_m(double km)	{ return km * 0.62137;} 	// Converting kilometers to miles

double m_to_km(double m)	{ return m / 0.62137;} 	// Converting miles to kilometers 


double cm_to_mm(double cm)	{ return cm * 10; } 		// Converting cm to milemeter

double mm_to_cm(double mm)	{ return mm /10; } 		// Converting milemeter to cm


double meter_to_feet(double meter)	{ return meter / 0.3048; }	// Converting meter to feet

double feet_to_meter(double feet)	{ return feet * 0.3048; }	// converting feet to meter


double feet_to_inc(double feet)	{ return feet * 12; }		// converting feet to inches

double inc_to_feet(double inc)	{ return inc / 12; }		// converting inches to feet


double inc_to_cm(double inc)	{ return inc * 2.54; }		// converting inches to centimeter

double cm_to_inc(double cm)	{ return cm / 2.54; }		//converting centimeter to inches


double inr_to_usd(double inr)	{ return inr / 68.45; }		// converting currency india to america

double usd_to_inr(double usd)	{ return usd * 68.45 ; }		//converting currency america to india


double inr_to_cad(double inr)	{ return inr / 51.30; }		// converting currency india to canada

double cad_to_inr(double cad)	{ return cad * 51.30; }		// converting currency canada to india


double usd_to_cad(double usd)	{ return usd * 1.33; }		// converting currency america to canada

double cad_to_usd(double cad)	{ return cad / 1.33; }		// converting currency canada to america

	 
double gbp_to_usd(double gbp)	{ return gbp * 1.28; }			// Converting GBP to USD

double gbp_to_euro(double gbp)	{ return gbp * 1.13; }			// Converting GBP to EURO


double usd_to_gbp(double usd)	{ return usd * 0.78; }			// Converting USD to GBP

double usd_to_euro(double usd)	{ return usd * 0.88; }			// Converting USD to EURO


double euro_to_gbp(double euro)	{ return euro * 0.89; }			// Converting EURO to GBP

double euro_to_usd(double euro)	{ return euro * 1.13; }			// Converting EURO to USD

double cel_to_fah(double cel)	{ return cel * 9 / 5 + 32; }		// Converting celsius to fahrenheit

double fah_to_cel(double fah)	{ return (fah - 32) * 5 / 9; }		// Converting fahrenheit to celsius


double meter_to_cm(double meter)	{ return meter * 100; }	// Convertion Meter to Centimeters

double cm_to_meter(double cm)	{ return cm / 100; }	//convertion centimeters to meters


int modulo(double x, double y) 
{
	return (int)x % (int)y;
}


double factorial(double n) 
{
	double i; double fact=1;
	
	for (i=1; i<=n; i++)
	{ 
		fact *= i; 
	}
	
	return fact;
}


#endif

