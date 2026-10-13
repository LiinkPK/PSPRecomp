/* Entry 0x0886D1E8 | file offset 0x0006A1C0 | FUN_0886d1e8 | bytes 220 */

undefined4 FUN_0886d1e8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = DAT_089d5f94 + 0x1c;
  iVar3 = iVar4;
  do {
    if (((*(int *)(iVar3 + 0xc) != 0) && ((*(uint *)(iVar3 + 0x90) & 2) != 0)) &&
       (iVar1 = FUN_08935970(iVar3 + 0x110,param_1), iVar1 == 0)) {
      iVar2 = 0;
      iVar1 = iVar4;
      do {
        if (*(int *)(iVar1 + 0xc) == 0) {
          return 1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x13c;
      } while (iVar2 < 0xc0);
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x13c;
  } while (iVar5 < 0xc0);
  return 0;
}

