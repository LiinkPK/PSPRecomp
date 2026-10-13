/* Entry 0x0897CA80 | file offset 0x00179A58 | FUN_0897ca80 | bytes 296 */

undefined4 FUN_0897ca80(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  
  if (*(int **)(param_1 + 0xa4) == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x1c) < 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x88) + 0x1c8) + 0x30);
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar2 + *(int *)(param_2 + 0x1c) * 4) + 0x10);
      }
    }
    if (iVar2 == -1) {
      uVar1 = 0;
    }
    else {
      piVar3 = *(int **)(**(int **)(param_1 + 0xa4) + iVar2 * 4);
      fVar4 = 1.0 / (float)*(int *)(*piVar3 + 0x1c);
      uVar1 = 1;
      fVar5 = (float)*(ushort *)(param_2 + 0x2c) * fVar4;
      *(float *)(param_3 + 0x10) = fVar5;
      fVar4 = (float)((uint)*(ushort *)(param_2 + 0x2c) + (uint)*(ushort *)(param_2 + 0x30)) * fVar4
      ;
      *(float *)(param_3 + 0x14) = fVar4;
      *(float *)(param_3 + 0x20) = fVar5 + (fVar4 - fVar5) * 0.5;
      fVar4 = 1.0 / (float)*(int *)(*piVar3 + 0x20);
      *(float *)(param_3 + 0x18) = (float)*(ushort *)(param_2 + 0x2e) * fVar4;
      *(float *)(param_3 + 0x1c) =
           (float)((uint)*(ushort *)(param_2 + 0x2e) + (uint)*(ushort *)(param_2 + 0x32)) * fVar4;
    }
  }
  return uVar1;
}

