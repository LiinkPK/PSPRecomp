/* Entry 0x08915BDC | file offset 0x00112BB4 | FUN_08915bdc | bytes 224 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08915bdc(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_08899300();
  FUN_08898f84(uVar1);
  puVar2 = (undefined4 *)0x0;
  while (puVar2 = (undefined4 *)FUN_0881e75c(puVar2), puVar2 != (undefined4 *)0x0) {
    FUN_08844520(DAT_089d4960,*puVar2);
  }
  FUN_0881e200(DAT_089d4910);
  FUN_08893750(DAT_089d6ac8);
  FUN_08893cec(DAT_089d6ac8);
  func_0x08b532ac(_DAT_08b54330);
  func_0x08b533e4(_DAT_08b54330);
  func_0x08b53354(_DAT_08b54330);
  FUN_0885a31c(DAT_089d4dc8);
  FUN_0884be10(DAT_089d4d80);
  FUN_08910a04(param_1 + 0x7c);
  uVar1 = FUN_08899300();
  FUN_08898f5c(uVar1);
  FUN_08893910(DAT_089d6ac8);
  return;
}

