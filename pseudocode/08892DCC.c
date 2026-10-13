/* Entry 0x08892DCC | file offset 0x0008FDA4 | FUN_08892dcc | bytes 184 */

void FUN_08892dcc(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)param_1[0x1cb]) {
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_08899300();
      if (*piVar1 != 0) {
        uVar2 = FUN_08899300();
        FUN_088989f4(uVar2,param_1[0x1cc] + iVar3,*(undefined4 *)(param_1[0x1cc] + iVar3 + 0x24));
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x28;
    } while (iVar4 < (int)param_1[0x1cb]);
  }
  FUN_0885c538(*param_1,param_1[0x1cc],0);
  param_1[0x1cc] = 0;
  param_1[0x1cb] = 0;
  return;
}

