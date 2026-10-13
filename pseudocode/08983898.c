/* Entry 0x08983898 | file offset 0x00180870 | FUN_08983898 | bytes 96 */

void FUN_08983898(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 *param_4)

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
    FUN_0898a25c(*param_4,param_3);
  }
  return;
}

