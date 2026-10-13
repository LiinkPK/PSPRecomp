/* Entry 0x08839314 | file offset 0x000362EC | FUN_08839314 | bytes 224 */

undefined4 FUN_08839314(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08839050();
  if ((iVar1 == 0) && (iVar1 = FUN_088390c8(param_1), iVar1 == 0)) {
    if (((param_2 == '\x01') && (*(int *)(*(int *)(param_1 + 0x390) + 0x5c) != 0)) &&
       (iVar1 = FUN_088aa30c(*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x5c),param_1 + 0x4c8),
       iVar1 != 0)) {
      uVar2 = 0;
    }
    else if (*(short *)(*(int *)(param_1 + 0x390) + 0xe0) < 2) {
      iVar1 = FUN_0883ec9c(*(int *)(param_1 + 0x390) + 0x34);
      if ((iVar1 == 0) || (iVar1 = FUN_088426e4(*(int *)(param_1 + 0x390) + 0x60), iVar1 == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

