/* Entry 0x0898A448 | file offset 0x00187420 | FUN_0898a448 | bytes 400 */

void FUN_0898a448(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  
  if (*(char *)(param_2 + 0xb7) != '\0') {
    if (*(int **)(DAT_09b6f478 + 0xa4) == (int *)0x0) {
      return;
    }
    if (*(int *)(param_2 + 0x60) < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(DAT_09b6f478 + 0x88) + 0x1c8) + 0x30);
      if (iVar1 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(*(int *)(iVar1 + *(int *)(param_2 + 0x60) * 4) + 0x10);
      }
    }
    if (iVar1 == -1) {
      return;
    }
    piVar2 = *(int **)(**(int **)(DAT_09b6f478 + 0xa4) + iVar1 * 4);
    fVar3 = 1.0 / (float)*(int *)(*piVar2 + 0x1c);
    *(float *)(param_1 + 0x90) = (float)*(ushort *)(param_2 + 0x8e) * fVar3;
    *(float *)(param_1 + 0x94) =
         (float)((uint)*(ushort *)(param_2 + 0x8e) + (uint)*(ushort *)(param_2 + 0x92)) * fVar3;
    fVar3 = 1.0 / (float)*(int *)(*piVar2 + 0x20);
    *(float *)(param_1 + 0x98) = (float)*(ushort *)(param_2 + 0x90) * fVar3;
    *(float *)(param_1 + 0x9c) =
         (float)((uint)*(ushort *)(param_2 + 0x90) + (uint)*(ushort *)(param_2 + 0x94)) * fVar3;
  }
  FUN_0898b920(param_1,param_1 + 0x40,param_2);
  FUN_0898b920(param_1,param_1 + 0x60,param_2 + 0x10);
  FUN_0898b920(param_1,param_1 + 0x70,param_2 + 0x20);
  FUN_089a3868(param_1 + 0x50,param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return;
}

