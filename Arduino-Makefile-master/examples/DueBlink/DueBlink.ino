
#define OUTPINS   (0x1FE)

void setup() {
  
  PMC->PMC_PCER0 |= PMC_PCER0_PID13;  // PIOC Power ON
  PIOC->PIO_OER |= OUTPINS;   // Outputs are enabled

}


void loop() {
  
PIOC->PIO_SODR = OUTPINS;
delay(400);
PIOC->PIO_CODR = OUTPINS;
delay(400);

}
