/* Entry 0x0881FA30 | file offset 0x0001CA08 | FUN_0881fa30 | bytes 188 */

undefined4 FUN_0881fa30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar2 = FUN_0881fc58(param_1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar2 = FUN_0881fc7c(param_1);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    uVar2 = FUN_0881fca0(param_1);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    uVar2 = FUN_0881fd54(param_1);
    iVar1 = FUN_0881faec(uVar2,param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

