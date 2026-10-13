/* Entry 0x088A4D7C | file offset 0x000A1D54 | FUN_088a4d7c | bytes 324 */

int FUN_088a4d7c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_089d6d80[2];
  if (*param_1 == -1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar2 = FUN_088a4f48(0x50);
    if (iVar2 != 0) {
      FUN_088a43b0(iVar2);
      iVar4 = iVar2;
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar3 = FUN_08941914(iVar3,*param_1,param_2,FUN_088a4ee8,iVar4);
      if (iVar3 == -1) {
        FUN_088a43ec(iVar4,3);
        iVar4 = 0;
      }
      else {
        *(int *)(iVar4 + 0x10) = iVar3;
        *(undefined4 *)(iVar4 + 0x30) = param_3;
        *(undefined4 *)(iVar4 + 0x34) = param_4;
        piVar1 = DAT_089d6d80;
        if (DAT_089d6d80[1] == 0) {
          DAT_089d6d80[1] = iVar4;
          *piVar1 = iVar4;
          *(undefined4 *)(iVar4 + 0x40) = 0;
        }
        else {
          *(int *)(DAT_089d6d80[1] + 0x40) = iVar4;
          *(undefined4 *)(iVar4 + 0x40) = 0;
          piVar1[1] = iVar4;
        }
      }
    }
  }
  return iVar4;
}

