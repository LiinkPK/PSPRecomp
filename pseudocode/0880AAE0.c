/* Entry 0x0880AAE0 | file offset 0x00007AB8 | FUN_0880aae0 | bytes 76 */

void FUN_0880aae0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x48) == 0) {
      *(int *)(param_1 + 0x48) = (int)*(short *)(param_2 + 0x26);
      *(float *)(param_1 + 0x4c) = (float)*(byte *)(param_3 + 0x12);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x18);
      return;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xc;
  } while (iVar1 < 4);
  return;
}

