/* Entry 0x08883538 | file offset 0x00080510 | FUN_08883538 | bytes 144 */

undefined4 FUN_08883538(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_089d69df == '\0') {
    if (DAT_089d69dc == '\0') {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_08883d0c(&DAT_09b49130,param_2);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
        *param_1 = *(undefined4 *)(iVar1 + 0x50);
        param_1[1] = *(undefined4 *)(iVar1 + 0x54);
        param_1[2] = *(undefined4 *)(iVar1 + 0x68);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

