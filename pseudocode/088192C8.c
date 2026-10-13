/* Entry 0x088192C8 | file offset 0x000162A0 | FUN_088192c8 | bytes 220 */

undefined4 FUN_088192c8(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 2) &&
     ((*(int *)(param_1 + 0x10) != 1 || (iVar1 = FUN_08819250(param_1), iVar1 != 0)))) {
    FUN_08818b28(param_1);
    *(undefined4 *)(param_1 + 0x10) = 2;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = param_2;
    *(undefined1 *)(param_1 + 0x44) = param_3;
    *(undefined1 *)(param_1 + 0x45) = param_4;
    uVar2 = FUN_0881baa8();
    FUN_0881c2cc(uVar2,*(undefined4 *)(param_1 + 0x48),0);
    FUN_088198f4(0,param_1);
  }
  return 0;
}

