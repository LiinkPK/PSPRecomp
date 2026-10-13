/* Entry 0x08816D54 | file offset 0x00013D2C | FUN_08816d54 | bytes 304 */

bool FUN_08816d54(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  if ((param_2 < 0) || (param_3 == 0)) {
    bVar3 = false;
  }
  else {
    iVar4 = FUN_088374b0(param_3);
    uVar2 = DAT_089d4910;
    if (iVar4 == 1) {
      bVar3 = false;
    }
    else {
      psVar6 = (short *)0x0;
      sVar1 = *(short *)(param_3 + 0x3c4);
      bVar3 = false;
      do {
        do {
          psVar6 = (short *)FUN_0881e610(uVar2,psVar6);
          if (psVar6 == (short *)0x0) goto LAB_08816e4c;
        } while (*psVar6 != param_2);
        iVar4 = 0;
        if (0 < psVar6[10]) {
          do {
            iVar5 = FUN_0881e7e0(uVar2,psVar6,iVar4);
            if (iVar5 == sVar1) {
              bVar3 = true;
              break;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < psVar6[10]);
        }
      } while (!bVar3);
LAB_08816e4c:
      bVar3 = sVar1 == param_2 || bVar3;
    }
  }
  return bVar3;
}

