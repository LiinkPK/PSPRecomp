/* Entry 0x088F4638 | file offset 0x000F1610 | FUN_088f4638 | bytes 244 */

void FUN_088f4638(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    param_1 = DAT_089d712c + 0x1de04;
    FUN_08935828(param_1,0,0x78);
    FUN_088f45fc();
    DAT_089d5fd3 = 1;
  }
  for (iVar4 = 0; iVar1 = FUN_088f47c4(), iVar4 < iVar1; iVar4 = iVar4 + 1) {
    iVar1 = FUN_088c50d4(iVar4);
    uVar3 = (uint)*(byte *)(iVar1 + 1);
    if (0x77 < uVar3) {
      uVar3 = 0;
    }
    uVar2 = *(byte *)(iVar1 + 2) & 0xf;
    iVar1 = FUN_088f4900(0x40,0,iVar1,0);
    if (iVar1 <= (int)uVar2) {
      uVar2 = 0;
    }
    *(char *)(param_1 + uVar3) = (char)uVar2;
  }
  return;
}

