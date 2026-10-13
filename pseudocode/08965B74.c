/* Entry 0x08965B74 | file offset 0x00162B4C | FUN_08965b74 | bytes 116 */

void FUN_08965b74(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 *param_4)

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
    FUN_08968cc4(*param_4,param_2,param_3);
  }
  return;
}

