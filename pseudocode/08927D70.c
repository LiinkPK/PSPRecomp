/* Entry 0x08927D70 | file offset 0x00124D48 | FUN_08927d70 | bytes 176 */

int FUN_08927d70(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_089d712c + 0x3e0b0;
  if (param_2 != 0) {
    iVar4 = 1;
    iVar3 = 0;
    do {
      iVar1 = FUN_0892a1e0(iVar2);
      if (iVar1 != 0) {
        if (iVar4 == param_2) {
          return iVar3;
        }
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x154;
    } while (iVar3 < 5);
  }
  return -1;
}

