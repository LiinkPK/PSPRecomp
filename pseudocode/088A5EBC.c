/* Entry 0x088A5EBC | file offset 0x000A2E94 | FUN_088a5ebc | bytes 96 */

void FUN_088a5ebc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    if (iVar1 == 0) {
      iVar2 = *param_1;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x40);
    }
    FUN_088a43ec(iVar1,3);
    iVar1 = iVar2;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

