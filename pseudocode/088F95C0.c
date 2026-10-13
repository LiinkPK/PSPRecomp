/* Entry 0x088F95C0 | file offset 0x000F6598 | FUN_088f95c0 | bytes 256 */

void FUN_088f95c0(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    FUN_088fae70(iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  FUN_088f90f4(&DAT_09afb8a0);
  DAT_09afde50._0_1_ = 1;
  DAT_09afde50._3_1_ = 0xff;
  DAT_09afe024._0_2_ = 0;
  DAT_09afe024._2_2_ = 0;
  DAT_09afe028 = 0;
  DAT_09afe02c._0_2_ = 0;
  DAT_09afe02c._2_2_ = 0;
  FUN_088fb3c0();
  FUN_088fb434(0);
  iVar4 = 0;
  puVar1 = &DAT_09b69b10;
  do {
    iVar3 = 0;
    puVar2 = puVar1;
    do {
      *puVar2 = 0xffff;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 4);
    iVar3 = 0;
    puVar2 = puVar1;
    do {
      puVar2[4] = 0xffff;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 10);
    puVar1[0xe] = 0xffff;
    iVar4 = iVar4 + 1;
    puVar1[0xf] = 0;
    puVar1 = puVar1 + 0x10;
  } while (iVar4 < 2);
  return;
}

