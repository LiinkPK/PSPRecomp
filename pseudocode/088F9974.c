/* Entry 0x088F9974 | file offset 0x000F694C | FUN_088f9974 | bytes 264 */

void FUN_088f9974(undefined4 param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_09afb8a0;
  do {
    puVar1[3] = 0;
    *(undefined2 *)((int)puVar1 + 6) = 0;
    FUN_088fae70(iVar2);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x418;
  } while (iVar2 < 2);
  DAT_09afde50._0_1_ = 5;
  DAT_09afde50._2_1_ = 0;
  if (((ushort)DAT_09afe024 & 0x40) == 0) {
    DAT_09afde50._3_1_ = 0xf9;
  }
  else {
    DAT_09afde50._3_1_ = 0;
  }
  DAT_09afe024._2_2_ = param_2;
  DAT_09afe028 = param_1;
  FUN_088fb3c0();
  FUN_088fb434(0);
  FUN_088fb5d0(0,1,1,1,0);
  return;
}

