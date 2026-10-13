/* Entry 0x08967438 | file offset 0x00164410 | FUN_08967438 | bytes 116 */

void FUN_08967438(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 *param_4)

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
    FUN_0896c9b0(*param_4,param_2,param_3);
  }
  return;
}

