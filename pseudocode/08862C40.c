/* Entry 0x08862C40 | file offset 0x0005FC18 | FUN_08862c40 | bytes 112 */

void FUN_08862c40(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_08867984(param_1,0);
  iVar2 = FUN_088631ac(uVar1);
  if (iVar2 == 0) {
    if (*DAT_089d5ea0 == '\x01') {
      FUN_0885cc24(uVar1);
    }
    else {
      FUN_08871644(*(undefined4 *)(DAT_089d5ea0 + 8),uVar1);
    }
  }
  return;
}

