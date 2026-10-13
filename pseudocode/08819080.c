/* Entry 0x08819080 | file offset 0x00016058 | FUN_08819080 | bytes 192 */

undefined4 FUN_08819080(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 3;
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x44) = 0;
    *(undefined1 *)(param_1 + 0x45) = 0;
    uVar1 = FUN_08899300();
    FUN_088981b4(uVar1,(int)**(short **)(param_1 + 0x48),0,1);
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_0881559c(*(int *)(param_1 + 0x14));
    }
    uVar1 = FUN_0881baa8();
    FUN_0881cb3c(uVar1,(int)**(short **)(param_1 + 0x48),0);
    uVar1 = 0;
  }
  return uVar1;
}

