/* Entry 0x08862854 | file offset 0x0005F82C | FUN_08862854 | bytes 188 */

void FUN_08862854(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_08867984(param_1,0);
  if (*DAT_089d5ea0 == '\x01') {
    FUN_0885cbd8(uVar1,param_2,param_3,param_4);
  }
  else {
    iVar2 = FUN_08863148(uVar1,param_2,param_3);
    if (iVar2 == 0) {
      FUN_088714f4(*(undefined4 *)(DAT_089d5ea0 + 8),uVar1,param_2,param_3);
    }
  }
  return;
}

