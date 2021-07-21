int total_capacity_of_tank = 10000;
int watercapacity=1000;
int waterlevel = 600;
int A = 8;
int B = 9;
int C = 10;
int D = 11;

bool flag0=true;
bool flag1=true;
bool flag2=true;
bool flag3=true;
bool flag4=true;
bool flag5=true;
bool flag6=true;
bool flag7=true;
bool flag8=true;
bool flag9=true;
bool flag10=true;
bool flag11=true;
bool flag12=true;
bool flag13=true;
bool flag14=true;
bool flag15=true;
int CA = 3;
int CB = 4;
int CC = 5;
int CD = 6;

double flowrate;
double flowrate1;
double flowrate2;
double waterflowed;
double waterflowed1;
volatile int count;

double wf0;
double wf1;
double wf2;
double wf3;
double wf4;
double wf5;
double wf6;
double wf7;
double wf8;
double wf9;
double wf10;
double wf11;
double wf12;
double wf13;
double wf14;
double wf15;

double wf09;
double wf19;
double wf29;
double wf39;
double wf49;
double wf59;
double wf69;
double wf79;
double wf89;
double wf99;
double wf109;
double wf119;
double wf129;
double wf139;
double wf149;
double wf159;

double wf094;
double wf194;
double wf294;
double wf394;
double wf494;
double wf594;
double wf694;
double wf794;
double wf894;
double wf994;
double wf1094;
double wf1194;
double wf1294;
double wf1394;
double wf1494;
double wf1594;

void setup()
{
    // put your setup code here, to run once:
    pinMode(12, OUTPUT);
    pinMode(2, INPUT);
    attachInterrupt(0, flow, RISING);
    pinMode(13, OUTPUT);
    pinMode(CA, OUTPUT);
    pinMode(CB, OUTPUT);
    pinMode(CD, OUTPUT);
    pinMode(CC, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(A0,OUTPUT);
    Serial.begin(9600);
}

void loop()
{ 
      if(waterflowed1==0){
        Serial.println("-------------------------------------------------------------------------------------------------------");
        Serial.println("***||||||||||--------------WELCOME TO WATER MANAGEMENT SYSTEM ---------------|||||||||||||**");
             Serial.println("-------------------------------------------------------------------------------------------------------");
        }
        watercapacity= watercapacity-waterflowed1;
        Serial.println("Water Remaining");
        Serial.println(watercapacity);
    analogWrite(A0,HIGH);

    // put your main code here, to run repeatedly:
    //Serial.println("hi ");

    // if(wf09>waterlevel){
    //Serial.print("uysvfgygyryg");
    //  digitalWrite(CD,LOW);
    // digitalWrite(CC,LOW);
    // digitalWrite(CB,LOW);
    // digitalWrite(CA,HIGH);

    // };
    if (wf09 > waterlevel)
    {
        flag0=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, LOW);
        digitalWrite(CB, LOW);
        digitalWrite(CA, LOW);
         //delay(50000);
    }
    if (wf19 > waterlevel)
    {
       flag1=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, LOW);
        digitalWrite(CB, LOW);
        digitalWrite(CA, HIGH);
      //  delay(50000);
    }
    if (wf29 > waterlevel)
    {
       flag2=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, LOW);
        digitalWrite(CB, HIGH);
        digitalWrite(CA, LOW);
        //delay(50000);
    }
    if (wf39 > waterlevel)
    {
        flag3=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, LOW);
        digitalWrite(CB, HIGH);
        digitalWrite(CA, HIGH);
        //delay(50000);
    }
    if (wf49 >1)
    {
        flag4=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, HIGH);
        digitalWrite(CB, LOW);
        digitalWrite(CA, LOW);
       // delay(50000);
    }
    if (wf59 > waterlevel)
    {
        flag5=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, HIGH);
        digitalWrite(CB, LOW);
        digitalWrite(CA, HIGH);
       // delay(50000);
    }
    if (wf69 > waterlevel)
    {
        flag6=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, HIGH);
        digitalWrite(CB, HIGH);
        digitalWrite(CA, LOW);
        //delay(50000);
    }
    if (wf79 > waterlevel)
    {
        flag7=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, HIGH);
        digitalWrite(CB, HIGH);
        digitalWrite(CA, HIGH);
        //delay(50000);
    }
    if(wf89>waterlevel)
    {
      flag8=false;
    digitalWrite(CD,HIGH);
    digitalWrite(CC,LOW);
    digitalWrite(CB,LOW);
    digitalWrite(CA,LOW);
    //delay(50000);
    }

if (wf99 > waterlevel)
{
  flag9=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, LOW);
    digitalWrite(CB, LOW);
    digitalWrite(CA, HIGH);
    //delay(50000);
}
if (wf109 > waterlevel)
{
  flag10=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, LOW);
    digitalWrite(CB, HIGH);
    digitalWrite(CA, LOW);
    //delay(50000);
}
if (wf119 > waterlevel)
{
   flag11=false;
    digitalWrite(CD, LOW);
    digitalWrite(CC, LOW);
    digitalWrite(CB, LOW);
    digitalWrite(CA, LOW);
    //delay(50000);
}
if (wf129 > waterlevel)
{
    flag12=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, HIGH);
    digitalWrite(CB, LOW);
    digitalWrite(CA, LOW);
   // delay(50000);
}
if (wf139 >waterlevel)
{
   flag13=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, HIGH);
    digitalWrite(CB, LOW);
    digitalWrite(CA, HIGH);
    //delay(50000);
}
if (wf149 > waterlevel)
{
    flag14=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, HIGH);
    digitalWrite(CB, HIGH);
    digitalWrite(CA, LOW);
    //delay(50000);
}
if (wf159 > waterlevel)
{
   flag15=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, HIGH);
    digitalWrite(CB, HIGH);
    digitalWrite(CA, HIGH);
   // delay(50000);
}

 digitalWrite(CD, LOW);
    digitalWrite(CC, LOW);
    digitalWrite(CB, LOW);
    digitalWrite(CA, LOW);
//count=0;
//interrupts();
// delay(1000);
//noInterrupts();
// flowrate=(count*2.25);
///flowrate1=flowrate*60;
// flowrate2=flowrate1/1000;

//waterflowed=waterflowed+flowrate;
// waterflowed1=waterflowed/1000;

//  Serial.print("Waterflowed per sec  \t");
//   Serial.println(" per sec ");
//  Serial.print(flowrate2);
//  Serial.println(" ml ");
// Serial.print("Waterflowed  \t");
// Serial.print(waterflowed1);
// Serial.println("  litre ");

//Serial.print("    Waterflowed  \t");

if (watercapacity <= 400)
{
    digitalWrite(13, HIGH);
    Serial.println("\t\t TANK IS EMPTY ");
}else{
  
    digitalWrite(13, LOW);
  }

if (watercapacity >= 10000)
{
    digitalWrite(12, HIGH);
    Serial.println("\t\t TANK IS FULL ");
}
else{
  digitalWrite(12, LOW);
  }
//delay(1000);

if(watercapacity>400){
  tb();
  }
Serial.println("");
Serial.println("///////////////////////////////////////////////////////////////////////////////////////////////////////////////");

}
void tb()
{

    for (int i = 0; i < 16; i++)
    {
        //Serial.println(i);









 if (wf09 > waterlevel)
    {
        flag0=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, LOW);
        digitalWrite(CB, LOW);
        digitalWrite(CA, LOW);
         //delay(50000);
    }
    if (wf19 > waterlevel)
    {
       flag1=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, LOW);
        digitalWrite(CB, LOW);
        digitalWrite(CA, HIGH);
      //  delay(50000);
    }
    if (wf29 > waterlevel)
    {
       flag2=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, LOW);
        digitalWrite(CB, HIGH);
        digitalWrite(CA, LOW);
        //delay(50000);
    }
    if (wf39 > waterlevel)
    {
        flag3=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, LOW);
        digitalWrite(CB, HIGH);
        digitalWrite(CA, HIGH);
        //delay(50000);
    }
    if (wf49 >1)
    {
        flag4=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, HIGH);
        digitalWrite(CB, LOW);
        digitalWrite(CA, LOW);
       // delay(50000);
    }
    if (wf59 > waterlevel)
    {
        flag5=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, HIGH);
        digitalWrite(CB, LOW);
        digitalWrite(CA, HIGH);
       // delay(50000);
    }
    if (wf69 > waterlevel)
    {
        flag6=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, HIGH);
        digitalWrite(CB, HIGH);
        digitalWrite(CA, LOW);
        //delay(50000);
    }
    if (wf79 > waterlevel)
    {
        flag7=false;
        digitalWrite(CD, LOW);
        digitalWrite(CC, HIGH);
        digitalWrite(CB, HIGH);
        digitalWrite(CA, HIGH);
        //delay(50000);
    }
    if(wf89>waterlevel)
    {
      flag8=false;
    digitalWrite(CD,HIGH);
    digitalWrite(CC,LOW);
    digitalWrite(CB,LOW);
    digitalWrite(CA,LOW);
    //delay(50000);
    }

if (wf99 > waterlevel)
{
  flag9=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, LOW);
    digitalWrite(CB, LOW);
    digitalWrite(CA, HIGH);
    //delay(50000);
}
if (wf109 > waterlevel)
{
  flag10=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, LOW);
    digitalWrite(CB, HIGH);
    digitalWrite(CA, LOW);
    //delay(50000);
}
if (wf119 > waterlevel)
{
   flag11=false;
    digitalWrite(CD, LOW);
    digitalWrite(CC, LOW);
    digitalWrite(CB, LOW);
    digitalWrite(CA, LOW);
    //delay(50000);
}
if (wf129 > waterlevel)
{
    flag12=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, HIGH);
    digitalWrite(CB, LOW);
    digitalWrite(CA, LOW);
   // delay(50000);
}
if (wf139 >waterlevel)
{
   flag13=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, HIGH);
    digitalWrite(CB, LOW);
    digitalWrite(CA, HIGH);
    //delay(50000);
}
if (wf149 > waterlevel)
{
    flag14=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, HIGH);
    digitalWrite(CB, HIGH);
    digitalWrite(CA, LOW);
    //delay(50000);
}
if (wf159 > waterlevel)
{
   flag15=false;
    digitalWrite(CD, HIGH);
    digitalWrite(CC, HIGH);
    digitalWrite(CB, HIGH);
    digitalWrite(CA, HIGH);
   // delay(50000);
}












        

        if (i == 0)
        {
            Serial.print(i);
            digitalWrite(D, LOW);
            digitalWrite(C, LOW);
            digitalWrite(B, LOW);
            digitalWrite(A, LOW);
        }
        if (i == 1)
        {
            Serial.print(i);
            digitalWrite(D, LOW);
            digitalWrite(C, LOW);
            digitalWrite(B, LOW);
            digitalWrite(A, HIGH);
        }
        if (i == 2)
        {
            Serial.print(i);
            digitalWrite(D, LOW);
            digitalWrite(C, LOW);
            digitalWrite(B, HIGH);
            digitalWrite(A, LOW);
        }
        if (i == 3)
        {
            Serial.print(i);
            digitalWrite(D, LOW);
            digitalWrite(C, LOW);
            digitalWrite(B, HIGH);
            digitalWrite(A, HIGH);
        }
        if (i == 4)
        {
            Serial.print(i);
            digitalWrite(D, LOW);
            digitalWrite(C, HIGH);
            digitalWrite(B, LOW);
            digitalWrite(A, LOW);
        }
        if (i == 5)
        {
            Serial.print(i);
            digitalWrite(D, LOW);
            digitalWrite(C, HIGH);
            digitalWrite(B, LOW);
            digitalWrite(A, HIGH);
        }
        if (i == 6)
        {
            Serial.print(i);
            digitalWrite(D, LOW);
            digitalWrite(C, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(A, LOW);
        }
        if (i == 7)
        {
            Serial.print(i);
            digitalWrite(D, LOW);
            digitalWrite(C, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(A, HIGH);
        }
        if (i == 8)
        {
            Serial.print(i);
            digitalWrite(D, HIGH);
            digitalWrite(C, LOW);
            digitalWrite(B, LOW);
            digitalWrite(A, LOW);
        }
        if (i == 9)
        {
            Serial.print(i);
            digitalWrite(D, HIGH);
            digitalWrite(C, LOW);
            digitalWrite(B, LOW);
            digitalWrite(A, HIGH);
        }
        if (i == 10)
        {
            Serial.print(i);
            digitalWrite(D, HIGH);
            digitalWrite(C, LOW);
            digitalWrite(B, HIGH);
            digitalWrite(A, LOW);
        }
        if (i == 11)
        {
            Serial.print(i);
            digitalWrite(D, LOW);
            digitalWrite(C, LOW);
            digitalWrite(B, LOW);
            digitalWrite(A, LOW);
        }
        if (i == 12)
        {
            Serial.print(i);
            digitalWrite(D, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(B, LOW);
            digitalWrite(A, LOW);
        }
        if (i == 13)
        {
            Serial.print(i);
            digitalWrite(D, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(B, LOW);
            digitalWrite(A, HIGH);
        }
        if (i == 14)
        {
            Serial.print(i);
            digitalWrite(D, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(A, LOW);
        }
        if (i == 15)
        {
            Serial.print(i);
            digitalWrite(D, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(A, HIGH);
        }

        count = 0;
        interrupts();
        delay(100);
        noInterrupts();
        flowrate = (count * 22.5);
        flowrate1 = flowrate * 60;
        flowrate2 = flowrate1 / 1000;

        waterflowed = waterflowed + flowrate;
        waterflowed1 = waterflowed / 1000;

        Serial.print("   Waterflowed per sec  \t");
        // Serial.print(" per sec ");
        Serial.print(flowrate2);
        Serial.print(" ml ");
        Serial.print("        Total water Waterflowed  \t");
        Serial.print(waterflowed1);
        //Serial.print("  / ");

        Serial.print("          Waterflowed  \t");

        if (i == 0)
        { 
          if(flag0 == false){
            flowrate=0;
            }
            wf0 = wf0 + flowrate;
            wf09 = wf0 / 1000;
            // wf094=wf09+(wf09)*0.6;
            Serial.print(wf09);
        }
        if (i == 1)
        {
            if(flag1 == false){
            flowrate=0;
            }
            wf1 = wf1 + flowrate;
            wf19 = wf1 / 1000;
            // wf194=wf19+(wf19)*0.6;
            Serial.print(wf19);
        }
        if (i == 2)
        { 
          if(flag2 == false){
            flowrate=0;
            }
            wf2 = wf2 + flowrate;
            wf29 = wf2 / 1000;
            //  wf294=wf29+(wf29)*0.6;
            Serial.print(wf29);
        }
        if (i == 3)
        { 
          if(flag3 == false){
            flowrate=0;
            }
            wf3 = wf3 + flowrate;
            wf39 = wf3 / 1000;
            // wf394=wf39+(wf39)*0.6;
            Serial.print(wf39);
        }
        if (i == 4)
        { 
          if(flag4 == false){
            flowrate=0;
            }
            wf4 = wf4 + flowrate;
            wf49 = wf4 / 1000;
            // wf494=wf49+(wf19)*0.6;
            Serial.print(wf49);
        }
        if (i == 5)
        { 
            if(flag5 == false){
            flowrate=0;
            }
            wf5 = wf5 + flowrate;
            wf59 = wf5 / 1000;
            Serial.print(wf59);
        }
        if (i == 6)
        { 
          if(flag6 == false){
            flowrate=0;
            }
            wf6 = wf6 + flowrate;
            wf69 = wf6 / 1000;
            // wf694=wf69+(wf69)*0.6;
            Serial.print(wf69);
        }
        if (i == 7)
        { 
            if(flag7 == false){
            flowrate=0;
            }
            wf7 = wf7 + flowrate;
            wf79 = wf7 / 1000;
            //  wf794=wf79+(wf79)*0.6;
            Serial.print(wf79);
        }
        if (i == 8)
        { 
            if(flag8 == false){
            flowrate=0;
            }
            wf8 = wf8 + flowrate;
            wf89 = wf8 / 1000;
            // wf894=wf89+(wf89)*0.6;
            Serial.print(wf89);
        }
        if (i == 9)
        { 
            if(flag9 == false){
            flowrate=0;
            }
            wf9 = wf9 + flowrate;
            wf99 = wf9 / 1000;
            // wf994=wf99+(wf99)*0.6;
            Serial.print(wf99);
        }
        if (i == 10)
        { 
            if(flag10 == false){
            flowrate=0;
            }
            wf10 = wf10 + flowrate;
            wf109 = wf10 / 1000;
            // wf1094=wf109+(wf109)*0.6;
            Serial.print(wf109);
        }
        if (i == 11)
        {
            if(flag11 == false){
            flowrate=0;
            }
            wf11 = wf11 + flowrate;
            wf119 = wf11 / 1000;
            // wf1194=wf19+(wf119)*0.6;
            Serial.print(wf119);
        }
        if (i == 12)
        { 
          if(flag12 == false){
            flowrate=0;
            }
            wf12 = wf12 + flowrate;
            wf129 = wf12 / 1000;
            // wf194=wf129+(wf129)*0.6;
            Serial.print(wf129);
        }
        if (i == 13)
        {   if(flag13 == false){
            flowrate=0;
            }
            wf13 = wf13 + flowrate;
            wf139 = wf13 / 1000;
            // wf1394=wf139+(wf139)*0.6;
            Serial.print(wf139);
        }

        if (i == 14)
        { 
            if(flag14 == false){
            flowrate=0;
            }
            wf14 = wf14 + flowrate;
            wf149 = wf14 / 1000;
            // wf1494=wf149+(wf149)*0.6;
            Serial.print(wf149);
        }
        if (i == 15)
        { 
            if(flag15 == false){
            flowrate=0;
            }
            wf15 = wf15 + flowrate;
            wf159 = wf15 / 1000;
            // wf1594=wf159+(wf159)*0.6;

            Serial.print(wf159);
        }

        Serial.println(" litre");
    }
}
void flow()
{

    count++;
}
