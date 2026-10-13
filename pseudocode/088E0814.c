/* Entry 0x088E0814 | file offset 0x000DD7EC | FUN_088e0814 | bytes 116 */

void FUN_088e0814(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x17b1) != '\0') {
    FUN_088e8268(param_1 + 0x1220);
    iVar1 = 0;
    while (iVar1 = FUN_0881cbb8(iVar1,0xffffffff), iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x544) + 0xfc))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x544) + 0xf8));
    }
    FUN_0881cb5c();
  }
  return;
}

