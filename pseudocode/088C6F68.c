/* Entry 0x088C6F68 | file offset 0x000C3F40 | FUN_088c6f68 | bytes 108 */

void FUN_088c6f68(undefined2 *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[0xd] = 0;
  iVar2 = 0;
  puVar1 = param_1 + 0x1a;
  do {
    param_1[0x18] = 0xffff;
    FUN_088c6f54(puVar1);
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 2);
  return;
}

