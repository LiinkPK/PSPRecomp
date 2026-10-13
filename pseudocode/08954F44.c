/* Entry 0x08954F44 | file offset 0x00151F1C | FUN_08954f44 | bytes 140 */

void FUN_08954f44(undefined4 param_1,uint *param_2,undefined4 param_3,int param_4)

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
    FUN_08955034(*(undefined4 *)(param_4 + 0x10),param_2,param_4,param_3,0);
  }
  else {
    FUN_08955034(*(undefined4 *)(param_4 + 0x10),param_2,param_4,param_3,1);
  }
  return;
}

