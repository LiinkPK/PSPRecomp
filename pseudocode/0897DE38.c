/* Entry 0x0897DE38 | file offset 0x0017AE10 | FUN_0897de38 | bytes 120 */

void FUN_0897de38(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [56];
  
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
    uVar3 = *param_4;
    uVar2 = FUN_0898514c(auStack_40,param_3);
    FUN_08984508(uVar3,uVar2);
  }
  return;
}

