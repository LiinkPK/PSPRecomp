/* Entry 0x0886D0D8 | file offset 0x0006A0B0 | FUN_0886d0d8 | bytes 272 */

int FUN_0886d0d8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = DAT_089d5f94;
  iVar5 = 0;
  iVar4 = DAT_089d5f94 + 0x1c;
  do {
    if (((*(int *)(iVar4 + 0xc) != 0) && ((*(uint *)(iVar4 + 0x90) & 2) != 0)) &&
       (iVar2 = FUN_08935970(iVar4 + 0x110,param_1), iVar2 == 0)) {
      iVar2 = 0;
      iVar3 = iVar1 + 0x1c;
      do {
        if (*(int *)(iVar3 + 0xc) == 0) {
          FUN_08869d44(iVar3,iVar4);
          *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) & 0xfffffffd;
          return iVar3;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x13c;
      } while (iVar2 < 0xc0);
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x13c;
  } while (iVar5 < 0xc0);
  return 0;
}

