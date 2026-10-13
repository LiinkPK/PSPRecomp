/* Entry 0x08988A80 | file offset 0x00185A58 | FUN_08988a80 | bytes 220 */

void FUN_08988a80(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  FUN_08988bc4();
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_089892d0(param_1,param_2);
    iVar1 = *(int *)(param_1 + 0x6c) + -1;
    uVar2 = *(undefined4 *)(*(int *)(DAT_09b6f478 + 0x8c) + 0x50);
    fVar3 = (float)iVar1;
    if (iVar1 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    iVar1 = **(int **)(param_1 + 100);
    (**(code **)(iVar1 + 0x1c))
              ((int)*(int **)(param_1 + 100) + (int)*(short *)(iVar1 + 0x18),param_1 + 0x68,
               (int)(fVar3 * *(float *)(param_2 + 0x6c)),uVar2);
    iVar1 = **(int **)(param_1 + 0x60);
    (**(code **)(iVar1 + 0x1c))
              ((int)*(int **)(param_1 + 0x60) + (int)*(short *)(iVar1 + 0x18),uVar2);
  }
  return;
}

