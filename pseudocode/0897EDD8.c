/* Entry 0x0897EDD8 | file offset 0x0017BDB0 | FUN_0897edd8 | bytes 96 */

void FUN_0897edd8(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 *param_4)

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
  if (!bVar1) {
    FUN_089c390c(*param_4,param_3);
  }
  return;
}

