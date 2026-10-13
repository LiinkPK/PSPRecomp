/* Entry 0x08934944 | file offset 0x0013191C | FUN_08934944 | bytes 260 */

int FUN_08934944(undefined4 param_1,int param_2,uint param_3,int param_4,code *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (((param_3 != 0) && (uVar3 = 0, param_4 != 0)) && (uVar4 = param_3, param_3 != 0)) {
    do {
      uVar4 = uVar4 >> 1;
      iVar5 = param_2 + uVar4 * param_4;
      iVar2 = (*param_5)(param_1,iVar5);
      if (iVar2 < 0) {
        bVar1 = uVar3 < uVar4;
        param_3 = uVar4;
      }
      else {
        uVar3 = uVar4 + 1;
        if (iVar2 < 1) {
          return iVar5;
        }
        bVar1 = uVar3 < param_3;
      }
      uVar4 = uVar3 + param_3;
    } while (bVar1);
  }
  return 0;
}

