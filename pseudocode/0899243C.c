/* Entry 0x0899243C | file offset 0x0018F414 | FUN_0899243c | bytes 140 */

undefined4 FUN_0899243c(int param_1,int param_2)

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
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
      *(uint *)(param_1 + 0x2c) = uVar2 & 0xfffffff3 | 10;
      uVar1 = 0;
      *(float *)(param_1 + 0x24) = 1.0 / (float)param_2;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

