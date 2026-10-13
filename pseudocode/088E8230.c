/* Entry 0x088E8230 | file offset 0x000E5208 | FUN_088e8230 | bytes 56 */

void FUN_088e8230(undefined4 *param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  if (param_2 == '\0') {
    iVar2 = 0;
    puVar1 = param_1 + 1;
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (iVar2 < 8);
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x11] = 0;
  return;
}

