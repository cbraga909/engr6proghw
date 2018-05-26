//Day 2 Homework: Height from bone length
/*This program takes inputs in inches, feet, feet and inches, and centimeters for humerus and femur lengths and uses these values to calculate
the height of the person based on the femur and humerus lengths, as well as the average, and can output these values in inches,
feet and inches, feet, and centimeters */
#include <stdio.h>
#include <math.h>

int main(void){
	float femur_length,humerus_length;
	float femur_height_female,humerus_height_female,avg_height_female;
	float femur_height_male,humerus_height_male,avg_height_male;
	int inputtype,outputtype;
	float femur_length_ft, humerus_length_ft, femurlengthft,humeruslengthft,femurlengthinch,humeruslengthinch;
	float femurlengthcm,humeruslengthcm;
	float femur_ht_fmft,hum_ht_fmft,avg_ht_fmft,femur_ht_maleft,hum_ht_maleft,avg_ht_maleft;
	float femurconversionftin,humerusconversionftin;
	float rem_1,rem_2,rem_3,rem_4,rem_5,rem_6;
	int a,b,c,d,e,f;
	printf("Enter 1 to input values in inches, 2 to input feet, 3 to input feet and inches, and 4 to input centimeters \n");
	scanf("%i",&inputtype);
	
	switch(inputtype)
	{
	  case 1:
	    printf("Enter femur length and humerus length in inches\n");
	    scanf("%f %f",&femur_length,&humerus_length);
	    femur_height_female=femur_length*1.94+28.7;
	  	humerus_height_female=(humerus_length*2.8)+28.2;
	  	avg_height_female=(femur_height_female+humerus_height_female)/2;
	  	femur_height_male=(femur_length*1.88)+32;
	  	humerus_height_male=(humerus_length*2.9)+27.9;
	  	avg_height_male=(femur_height_male+humerus_height_male)/2;
		break;
	  case 2 :
	  	printf("Enter femur length and humerus length in feet\n");
		scanf("%f %f",&femur_length_ft,&humerus_length_ft);
		femur_length=femur_length_ft*12;
	  	humerus_length=humerus_length_ft*12;
	  	femur_height_female=femur_length*1.94+28.7;
	  	humerus_height_female=(humerus_length*2.8)+28.2;
	  	avg_height_female=(femur_height_female+humerus_height_female)/2;
	  	femur_height_male=(femur_length*1.88)+32;
	  	humerus_height_male=(humerus_length*2.9)+27.9;
	  	avg_height_male=(femur_height_male+humerus_height_male)/2;
		break;
	  case 3 :
		  printf("Enter femur length feet and inches \n");
		  scanf("%f %f",&femurlengthft,&femurlengthinch);
		  printf("Enter humerus length in feet and inches \n");
		  scanf("%f %f",&humeruslengthft,&humeruslengthinch);
		  femurconversionftin=femurlengthft*12;
		  humerusconversionftin=humeruslengthft*12;
		  femur_length=femurconversionftin+femurlengthinch;
		  humerus_length=humerusconversionftin+humeruslengthinch;
		  femur_height_female=femur_length*1.94+28.7;
		  humerus_height_female=(humerus_length*2.8)+28.2;
		  avg_height_female=(femur_height_female+humerus_height_female)/2;
		  femur_height_male=(femur_length*1.88)+32;
		  humerus_height_male=(humerus_length*2.9)+27.9;
		  avg_height_male=(femur_height_male+humerus_height_male)/2;
		break;
	  case 4 :
		  printf("Enter femur length and humerus length in centimeters \n");
		  scanf("%f %f",&femurlengthcm,&humeruslengthcm);
		  femur_length=femurlengthcm*2.54;
		  humerus_length=2.54*humeruslengthcm;
		  femur_height_female=femur_length*1.94+28.7;
		  humerus_height_female=(humerus_length*2.8)+28.2;
		  avg_height_female=(femur_height_female+humerus_height_female)/2;
		  femur_height_male=(femur_length*1.88)+32;
		  humerus_height_male=(humerus_length*2.9)+27.9;
		  avg_height_male=(femur_height_male+humerus_height_male)/2;
		break;
	}  
	printf("Enter 1 to output in inches, 2 to output in feet, 3 to output in feet and inches, and 4 to output in centimeters \n");
	scanf("%i",&outputtype);
	switch(outputtype)
	{
		case 1:
			printf("Female Heights\n");
			printf("Average: %5.2f \n Humerus: %5.2f \n Femur: %5.2f \n",avg_height_female,humerus_height_female,femur_height_female);
			printf("Male Heights\n");
			printf("Average: %5.2f \n Humerus: %5.2f \n Femur: %5.2f \n",avg_height_male,humerus_height_male,femur_height_male);
		break;
		
		case 2:
			femur_ht_fmft=femur_height_female/12;
			hum_ht_fmft=humerus_height_female/12;
			avg_ht_fmft=avg_height_female/12;
			femur_ht_maleft=femur_height_male/12;
			hum_ht_maleft=humerus_height_male/12;
			avg_ht_maleft=avg_height_male/12;
			printf("Female Heights\n");
			printf("Femur: %5.2f \n Humerus: %5.2f \n Average: %5.2f \n",avg_ht_fmft,hum_ht_fmft,femur_ht_fmft);
			printf("Male Heights\n");
			printf("Femur: %5.2f \n Humerus: %5.2f \n Average: %5.2f \n",avg_ht_maleft,hum_ht_maleft,femur_ht_maleft);
		break;
		case 3:
		  femur_ht_fmft=floor(femur_height_female/12);
			hum_ht_fmft=floor(humerus_height_female/12);
			avg_ht_fmft=floor(avg_height_female/12);
			femur_ht_maleft=floor(femur_height_male/12);
			hum_ht_maleft=floor(humerus_height_male/12);
			avg_ht_maleft=floor(avg_height_male/12);
			rem_1=a%12;
			rem_2=b%12;
			rem_3=c%12;
			rem_4=d%12;
			rem_5=e%12;
			rem_6=f%12;
			printf("Female Heights\n");
			printf("Average: %5.2f feet %5.2f inches \n Humerus: %5.2f feet %5.2f inches \n Femur: %5.2f feet %5.2f inches \n",avg_ht_fmft,rem_3,hum_ht_fmft,rem_2,femur_ht_fmft,rem_1);
			printf("Male Heights\n");
			printf("Average: %5.2f feet %5.2f inches \n Humerus: %5.2f feet %5.2f inches \n Femur: %5.2f feet %5.2f inches \n",avg_ht_maleft,rem_6,hum_ht_maleft,rem_5,femur_ht_maleft,rem_4);
		break;
		case 4:
		break;
	}
	return 0;
}
