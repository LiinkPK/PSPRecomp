/* Entry 0x0892AD94 | file offset 0x00127D6C | FUN_0892ad94 | bytes 156 */

void FUN_0892ad94(float param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_2 + 0x24) + 0x24))
                    (param_2 + *(short *)(*(int *)(param_2 + 0x24) + 0x20));
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_2 + 0x24) + 0x2c))
              (param_2 + *(short *)(*(int *)(param_2 + 0x24) + 0x28));
    *(float *)(param_2 + 0x10) = param_1;
    *(undefined1 *)(param_2 + 0x20) = 1;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
    *(float *)(param_2 + 0x18) = -1.0 / param_1;
  }
  else {
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}

