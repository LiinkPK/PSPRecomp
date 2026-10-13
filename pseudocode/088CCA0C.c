/* Entry 0x088CCA0C | file offset 0x000C99E4 | FUN_088cca0c | bytes 268 */

undefined4
FUN_088cca0c(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088cc914();
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088d0700(DAT_089d7830,param_5,param_6,param_7);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      iVar1 = FUN_088823c4(param_2,param_3,param_4,FUN_088ccb18,"Update");
      if (iVar1 == 0) {
        uVar2 = 0xfffffffd;
      }
      else {
        *(undefined1 **)(iVar1 + 4) = param_1;
        *(undefined1 *)(*(int *)(param_1 + 4) + 0x16) = 2;
        *(undefined1 *)(*(int *)(param_1 + 4) + 0x15) = 200;
        FUN_088cff30(DAT_089d7830,*(undefined4 *)(param_1 + 4));
        *param_1 = 1;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

