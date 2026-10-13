/* Entry 0x08954684 | file offset 0x0015165C | FUN_08954684 | bytes 128 */

void FUN_08954684(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  
  if ((*param_2 & 1) == 0) {
    bVar1 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_08954a74(param_2,param_3,param_4,0);
  }
  else {
    FUN_08954a74(param_2,param_3,param_4,1);
  }
  return;
}

