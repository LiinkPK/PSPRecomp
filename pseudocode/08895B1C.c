/* Entry 0x08895B1C | file offset 0x00092AF4 | FUN_08895b1c | bytes 104 */

void FUN_08895b1c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    uVar1 = FUN_088a5208(*param_1);
    iVar2 = FUN_088a54b0(DAT_089d6d78,param_2,uVar1,param_1[1],0);
    param_1[2] = iVar2;
    if (iVar2 != 0) {
      FUN_088a9a80();
    }
  }
  return;
}

