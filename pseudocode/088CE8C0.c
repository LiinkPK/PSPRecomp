/* Entry 0x088CE8C0 | file offset 0x000CB898 | FUN_088ce8c0 | bytes 168 */

undefined4 FUN_088ce8c0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088823c4(param_2,param_3,param_4,FUN_088ce5f4,"Update");
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
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
  return uVar2;
}

