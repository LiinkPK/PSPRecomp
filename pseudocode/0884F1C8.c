/* Entry 0x0884F1C8 | file offset 0x0004C1A0 | FUN_0884f1c8 | bytes 348 */

int FUN_0884f1c8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  if (-1 < param_2) {
    piVar4 = (int *)FUN_08850a40(param_2);
  }
  iVar3 = 0;
  iVar5 = param_1;
  do {
    if (((*(short *)(param_1 + 0x12) != 0) && (*(char *)(param_1 + 0x1b) != '\0')) &&
       (iVar1 = FUN_0884edc0(param_1,param_3), iVar1 != 0)) {
      if (piVar4 == (int *)0x0) {
        FUN_0884edd0(param_1);
        return param_1;
      }
      piVar2 = *(int **)(iVar5 + 4);
      if (((*(ushort *)((int)piVar2 + 6) & 0x100) == 0) || (*piVar2 == *piVar4)) {
        FUN_0884edd0(param_1);
        return param_1;
      }
      if ((short)piVar2[2] == (short)piVar4[2]) {
        FUN_0884ede4(param_1,param_2,param_4,param_5);
        return param_1;
      }
    }
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 0x20;
    iVar5 = iVar5 + 0x20;
    if (0xf < iVar3) {
      return 0;
    }
  } while( true );
}

