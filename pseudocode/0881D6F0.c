/* Entry 0x0881D6F0 | file offset 0x0001A6C8 | FUN_0881d6f0 | bytes 192 */

undefined4 FUN_0881d6f0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    psVar4 = *(short **)(param_2 + 0x48);
    if (psVar4 == (short *)0x0) {
      uVar1 = 0;
    }
    else if (*psVar4 == param_3) {
      uVar1 = 1;
    }
    else {
      iVar3 = 0;
      if (0 < psVar4[10]) {
        do {
          iVar2 = FUN_0881e7e0(DAT_089d4910,psVar4,iVar3);
          if (iVar2 == param_3) {
            return 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < psVar4[10]);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

