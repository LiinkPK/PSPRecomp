/* Entry 0x08929430 | file offset 0x00126408 | FUN_08929430 | bytes 532 */

void FUN_08929430(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
  pbVar3 = (byte *)(param_2 + 0x8a0);
  iVar4 = 0;
  pbVar5 = pbVar3;
  do {
    bVar1 = false;
    if ((((*pbVar5 == 0) && (bVar1 = false, pbVar5[1] == 0)) && (bVar1 = false, pbVar5[2] == 0)) &&
       (bVar1 = false, pbVar5[3] == 0)) {
      bVar1 = true;
    }
    if (((!bVar1) && (*pbVar5 != 0)) && (*pbVar5 < 0x23)) {
      iVar2 = FUN_0892905c();
      if (iVar2 < 2) {
        if (0 < iVar2) {
          *param_1 = 0x87;
          param_1[1] = 0xffffffff;
          return;
        }
      }
      else if (iVar2 < 3) {
        *param_1 = 0xa3;
        param_1[1] = 0xffffffff;
        return;
      }
    }
    iVar4 = iVar4 + 1;
    pbVar5 = pbVar5 + 0x2e0;
  } while (iVar4 < 5);
  iVar4 = 0;
  do {
    bVar1 = false;
    if (((*pbVar3 == 0) && (bVar1 = false, pbVar3[1] == 0)) &&
       ((bVar1 = false, pbVar3[2] == 0 && (bVar1 = false, pbVar3[3] == 0)))) {
      bVar1 = true;
    }
    if ((((!bVar1) && (pbVar3[1] != 5)) && ('\0' < (char)pbVar3[0xcc])) &&
       ((char)pbVar3[0xcc] < '#')) {
      iVar2 = FUN_0892905c();
      if (iVar2 < 2) {
        if (0 < iVar2) {
          *param_1 = 0x88;
          param_1[1] = 0xffffffff;
          return;
        }
      }
      else if (iVar2 < 3) {
        *param_1 = 0xa3;
        param_1[1] = 0xffffffff;
        return;
      }
    }
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 0x2e0;
  } while (iVar4 < 5);
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}

