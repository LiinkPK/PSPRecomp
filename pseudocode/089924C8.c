/* Entry 0x089924C8 | file offset 0x0018F4A0 | FUN_089924c8 | bytes 156 */

undefined4 FUN_089924c8(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 4) < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 < 1) {
      param_2 = 1;
    }
    if ((uVar2 & 2) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      *(uint *)(param_1 + 0x2c) = uVar2 & 0xfffffff1 | 4;
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(float *)(param_1 + 0x24) = 1.0 / (float)param_2;
    }
  }
  return uVar1;
}

