/* Entry 0x088F94A4 | file offset 0x000F647C | FUN_088f94a4 | bytes 284 */

void FUN_088f94a4(void)

{
  int iVar1;
  int local_20 [3];
  
  iVar1 = 0;
  do {
    FUN_088fae70(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  FUN_088f9054(&DAT_09afb8a0);
  FUN_088f90f4(&DAT_09afb8a0);
  local_20[0] = 0;
  local_20[1] = 0xfffffffe;
  local_20[2] = 2;
  iVar1 = (int)DAT_09afd838 + local_20[DAT_09afd966._1_1_];
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  DAT_09afd838 = (short)iVar1;
  DAT_09afde50._0_1_ = 0;
  DAT_09afde50._3_1_ = 0xff;
  if (DAT_089d5f20 == '\x01') {
    DAT_09afde50._3_1_ = 0;
  }
  DAT_09afe024._0_2_ = 0;
  DAT_09afe024._2_2_ = 0;
  DAT_09afe028 = 0;
  DAT_09afe02c._0_2_ = 0;
  DAT_09afe02c._2_2_ = 0;
  FUN_088fb3c0();
  FUN_088fb434(0);
  FUN_088fb5d0(1,1,1,1,0);
  return;
}

