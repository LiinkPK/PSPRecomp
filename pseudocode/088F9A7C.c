/* Entry 0x088F9A7C | file offset 0x000F6A54 | FUN_088f9a7c | bytes 196 */

void FUN_088f9a7c(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_088fae70(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if ((DAT_09afde98 & 1) == 0) {
    FUN_088f9054(&DAT_09afb8a0);
  }
  FUN_088f90f4(&DAT_09afb8a0);
  DAT_09afde50._0_1_ = 7;
  DAT_09afde50._3_1_ = 0;
  DAT_09afe024._0_2_ = 0;
  DAT_09afe024._2_2_ = 0;
  DAT_09afe028 = 0;
  DAT_09afe02c._0_2_ = 0;
  DAT_09afe02c._2_2_ = 0;
  FUN_088fb3c0();
  FUN_088fb434(0);
  FUN_088fb5d0(0,1,1,1,1);
  return;
}

